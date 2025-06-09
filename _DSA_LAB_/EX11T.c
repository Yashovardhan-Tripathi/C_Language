#include <stdio.h>
#include <stdlib.h>
// Define a node of the binary tree
typedef struct TreeNode
{
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;
// Function to create a new node
TreeNode *createNode(int data)
{
    TreeNode *newNode = (TreeNode *)malloc(sizeof(TreeNode));
    newNode
        ->data = data;
    newNode
        ->left = newNode
                     ->right = NULL;
    return newNode;
}
// Function to insert a new node into the BST
TreeNode *insertNode(TreeNode *root, int data)
{
    if (root == NULL)
    {
        return createNode(data);
    }
    if (data < root
                   ->data)
    {
        root
            ->left = insertNode(root
                                    ->left,
                                data);
    }
    else if (data > root
                        ->data)
    {
        root
            ->right = insertNode(root
                                     ->right,
                                 data);
    }
    return root;
}
// Function to find the minimum value node in a given subtree
TreeNode *findMin(TreeNode *root)
{
    while (root && root
                           ->left != NULL)
    {
        root = root
                   ->left;
    }
    return root;
}
// Function to delete a node from the BST
TreeNode *deleteNode(TreeNode *root, int data)
{
    if (root == NULL)
    {
        return root;
    }
    if (data < root
                   ->data)
    {
        root
            ->left = deleteNode(root
                                    ->left,
                                data);
    }
    else if (data > root
                        ->data)
    {
        root
            ->right = deleteNode(root
                                     ->right,
                                 data);
    }
    else
    {
        if (root
                ->left == NULL)
        {
            TreeNode *temp = root
                                 ->right;
            free(root);
            return temp;
        }
        else if (root
                     ->right == NULL)
        {
            TreeNode *temp = root
                                 ->left;
            free(root);
            return temp;
        }
        TreeNode *temp = findMin(root
                                     ->right);
        root
            ->data = temp
                         ->data;
        root
            ->right = deleteNode(root
                                     ->right,
                                 temp
                                     ->data);
    }
    return root;
}
// Function to search for a node in the BST
TreeNode *searchNode(TreeNode *root, int data)
{
    if (root == NULL || root
                                ->data == data)
    {
        return root;
    }
    if (data < root
                   ->data)
    {
        return searchNode(root
                              ->left,
                          data);
    }
    return searchNode(root
                          ->right,
                      data);
}
// Function for in - order traversal of the BST
void inorderTraversal(TreeNode *root)
{
    if (root != NULL)
    {
        inorderTraversal(root
                             ->left);
        printf("%d ", root
                          ->data);
        inorderTraversal(root
                             ->right);
    }
}
// Function to free the BST
void freeTree(TreeNode *root)
{
    if (root != NULL)
    {
        freeTree(root
                     ->left);
        freeTree(root
                     ->right);
        free(root);
    }
}
int main()
{
     printf("Name:Yashovardhan Tripathi\n");
    printf("PRN No.:230105231360\n");
    printf("Division: D\n");
    printf("Roll No.: 14\n");
    printf("Experiment No:11\n\n");
    TreeNode *root = NULL;
    int choice, value;
    TreeNode *result;
    while (1)
    {
        printf("\nBinary Search Tree Operations Menu:\n");
        printf("1. Insert Node\n");
        printf("2. Delete Node\n");
        printf("3. Search Node\n");
        printf("4. In-order Traversal\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            root = insertNode(root, value);
            printf("Node inserted successfully.\n");
            break;
        case 2:
            printf("Enter value to delete: ");
            scanf("%d", &value);
            root = deleteNode(root, value);
            printf("Node deleted successfully.\n");
            break;
        case 3:
            printf("Enter value to search: ");
            scanf("%d", &value);
            result = searchNode(root, value);
            if (result != NULL)
            {
                printf("Node with value %d found.\n", value);
            }
            else
            {
                printf("Node with value %d not found.\n", value);
            }
            break;
        case 4:
            printf("In-order Traversal: ");
            inorderTraversal(root);
            printf("\n");
            break;
        case 5:
            freeTree(root);
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
}
