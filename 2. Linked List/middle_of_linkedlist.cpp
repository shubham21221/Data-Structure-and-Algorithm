#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        if (head == NULL)
        {
            return head;
            ListNode *slow = head, *fast = head;

            // traverse the LinkedList
            while (fast != NULL && fast->next != NULL)
            {
                slow = slow->next;
                fast = fast->next->next;
            }
        }
        return slow;
    }
} ;

    main()
{

    // node *head = NULL;
    // insertAtTail(head, 1);
    // insertAtTail(head, 2);
    // insertAtTail(head, 3);

    // display(head);

    return 0;
}