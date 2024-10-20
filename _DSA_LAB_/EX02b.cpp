#include <stdio.h>
#include <string.h>
// Function prototypes
void stringLength(char str[]);
void stringCopy(char source[], char destination[]);
void stringConcatenate(char str1[], char str2[], char result[]);
void checkPalindrome(char str[]);
void stringReverse(char str[]);
int countSubstring(char str[], char substr[]);
int main()
{
    printf("Name:Yashovardhan Tripathi\n");
    printf("PRN No.:230105231360\n");
    printf("Division: D\n");
    printf("Roll No.: 14\n");
    printf("Experiment No:02\n\n");
    char str1[100], str2[100], result[200], substr[100];
    int choice;
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline character
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline character
    do
    {
        printf("\nMenu:\n");
        printf("1. String Length\n");
        printf("2. String Copy\n");
        printf("3. String Concatenation\n");
        printf("4. Check Palindrome\n");
        printf("5. String Reverse\n");
        printf("6. Count Occurrences of Substring\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline character after choice
        switch (choice)
        {
        case 1:
            stringLength(str1);
            break;
        case 2:
            stringCopy(str1, result);
            break;
        case 3:
            stringConcatenate(str1, str2, result);
            break;
        case 4:
            checkPalindrome(str1);
            break;
        case 5:
            stringReverse(str1);
            break;
        case 6:
            printf("Enter substring to search: ");
            fgets(substr, sizeof(substr), stdin);
            substr[strcspn(substr, "\n")] = '\0'; // Remove newline character
            int count = countSubstring(str1, substr);
            printf("Occurrences of \"%s\" in \"%s\": %d\n", substr, str1, count);
            break;
        case 7:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 7);
    return 0;
}
// Function to find the length of a string
void stringLength(char str[])
{
    printf("Length of the string \"%s\" is: %lu\n", str, strlen(str));
}
// Function to copy one string to another
void stringCopy(char source[], char destination[])
{
    strcpy(destination, source);
    printf("Copied string: \"%s\"\n", destination);
}
// Function to concatenate two strings
void stringConcatenate(char str1[], char str2[], char result[])
{
    strcpy(result, str1);
    strcat(result, str2);
    printf("Concatenated string: \"%s\"\n", result);
}
// Function to check if a string is a palindrome
void checkPalindrome(char str[]) {
int len = strlen(str);
int isPalindrome = 1;
for (int i = 0; i < len / 2; i++)
{
    if (str[i] != str[len - i - 1])
    {
        isPalindrome = 0;
        break;
    }
}
if (isPalindrome)
{
    printf("\"%s\" is a palindrome.\n", str);
}
else
{
    printf("\"%s\" is not a palindrome.\n", str);
}
}
// Function to reverse a string
void stringReverse(char str[])
{
    int len = strlen(str);
    char reversed[100];
    for (int i = 0; i < len; i++)
    {
        reversed[i] = str[len - i - 1];
    }
    reversed[len] = '\0'; // Null-terminate the reversed string
    printf("Reversed string: \"%s\"\n", reversed);
}
// Function to count occurrences of a substring
int countSubstring(char str[], char substr[])
{
    int count = 0;
    char *pos = strstr(str, substr);
    while (pos != NULL)
    {
        count++;
        pos = strstr(pos + 1, substr); // Move to the next occurrence
    }
    return count;
}