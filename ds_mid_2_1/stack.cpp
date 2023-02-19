#include <iostream>

using namespace std;

class Stack
{
public:
    int maxSize = 10;
    int currentSize = 0;
    int arr[10] = {0};

    void printStack()

    {

        if (currentSize > 0)
        {
            for (int i = currentSize - 1; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "Unable to print, Stack is empty." << endl;
        }
    }

    void push(int x)
    {

        if (currentSize < maxSize)
        {
            arr[currentSize] = x;
            currentSize++;
        }
        else
        {
            cout << "Unable to push, Stack  is full." << endl;
        }
    }

    void pop()
    {
        if (currentSize <= 0)
        {
            cout << "Unable to pop, Stack is empty." << endl;
        }
        else
        {
            currentSize--;
        }
    }

    int top()
    {
        return arr[currentSize - 1];
    }
};

int main()
{

    Stack s;

    s.printStack();
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);
    s.push(90);
    s.push(100);
    s.push(200);

    s.pop();

    s.printStack();
    cout << s.top() << endl;

    return 0;
}