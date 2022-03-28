#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
void printList(node *n){
    while(n!=NULL){
        cout<<n->next;
        n=n->next;
    }
}
int main(){
    node *head = new node();
    node *secound =new node();
    node *third = new node();

    head ->data =5;
    head ->next=secound;

    secound->data =4;
    secound->next=third;

    third->data =8;
    third->next=NULL;

    printList(head);

}