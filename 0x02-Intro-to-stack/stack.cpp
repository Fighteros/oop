#include <iostream>

using namespace std;
const int MAX_SIZE = 100;

// to make stack datatype dynamic not static
template <class t>

class Stack
{
    int top;
    t item[MAX_SIZE];

public:
    Stack() : top(-1) {}

    void push(t element)
    {
        if (top >= MAX_SIZE - 1)
        {
            cout << "Stack full on push";
        }
        else
        {
            item[++top] = element;
        }
    }

    bool isEmpty()
    {
        return top < 0;
    }

    void pop()
    {
        if (isEmpty())
            cout << "Stack empty on pop";
        else
            top--;
    }

    void pop(t &element)
    {
        if (isEmpty())
            cout << "Stack empty on pop";
        else
        {
            element = item[top];
            top--;
        }
    }

    void getTop(t &stackTop)
    {
        if (isEmpty())
            cout << "Stack empty on getTop";
        else
        {
            stackTop = item[top];
            cout << stackTop << endl;
        }
    }

    void print()
    {
        cout << "[";
        for (int i = top; i >= 0; i--)
        {
            cout << item[i] << " ";
        }
        cout << "]";
        cout << endl;
    }
};

int main()
{
    Stack<string> s;
    s.push("Ahmed");
    s.push("Ahmed");
    s.push("Ahmed");
    s.push("Ahmed");
    // int e = 0;
    // s.push(5);
    // s.push(10);
    // s.push(15);
    // s.push(20);
    // s.push(25);
    // // s.getTop(e);
    // s.pop();
    // s.push(9);
    s.print();
}