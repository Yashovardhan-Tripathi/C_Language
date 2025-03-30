#include <iostream>
#include <string>
using namespace std;
// Define a class for the circular queue
class CircularQueue
{
private:
    int front, rear, size, capacity;
    string *orders;

public:
    // Constructor
    CircularQueue(int maxOrders)
    {
        capacity = maxOrders;
        orders = new string[capacity];
        front = 0;
        rear = -1;
        size = 0;
    }
    // Destructor
    ~CircularQueue()
    {
        delete[] orders;
    }
    // Function to check if the queue is empty
    bool isEmpty() const
    {
        return size == 0;
    }
    // Function to check if the queue is full
    bool isFull() const
    {
        return size == capacity;
    }
    // Function to add an order to the queue
    void addOrder(const string &order)
    {
        if (isFull())
        {
            cout << "Order queue is full. Cannot accept new orders." << endl;
            return;
        }
        rear = (rear + 1) % capacity;
        orders[rear] = order;
        size++;
        cout << "Order added: " << order << endl;
    }
    // Function to serve an order from the queue
    void serveOrder()
    {
        if (isEmpty())
        {
            cout << "No orders to serve." << endl;
            return;
        }
        cout << "Order served: " << orders[front] << endl;
        front = (front + 1) % capacity;
        size--;
    }
    // Function to display all current orders in the queue
    void displayOrders() const
    {
        if (isEmpty())
        {
            cout << "No orders in the queue." << endl;
            return;
        }
        cout << "Current Orders in the queue:" << endl;
        for (int i = 0; i < size; i++)
        {
            int index = (front + i) % capacity;
            cout << orders[index] << endl;
        }
    }
};
int main()
{
     printf("Name:Yashovardhan Tripathi\n");
    printf("PRN No.:230105231360\n");
    printf("Division: D\n");
    printf("Roll No.: 14\n");
    printf("Experiment No:12\n\n");
    int maxOrders;
    cout << "Enter maximum number of orders the pizza parlor can accept: ";
    cin >> maxOrders;
    CircularQueue orderQueue(maxOrders);
    int choice;
    string order;
    while (true)
    {
        cout << "\nPizza Parlor Menu:\n";
        cout << "1. Add Order\n";
        cout << "2. Serve Order\n";
        cout << "3. Display Orders\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Ignore newline character left in the buffer
        switch (choice)
        {
        case 1:
            cout << "Enter order description: ";
            getline(cin, order);
            orderQueue.addOrder(order);
            break;
        case 2:
            orderQueue.serveOrder();
            break;
        case 3:
            orderQueue.displayOrders();
            break;
        case 4:
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }
}