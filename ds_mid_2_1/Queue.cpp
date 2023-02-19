#include <iostream>
using namespace std;

class Queue
{
public:
    int maxSize = 10;
    int currentSize = 0;
    int arr[10] = {0};

    void printQueue()

    {

        if (currentSize > 0)
        {
            for (int i = 0; i < currentSize; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "Unable to print, Queue is empty." << endl;
        }
    }

    void enqueue(int x)
    {

        if (currentSize < maxSize)
        {
            arr[currentSize] = x;
            currentSize++;
        }
        else
        {
            cout << "Unable to enqueue, Queue  is full." << endl;
        }
    }

    void dequeue()
    {
        if (currentSize <= 0)
        {
            cout << "Unable to dequeue, Queue is empty." << endl;
        }
        else
        {

            for (int i = 1; i < currentSize; i++)
            {
                arr[i - 1] = arr[i];
            }

            currentSize--;
        }
    }

    int head()
    {
        if (currentSize <= 0)
        {
            return 0;
        }

        return arr[0];
    }
};

int main()
{

    Queue q;

    q.printQueue();
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(10);
    q.enqueue(10);
    q.enqueue(10);
    q.enqueue(10);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(20);
    q.enqueue(20);

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    q.printQueue();
    cout << "Queue head is = " << q.head() << endl;

    return 0;
}