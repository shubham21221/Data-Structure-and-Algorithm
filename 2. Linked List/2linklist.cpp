#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
void printList(node *n)
{
    while (n != NULL)
    {
        cout << n->data << endl;
        n = n->next;
    }
}
int main()
{
    node *head = new node();
    node *secound = new node();
    node *third = new node();

/*   Three node three node defind in
 the element*/

    head->data = 5;
    head->next = secound;

    secound->data = 1;
    secound->next = third;

    third->data = 3;
    third->next = NULL;

    printList(head);
}