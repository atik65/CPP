#include <iostream>
using namespace std;

class Array
{
public:
    int maxSize = 10;
    int currentSize = 0;
    int arr[10] = {0};

    void printArray()

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
            cout << "Array is empty." << endl;
        }
    }

    void insertToEnd(int x)
    {

        if (currentSize < maxSize)
        {
            arr[currentSize] = x;
            currentSize++;
        }
        else
        {
            cout << "Array  is full." << endl;
        }
    }

    void insertToBegin(int x)
    {
        int temp;

        if (currentSize >= maxSize)
        {
            cout << "Array is full." << endl;
        }
        else
        {
            for (int i = currentSize - 1; i >= 1; i--)
            {
                arr[i + 1] = arr[i];
            }

            arr[0] = x;

            currentSize++;
        }
    }

    void update(int pos, int x)
    {

        if (pos >= 0 && pos < maxSize)
        {
            arr[pos] = x;
        }
        else
        {
            cout << "Please enter valid postion to update." << endl;
        }
    }

    void deleteItem(int pos)
    {
        if (pos >= 0 && pos < maxSize)
        {

            for (int i = pos; i < currentSize - 1; i++)
            {
                arr[i] = arr[i + 1];
            }

            currentSize--;
        }
        else
        {
            cout << "Please enter valid postion to delete." << endl;
        }
    }
};

int main()
{

    Array a;
    a.printArray();
    a.insertToEnd(10);
    a.insertToEnd(10);
    a.insertToEnd(10);
    a.insertToEnd(10);
    a.insertToEnd(10);
    a.insertToEnd(10);
    a.insertToEnd(10);
    a.insertToEnd(10);
    a.insertToEnd(10);
    a.insertToBegin(20);
    a.update(0, 50);
    a.update(9, 40);
    a.deleteItem(9);
    a.printArray();

    return 0;
}