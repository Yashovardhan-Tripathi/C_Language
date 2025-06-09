#include <stdio.h>
#include <stdbool.h>
// Function prototypes
void inputRollNumbers(int rollNumbers[], int count);
bool linearSearch(int rollNumbers[], int count, int rollNumber);
bool binarySearch(int rollNumbers[], int count, int rollNumber);
bool fibonacciSearch(int rollNumbers[], int count, int rollNumber);
void sortArray(int rollNumbers[], int count);
void swap(int* a, int* b);
int main() {
     printf("Name:Yashovardhan Tripathi\n");
    printf("PRN No.:230105231360\n");
    printf("Division: D\n");
    printf("Roll No.: 14\n");
    printf("Experiment No:13\n\n");
    int n, rollNumber;
 printf("Enter the number of students: ");
 scanf("%d", &n);
 int rollNumbers[n];
 inputRollNumbers(rollNumbers, n);
 // Sort the array for binary and Fibonacci search
 sortArray(rollNumbers, n);
 printf("Enter roll number to search: ");
 scanf("%d", &rollNumber);
 // Linear Search
 if (linearSearch(rollNumbers, n, rollNumber)) {
 printf("Roll number %d is present (found by Linear Search).\n", rollNumber);
 } else {
 printf("Roll number %d is not present (not found by Linear Search).\n", rollNumber);
 }
 // Binary Search
 if (binarySearch(rollNumbers, n, rollNumber)) {
 printf("Roll number %d is present (found by Binary Search).\n", rollNumber);
 } else {
 printf("Roll number %d is not present (not found by Binary Search).\n", rollNumber);
 }
 // Fibonacci Search
 if (fibonacciSearch(rollNumbers, n, rollNumber)) {
 printf("Roll number %d is present (found by Fibonacci Search).\n", rollNumber);
 } else {
 printf("Roll number %d is not present (not found by Fibonacci Search).\n", rollNumber);
 }
 return 0;
}
// Function to input roll numbers
void inputRollNumbers(int rollNumbers[], int count) {
 printf("Enter roll numbers:\n");
 for (int i = 0; i < count; i++) {
 printf("Roll number %d: ", i + 1);
 scanf("%d", &rollNumbers[i]);
 }
}
// Linear search function
bool linearSearch(int rollNumbers[], int count, int rollNumber) {
 for (int i = 0; i < count; i++) {
 if (rollNumbers[i] == rollNumber) {
 return true;
 }
 }
 return false;
}
// Binary search function
bool binarySearch(int rollNumbers[], int count, int rollNumber) {
 int left = 0;
 int right = count - 1;
 while (left <= right) {
 int mid = left + (right - left) / 2;
 if (rollNumbers[mid] == rollNumber) {
 return true;
 }
 if (rollNumbers[mid] < rollNumber) {
 left = mid + 1;
 } else {
 right = mid - 1;
 }
 }
 return false;
}
// Fibonacci search function
bool fibonacciSearch(int rollNumbers[], int count, int rollNumber) {
 int fibMm2 = 0;
 int fibMm1 = 1;
 int fibM = fibMm1 + fibMm2;
 while (fibM < count) {
 fibMm2 = fibMm1;
 fibMm1 = fibM;
 fibM = fibMm1 + fibMm2;
 }
 int offset = -1;
 while (fibM > 1) {
 int i = (offset + fibMm2 < count - 1) ? offset + fibMm2 : count - 1;
 if (rollNumbers[i] < rollNumber) {
 fibM = fibMm1;
 fibMm1 = fibMm2;
 fibMm2 = fibM - fibMm1;
 offset = i;
 } else if (rollNumbers[i] > rollNumber) {
 fibM = fibMm2;
 fibMm1 = fibMm1 - fibMm2;
 fibMm2 = fibM - fibMm1;
 } else {
 return true;
 }
 }
 if (fibMm1 && rollNumbers[offset + 1] == rollNumber) {
 return true;
  }
 return false;
}
// Function to sort the array using bubble sort
void sortArray(int rollNumbers[], int count) {
 for (int i = 0; i < count - 1; i++) {
 for (int j = 0; j < count - i - 1; j++) {
 if (rollNumbers[j] > rollNumbers[j + 1]) {
 swap(&rollNumbers[j], &rollNumbers[j + 1]);
 }
 }
 }
}
// Function to swap two elements
void swap(int* a, int* b) {
 int temp = *a;
 *a = *b;
 *b = temp;
}
