#include <bits/stdc++.h>
using namespace std;

void add(long long data,linked_list *head){
    if(head==NULL){
        linked_list *temp=new linked_list(data);
        head=temp;
    }
    else{
        linked_list *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
            temp->next=new linked_list(data);
        }
    } 
}


int main(){
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

    printList(node,head);

}