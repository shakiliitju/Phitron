#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value) : data(value), next(NULL) {}
};

int Search(Node *head, int x)
{
    int index = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->data == x)
        {
            return index;
        }
        tmp = tmp->next;
        index++;
    }
    return -1;
}

void process()
{
    int value;
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    int x;
    cin >> x;
    int result = Search(head, x);
    cout << result << endl;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        process();
    }

    return 0;
}
