#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Define a structure for a job
typedef struct Job
{
    int jobId;
    char jobName[100];
    struct Job *next;
} Job;
// Function to create a new job node
Job *createJob(int jobId, const char *jobName)
{
    Job *newJob = (Job *)malloc(sizeof(Job));
    newJob->jobId = jobId;
    strncpy(newJob->jobName, jobName, sizeof(newJob->jobName) - 1);
    newJob->jobName[sizeof(newJob->jobName) - 1] = '\0'; // Ensure null-termination
    newJob->next = NULL;
    return newJob;
}
// Function to add a job to the end of the queue
void addJob(Job **head, int jobId, const char *jobName)
{
    Job *newJob = createJob(jobId, jobName);
    if (*head == NULL)
    {
        *head = newJob;
    }
    else
    {
        Job *temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newJob;
    }
    printf("Job added: ID = %d, Name = %s\n", jobId, jobName);
}
// Function to delete a job from the front of the queue
void deleteJob(Job **head)
{
    if (*head == NULL)
    {
        printf("Job queue is empty. Nothing to delete.\n");
        return;
    }
    Job *temp = *head;
    *head = (*head)->next;
    printf("Job deleted: ID = %d, Name = %s\n", temp->jobId, temp->jobName);
    free(temp);
}
// Function to display all jobs in the queue
void displayJobs(Job *head)
{
    if (head == NULL)
    {
        printf("Job queue is empty.\n");
        return;
    }
    Job *temp = head;
    printf("Job Queue:\n");
    while (temp != NULL)
    {
        printf("ID = %d, Name = %s\n", temp->jobId, temp->jobName);
        temp = temp->next;
    }
}
// Function to free all jobs in the queue
void freeJobs(Job *head)
{
    Job *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}
int main()
{
     printf("Name:Yashovardhan Tripathi\n");
    printf("PRN No.:230105231360\n");
    printf("Division: D\n");
    printf("Roll No.: 14\n");
    printf("Experiment No:10\n\n");
    Job *jobQueue = NULL;
    int choice, jobId;
    char jobName[100];
    while (1)
    {
        printf("\nJob Queue Operations Menu:\n");
        printf("1. Add Job\n");
        printf("2. Delete Job\n");
        printf("3. Display Jobs\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // To consume the newline character after scanf
        switch (choice)
        {
        case 1:
            printf("Enter job ID: ");
            scanf("%d", &jobId);
            getchar(); // To consume the newline character after scanf
            printf("Enter job name: ");
            fgets(jobName, sizeof(jobName), stdin);
            jobName[strcspn(jobName, "\n")] = '\0'; // Remove newline character
            addJob(&jobQueue, jobId, jobName);
            break;
        case 2:
            deleteJob(&jobQueue);
            break;
        case 3:
            displayJobs(jobQueue);
            break;
        case 4:
            freeJobs(jobQueue);
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
}