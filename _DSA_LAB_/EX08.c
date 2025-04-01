#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void displayArray(int arr[], int size);
void insertAtStart(int arr[], int *size, int value);
void insertAtEnd(int arr[], int *size, int value);
void insertAtPosition(int arr[], int *size, int value, int pos);
void deleteAtPosition(int arr[], int *size, int pos);
void searchElement(int arr[], int size, int value);
void reverseArray(int arr[], int size);
int main() {
     printf("Name:Yashovardhan Tripathi\n");
    printf("PRN No.:230105231360\n");
    printf("Division: D\n");
    printf("Roll No.: 14\n");
    printf("Experiment No:08\n\n");
int i,j,arr[MAX];
int size = 0, choice, value, pos;
while (1) {
printf("\nMenu:\n");
printf("1. Create Array\n");
printf("2. Insert at Start\n");
printf("3. Insert at End\n");
printf("4. Insert at Position\n");
printf("5. Delete at Position\n");
printf("6. Search Element\n");
printf("7. Reverse Array\n");
printf("8. Display Array\n");
printf("9. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
printf("Enter number of elements: ");
scanf("%d", &size);
if (size > MAX) {
printf("Size exceeds maximum allowed. Setting size to %d.\n", MAX);
size = MAX;
}
printf("Enter elements:\n");
for ( i = 0; i < size; i++) {
scanf("%d", &arr[i]);
}
break;
case 2:
printf("Enter value to insert at start: ");
scanf("%d", &value);
insertAtStart(arr, &size, value);
break;
case 3:
printf("Enter value to insert at end: ");
scanf("%d", &value);
insertAtEnd(arr, &size, value);
break;
case 4:
printf("Enter value and position to insert: ");
scanf("%d %d", &value, &pos);
if (pos >= 0 && pos <= size) {
insertAtPosition(arr, &size, value, pos);
} else {
printf("Invalid position.\n");
}
break;
case 5:
printf("Enter position to delete: ");
scanf("%d", &pos);
if (pos >= 0 && pos < size) {
deleteAtPosition(arr, &size, pos);
} else {
printf("Invalid position.\n");
}
break;
case 6:
printf("Enter value to search: ");
scanf("%d", &value);
searchElement(arr, size, value);
break;
case 7:
reverseArray(arr, size);
break;
case 8:
displayArray(arr, size);
break;
case 9:
exit(0);
default:
printf("Invalid choice.\n");
}
}
return 0; }
void displayArray(int arr[], int size) {
int i;
if (size == 0) {
printf("Array is empty.\n");

return;
}
printf("Array elements:\n");
for (i = 0; i < size; i++) {
printf("%d ", arr[i]);
}
printf("\n");
}
void insertAtStart(int arr[], int *size, int value) {
int i,j;
if (*size >= MAX) {
printf("Array is full. Cannot insert at start.\n");

return;
}
for (i = *size; i > 0; i--) {
arr[i] = arr[i
- 1];

}
arr[0] = value;
(*size)++; }
void insertAtEnd(int arr[], int *size, int value) {
if (*size >= MAX) {
printf("Array is full. Cannot insert at end.\n");

return;
}
arr[*size] = value;
(*size)++; }
void insertAtPosition(int arr[], int *size, int value, int pos) {
int i;
if (*size >= MAX)
{
int i;
printf("Array is full. Cannot insert at position.\n");

return;
}
if (pos < 0 || pos > *size) {
printf("Invalid position.\n");

return;
}
for (i = *size; i > pos; i--) {
arr[i] = arr[i
- 1];

}
arr[pos] = value;
(*size)++;
}
void deleteAtPosition(int arr[], int *size, int pos)
{
int i;
if (pos < 0 || pos >= *size) {
printf("Invalid position.\n");
return;
}
for (i = pos; i < *size - 1; i++)
{
arr[i] = arr[i + 1];
}
(*size)--;
}
void searchElement(int arr[], int size, int value)
{int i;
for ( i = 0; i < size; i++)
{
if (arr[i] == value)
{
printf("Element %d found at position %d.\n", value, i);
return;
}
}
printf("Element %d not found.\n", value);
}
void reverseArray(int arr[], int size) {
int start = 0, end = size - 1;
while (start < end) {
int temp = arr[start];
arr[start] = arr[end];
arr[end] = temp;
start++;
end--;
}
printf("Array reversed.\n");
}