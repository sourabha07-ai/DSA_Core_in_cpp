#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
      int value;
      Node* next;

      Node(int value){
        this->next = NULL;
        this->value = value;
      }
};

int main(){
    Node* a = new Node(34);
    Node* b = new Node(36);
    Node* c = new Node(38);
    Node* d = new Node(40);
    Node* e = new Node(42);


    //attatch 
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    
    cout <<a->next <<endl;//b ra address
    cout <<a->value <<endl;//a ra value
    cout <<a->next->value<<endl;// b ra value
    cout <<a->next->next->value<<endl;// c ra value
    cout <<a->next->next->next->value<<endl;// d ra value
    cout <<a->next->next->next->next->value<<endl;// e ra value
    // cout <<a->next->next->next->next->next->value<<endl;// Segmentation fault
 
    return 0;
}