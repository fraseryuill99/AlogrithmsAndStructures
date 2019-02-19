#include <stdio.h>
#include <stdlib.h>

#define NUM_VERTICES 6

struct Graph
{
	struct Node* head[NUM_VERTICES];
};

struct Node
{
	int target;
	struct Node *next;
};

struct Edge
{
	int source;
	int target;
};

struct Graph* create_graph(struct Edge edges[], int num_edges)
{
	int i;
	struct Graph *graph = (struct Graph*) malloc(sizeof(struct graph));
	
	for(i = 0; i < NUM_VERTICES; i++)
	{
		graph -> head[i] = NULL;
	}
	
	for(i = 0; i < num_edges; i++)
	{
		int source = edges[i].source;
		int target = edges[i].target;
		struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
		new_node -> target = target;
		new_node -> next = graph -> head[source];
		graph -> head[source] = new_node;
	}
	
	return graph;
}

void print_graph(struct Graph* graph)
{
	int i;
	for(i = 0; i < NUM_VERTICES; i++)
	{
		struct Node* ptr = graph -> head[i];
		while(ptr != NULL)
		{
			printf("(%d -> %d)\t", i, ptr -> target);
			ptr = ptr -> next;
		}

		printf("\n");
	}	
}	