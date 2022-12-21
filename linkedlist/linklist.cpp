//how to create linked list cpp?
// declare NodePtr as a pointer to Node, currently an incomplete type
//  C and C++ both allow you to declare a pointer to damn-near anything
//  so long as there is an understanding of what it *will* be, in this
//  case, a structure called Node.
typedef struct Node *NodePtr;

// Now declare the structure type itself
struct Node
{
    int x;
    NodePtr next;
};


struct Node
{
    int x;
    struct Node *next; // omit the 'struct' for C++-only usage
};


Node* a, b;     // declares one Node* (a), and one Node (b)


NodePtr a, b;   // declares two Node*; both (a) and (b)


NodePtr head = NULL;     // always the head of the list.
NodePtr* ptr = &head;    // will always point to the next pointer to assign.
int n;
while (cin >> n)
{
    *ptr = new Node;
    (*ptr)->x = n;
    ptr = &(*ptr)->next;
}

// note this always terminates the load with a NULL tail.
(*ptr)->next = NULL;


      head ===> NULL;
ptr --^


head ===> node(1)
          next
ptr ------^


head ===> node(1)
          next ===> node(2)
                    next
ptr ----------------^


head ===> node(1)
          next ===> node(2)
                    next ===> node(3)
                              next
ptr --------------------------^


head ===> node(1)
          next ===> node(2)
                    next ===> node(3)
                              next ===> NULL;
ptr --------------------------^


#include <iostream>
using namespace std;

// declare NodePtr as a pointer to Node, currently an incomplete type
//  C and C++ both allow you to declare a pointer to damn-near anything
//  so long as there is an understanding of what it *will* be, in this
//  case, a structure called Node.
typedef struct Node *NodePtr;

// Now declare the structure type itself
struct Node
{
    int x;
    NodePtr next;
};

int main()
{
    // load our list with 20 elements
    NodePtr head = NULL;
    NodePtr* ptr = &head;
    for (int n=1;n<=20;++n)
    {
        *ptr = new Node;
        (*ptr)->x = n;
        ptr = &(*ptr)->next;
    }

    // terminate the list.
    *ptr = NULL;

    // walk the list, printing each element
    NodePtr p = head;
    while (p)
    {
        cout << p->x << ' ';
        p = p->next;
    }
    cout << endl;

    // free the list
    while (head)
    {
        NodePtr victim = head;
        head = head->next;
        delete victim;
    }

    return 0;
}


1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 


