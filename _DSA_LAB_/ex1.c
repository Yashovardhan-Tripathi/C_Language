#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct CircularQueue {
    Node *front;
    Node *rear;
} CircularQueue;

// Function prototypes
CircularQueue *createQueue();
int isEmpty(CircularQueue *q);
void enqueue(CircularQueue *q, int data);
int dequeue(CircularQueue *q);
int getFront(CircularQueue *q);
int getRear(CircularQueue *q);
void displayQueue(CircularQueue *q);
void menu();

int main() {
    CircularQueue *q = createQueue();
    int choice, value;
    printf("Name:Yashovardhan Tripathi\n");
    printf("PRN No.:230105231360\n");
    printf("Division: D\n");
    printf("Roll No.: 14\n");
    printf("Experiment No:05\n\n\n");

    while (1) {

    
        menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(q, value);
                break;
            case 2:
                value = dequeue(q);
                if (value != -1) {
                    printf("Dequeued value: %d\n", value);
                }
                break;
            case 3:
                value = getFront(q);
                if (value != -1) {
                    printf("Front value: %d\n", value);
                }
                break;
            case 4:
                value = getRear(q);
                if (value != -1) {
                    printf("Rear value: %d\n", value);
                }
                break;
            case 5:
                displayQueue(q);
                break;
            case 6:
                free(q);
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

// Function to create a new queue
CircularQueue *createQueue() {
    CircularQueue *q = (CircularQueue *)malloc(sizeof(CircularQueue));
    q->front = q->rear = NULL;
    return q;
}

// Function to check if the queue is empty
int isEmpty(CircularQueue *q) {
    return q->front == NULL;
}

// Function to enqueue an element
void enqueue(CircularQueue *q, int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (isEmpty(q)) {
        q->front = q->rear = newNode;
        newNode->next = newNode; // Point to itself (circular reference)
    } else {
        newNode->next = q->front;
        q->rear->next = newNode;
        q->rear = newNode;
    }

    printf("Enqueued value: %d\n", data);
}

// Function to dequeue an element
int dequeue(CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return -1;
    }

    Node *temp = q->front;
    int data = temp->data;

    if (q->front == q->rear) { // Only one element in the queue
        q->front = q->rear = NULL;
    } else {
        q->front = q->front->next;
        q->rear->next = q->front;
    }

    free(temp);
    return data;
}

// Function to get the front element
int getFront(CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return -1;
    }
    return q->front->data;
}

// Function to get the rear element
int getRear(CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return -1;
    }
    return q->rear->data;
}

// Function to display the elements of the queue
void displayQueue(CircularQueue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }

    Node *temp = q->front;
    printf("Queue elements: ");
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != q->front);
    printf("\n");
}

// Function to display the menu
void menu() {
    
    printf("\nCircularQueue Menu:\n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Get Front\n");
    printf("4. Get Rear\n");
    printf("5. Display Queue\n");
    printf("6. Exit\n");
}