#include <stdio.h>
#include <string.h>
#define MAX_RECORDS 100
#define NAME_LENGTH 50
// Define a struct for a record
typedef struct
{
    int id;
    char name[NAME_LENGTH];
    float pervalue;
} Record;
// Global array and counter for records
Record database[MAX_RECORDS];
int record_count = 0;
// Function prototypes
void addRecord();
void deleteRecord();
void modifyRecord();
void searchRecord();
void sortRecords();
void displayRecords();
int main()
{
    printf("Name:Yashovardhan Tripathi\n");
    printf("PRN No.:230105231360\n");
    printf("Division: D\n");
    printf("Roll No.: 14\n");
    printf("Experiment No:03\n\n");
    int choice;
    while (1)
    {
        printf("\nDatabase Operations Menu:\n");
        printf("1. Add Record\n");
        printf("2. Delete Record\n");
        printf("3. Modify Record\n");
        printf("4. Search Record\n");
        printf("5. Sort Records\n");
        printf("6. Display Records\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addRecord();
            break;
        case 2:
            deleteRecord();
            break;

        case 3:
            modifyRecord();
            break;
        case 4:
            searchRecord();
            break;
        case 5:
            sortRecords();
            break;
        case 6:
            displayRecords();
            break;
        case 7:
            return 0;
        default:
            printf("Invalid choice, please try again.\n");
        }
    }
}
// Function to add a record
void addRecord()
{
    if (record_count >= MAX_RECORDS)
    {
        printf("Database is full. Cannot add more records.\n");
        return;
    }
    Record new_record;
    printf("Enter ID: ");
    scanf("%d", &new_record.id);
    printf("Enter Name: ");
    scanf("%s", new_record.name);
    printf("Enter Percentage: ");
    scanf("%f", &new_record.pervalue);
    database[record_count++] = new_record;
    printf("Record added successfully.\n");
}
// Function to delete a record by ID
void deleteRecord()
{
    int id, i, found = 0;
    printf("Enter ID of record to delete: ");
    scanf("%d", &id);
    for (i = 0; i < record_count; i++)
    {
        if (database[i].id == id)
        {
            found = 1;
            for (int j = i; j < record_count - 1; j++)
            {
                database[j] = database[j + 1];
            }
            record_count--;
            printf("Record deleted successfully.\n");
            break;
        }
    }
    if (!found)
    {
        printf("Record with ID %d not found.\n", id);
    }
}
// Function to modify a record by ID
void modifyRecord()
{
    int id, found = 0;
    printf("Enter ID of record to modify: ");
    scanf("%d", &id);
    for (int i = 0; i < record_count; i++)
    {
        if (database[i].id == id)
        {
            found = 1;
            printf("Enter new Name: ");
            scanf("%s", database[i].name);
            printf("Enter new Value: ");
            scanf("%f", &database[i].pervalue);
            printf("Record modified successfully.\n");
            break;
        }
    }
    if (!found)
    {
        printf("Record with ID %d not found.\n", id);
    }
}
// Function to search for a record by ID
void searchRecord()
{
    int id, found = 0;
    printf("Enter ID of record to search: ");
    scanf("%d", &id);
    for (int i = 0; i < record_count; i++)
    {
        if (database[i].id == id)
        {
            printf("Record found:\n");
            printf("ID: %d\n", database[i].id);
            printf("Name: %s\n", database[i].name);
            printf("Value: %.2f\n", database[i].pervalue);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Record with ID %d not found.\n", id);
    }
}
// Function to sort records by ID (ascending)
void sortRecords()
{
    for (int i = 0; i < record_count - 1; i++)
    {
        for (int j = i + 1; j < record_count; j++)
        {
            if (database[i].id > database[j].id)
            {
                Record temp = database[i];
                database[i] = database[j];
                database[j] = temp;
            }
        }
    }
    printf("Records sorted successfully.\n");
}
// Function to display all records
void displayRecords()
{
    if (record_count == 0)
    {
        printf("No records to display.\n");
        return;
    }
    printf("Displaying all records:\n");
    for (int i = 0; i < record_count; i++)
    {
        printf("ID: %d\n", database[i].id);
        printf("Name: %s\n", database[i].name);
        printf("Value: %.2f\n", database[i].pervalue);
        printf("\n");
    }
}