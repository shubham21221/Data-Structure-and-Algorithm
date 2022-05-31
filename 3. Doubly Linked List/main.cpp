#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;
};
class DublyLinkList(){
    Node *head *tail;
    int totalNodes;
    public:
    DublyLinkList(){
        head = NULL;
        tail = NULL;
        totalNodes = 0;

    }
    void append(int data){
        Node *newNode = new Node;
        newNode->data = data;
        newNode->next = newNode->prev = NULL;
        if(totalNodes == 0){
            head = newNode;
            tail = newNode;
            totalNodes++;

        }
        else{
            tail->next = newNode;
            newNode->next = NULL;
            newNode->prev = tail;
            tail = nowNode = tail;
            totalNodes++;
        }
    }
}

int main(){
    DublyLinkList d;
    d.append(2);//get in 1st postion
    d.append(1);
    d.append(3);
    d.append(4);
    d.append(5);

    d.preAppend(99);
    d.preAppend(200);//200->99->2->1->3->4->5 Should be an output

    d.insertBetween(1000, 2);
    d.insertBetween(5000, 1);

    d.display();

    d.removeElement(4);
    d.display();

    d.removeElement();
    d.display();

    d.removeElement(6);
    d.display();

    return 0;
}