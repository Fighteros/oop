#include <iostream>

using namespace std;
// dynamic type

template <class t>

class linked_stack
{
    struct node
    {
        // value
        t item;
        // pointer to following node
        node *next;
    };

    node *top, *current;

public:
    linked_stack()
    {
        top = NULL;
    }

    void push(t newItem)
    {
        // to make the pointer ready to receive a node
        node *newItemPtr = new node;
        if (newItemPtr == NULL)
        {
            cout << "Stack push cannot allocate memory";
        }
        else
        {
            newItemPtr->item = newItem;
            newItemPtr->next = top;
            top = newItemPtr;
        }
    }

    bool isEmpty()
    {
        return top == NULL;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack empty on pop";
        }
        else
        {
            node *temp = top;
            top = top->next;
            temp = temp->next = NULL;
            delete temp;
        }
    }

    void pop(t &stackTop)
    {
        if (isEmpty())
        {
            cout << "Stack empty on pop";
        }
        else
        {
            stackTop = top->item;
            node *temp = top;
            top = top->next;
            temp = temp->next = NULL;
            delete temp;
        }
    }

    void getTop(t &stackTop)
    {
        if (isEmpty())
        {
            cout << "Stack empty on get top";
        }
        else
        {
            stackTop = top->item;
        }
    }

    void display()
    {
        current = top;
        cout << "\nItems in the stack: ";
        cout << "[";
        while (current != NULL)
        {
            cout << current->item << " ";
            current = current->next;
        }
        cout << "]\n";
    }
};

int main()
{
    int x;
    linked_stack<int> s;
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.pop();

    s.display();
    s.getTop(x);

    cout << x << endl;
}