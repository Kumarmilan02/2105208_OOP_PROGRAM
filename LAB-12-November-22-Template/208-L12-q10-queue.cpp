/*10.(Class Template) Program to create a class called QUEUE with the
member functions to add and to delete an element from the queue. Using
these functions, implement a queue of integer and double. Demonstrate the
operations by displaying the contents of the queue after every operation.*/

#include <iostream>
#include <cstdlib>
using namespace std;
#define SIZE 10
template <class X>
class queue
{
    X *arr;
    int capacity;
    int front;
    int rear;
    int count;

public:
    queue(int size = SIZE);
    void dequeue();
    void enqueue(X x);
    X peek();
    int size();
    bool isEmpty();
    bool isFull();
};

// Constructor to initialize a queue
template <class X>
queue<X>::queue(int size)
{
    arr = new X[size];
    capacity = size;
    front = 0;
    rear = -1;
    count = 0;
}

// Utility function to dequeue the front element
template <class X>
void queue<X>::dequeue()
{
    // check for queue underflow
    if (isEmpty())
    {
        cout << "Underflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }

    cout << "Removing " << arr[front] << endl;

    front = (front + 1) % capacity;
    count--;
}

// Utility function to add an item to the queue
template <class X>
void queue<X>::enqueue(X item)
{
    // check for queue overflow
    if (isFull())
    {
        cout << "Overflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }

    cout << "Inserting " << item << endl;

    rear = (rear + 1) % capacity;
    arr[rear] = item;
    count++;
}

//function to return the front element of the queue
template <class X>
X queue<X>::peek()
{
    if (isEmpty())
    {
        cout << "UnderFlow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
    return arr[front];
}

//function to return the size of the queue
template <class X>
int queue<X>::size()
{
    return count;
}

//function to check if the queue is empty or not
template <class X>
bool queue<X>::isEmpty()
{
    return (size() == 0);
}

//function to check if the queue is full or not
template <class X>
bool queue<X>::isFull()
{
    return (size() == capacity);
}
int main()
{
    queue<int>q(6);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout << "The front element is " << q.peek() << endl;
    q.dequeue();
    q.enqueue(5);
    q.enqueue(6); 

    cout << "The queue size is " << q.size() << endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();
    if (q.isEmpty())
    {
        cout << "The queue is empty\n";
    }
    else
    {
        cout << "The queue is not empty\n";
    }

    return 0;
}