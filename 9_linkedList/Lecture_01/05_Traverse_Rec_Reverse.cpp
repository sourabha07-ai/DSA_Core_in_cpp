#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
       int value;
       Node* next;

       Node(int value){
        this->value = value;
        next = NULL;
       }
};

void printRec_rev(Node* head){
    if(head == NULL) return;
    printRec_rev(head->next);
    cout <<head->value<<" ";
}


int main(){
   Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    //attach
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    printRec_rev(a);cout<<endl;

    return 0;
}