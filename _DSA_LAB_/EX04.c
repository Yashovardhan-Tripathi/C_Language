#include<stdio.h>

void bubbleSort(int arr[], int n) {
int i, j, temp;
int swapped;
for (i = 0; i < n- 1; i++) {
swapped = 0;
printf("Iteration %d:\n", i + 1);
for (j = 0; j < n- i- 1; j++) {
printf(" Comparing %d and %d\n", arr[j], arr[j + 1]);

if (arr[j] > arr[j + 1]) {
// Swap
temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;
swapped = 1;
printf(" Swapped %d and %d\n", arr[j + 1], arr[j]);
}
}
if (swapped == 0) {
break;
}
printf("Array after iteration %d: ", i + 1);
for (int k = 0; k < n; k++) {
printf("%d ", arr[k]);
}
printf("\n");
}
}
void selectionSort(int arr[], int n) {
int i, j, min_idx, temp;
for (i = 0; i < n- 1; i++) {
min_idx = i;
printf("Iteration %d:\n", i + 1);
for (j = i + 1; j < n; j++) {
printf(" Comparing %d and %d\n", arr[min_idx], arr[j]);

if (arr[j] < arr[min_idx]) {
min_idx = j;
}
}
// Swap the found minimum element with the first element
temp = arr[min_idx];
arr[min_idx] = arr[i];
arr[i] = temp;
printf(" Swapped %d with %d\n", arr[i], arr[min_idx]);

printf("Array after iteration %d: ", i + 1);
for (int k = 0; k < n; k++) {
printf("%d ", arr[k]);
}
printf("\n");
}
}
void insertionSort(int arr[], int n) {
    int i, key, j;
for (i = 1; i < n; i++) {
key = arr[i];
j = i
- 1;
printf("Iteration %d:\n", i);
printf(" Key = %d\n", key);
// Move elements of arr[0..i-1] that are greater than key

while (j >= 0 && arr[j] > key) {
printf(" Moving %d to the right\n", arr[j]);

arr[j + 1] = arr[j];
j--
;
}
arr[j + 1] = key;
printf("Array after inserting %d: ", key);
for (int k = 0; k < n; k++) {
printf("%d ", arr[k]);
}
printf("\n");
}
}
int main() {
int arr[100], n, choice;
printf("Enter the number of elements: ");
scanf("%d", &n);
printf("Enter %d elements:\n", n);
for (int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
do {
printf("\nMenu:\n");
printf("1. Bubble Sort\n");
printf("2. Selection Sort\n");
printf("3. Insertion Sort\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
// Create a copy of the original array for each sorting method
int tempArr[100];
for (int i = 0; i < n; i++) {
tempArr[i] = arr[i];
}
switch (choice) {
case 1:
printf("\nBubble Sort:\n");
bubbleSort(tempArr, n);
break;
case 2:
printf("\nSelection Sort:\n");
selectionSort(tempArr, n);
break;
case 3:
printf("\nInsertion Sort:\n");
insertionSort(tempArr, n);
break;
case 4:
printf("Exiting...\n");
break;
default:
printf("Invalid choice! Please try again.\n");
}
} while (choice != 4);
printf("Final array: ");
for (int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
printf("\n");
return 0;
}