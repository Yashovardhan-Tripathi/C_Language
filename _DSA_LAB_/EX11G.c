#include <stdio.h>
#include <stdlib.h>
// Define a node for the adjacency list
typedef struct AdjListNode
{
    int dest;
    struct AdjListNode *next;
} AdjListNode;
// Define a structure for a vertex in the graph
typedef struct AdjList
{
    AdjListNode *head;
} AdjList;
// Define a structure for the graph
typedef struct Graph
{
    int V;
    AdjList *array;
} Graph;
// Function to create a new adjacency list node
AdjListNode *createNode(int dest)
{
    AdjListNode *newNode = (AdjListNode *)malloc(sizeof(AdjListNode));
    newNode->dest = dest;
    newNode->next = NULL;
    return newNode;
}
// Function to create a graph with V vertices
Graph *createGraph(int V)
{
    Graph *graph = (Graph *)malloc(sizeof(Graph));
    graph->V = V;
    graph->array = (AdjList *)malloc(V * sizeof(AdjList));
    for (int i = 0; i < V; ++i)
    {
        graph->array[i].head = NULL;
    }
    return graph;
}
// Function to add an edge to an undirected graph
void addEdge(Graph *graph, int src, int dest)
{
    // Add an edge from src to dest
    AdjListNode *newNode = createNode(dest);
    newNode->next = graph->array[src].head;
    graph
        ->array[src]
        .head = newNode;
    // Add an edge from dest to src (undirected graph)
    newNode = createNode(src);
    newNode
        ->next = graph
                     ->array[dest]
                     .head;
    graph
        ->array[dest]
        .head = newNode;
}
// Function to print the graph
void printGraph(Graph *graph)
{
    for (int i = 0; i < graph
                            ->V;
         ++i)
    {
        AdjListNode *temp = graph
                                ->array[i]
                                .head;
        printf("Vertex %d: ", i);
        while (temp)
        {
            printf("%d->", temp
                       ->dest);
            temp = temp
                       ->next;
        }
 printf("NULL\n");
    }
}
// Depth- First Search(DFS)utility function 
void DFSUtil(Graph *graph, int v, int visited[])
{
    visited[v] = 1;
    printf("%d ", v);
    AdjListNode *adjList = graph
                               ->array[v]
                               .head;
    while (adjList)
    {
        int adjVertex = adjList
                            ->dest;
        if (!visited[adjVertex])
        {
            DFSUtil(graph, adjVertex, visited);
        }
        adjList = adjList
                      ->next;
    }
}
// Function to perform DFS traversal
void DFS(Graph *graph, int startVertex)
{
    int *visited = (int *)malloc(graph
                                     ->V *
                                 sizeof(int));
    for (int i = 0; i < graph
                            ->V;
         ++i)
    {
        visited[i] = 0;
    }
 printf("DFS starting from vertex %d:\n", startVertex);
 DFSUtil(graph, startVertex, visited);
 printf("\n");
 free(visited);
}
// Function to free the graph
void freeGraph(Graph *graph)
{
    for (int i = 0; i < graph
                            ->V;
         ++i)
    {
        AdjListNode *temp = graph
                                ->array[i]
                                .head;
        while (temp)
        {
            AdjListNode *next = temp
                                    ->next;
            free(temp);
            temp = next;
        }
    }
    free(graph
             ->array);
    free(graph);
}
int main()
{
     printf("Name:Yashovardhan Tripathi\n");
    printf("PRN No.:230105231360\n");
    printf("Division: D\n");
    printf("Roll No.: 14\n");
    printf("Experiment No:11\n\n");
    int V, src, dest;
    printf("Enter number of vertices: ");
    scanf("%d", &V);
    Graph *graph = createGraph(V);
    while (1)
    {
 printf("\nGraph Operations Menu:\n");
 printf("1. Add Edge\n");
 printf("2. Print Graph\n");
 printf("3. Perform DFS\n");
 printf("4. Exit\n");
 printf("Enter your choice: ");
 int choice;
 scanf("%d", &choice);
 switch (choice) {
        case 1:
            printf("Enter source and destination vertices: ");
            scanf("%d %d", &src, &dest);
            if (src >= 0 && src < V && dest >= 0 && dest < V)
            {
                addEdge(graph, src, dest);
 printf("Edge added successfully.\n");
            }
            else
            {
 printf("Invalid vertices.\n");
            }
            break;
        case 2:
            printGraph(graph);
            break;
        case 3:
            printf("Enter starting vertex for DFS: ");
            scanf("%d", &src);
            if (src >= 0 && src < V)
            {
                DFS(graph, src);
            }
            else
            {
                printf("Invalid vertex.\n");
            }
            break;
        case 4:
            freeGraph(graph);
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");

}
    }
}