#include<iostream>
#include<vector>
using namespace std;

class Node{
    public: 
       int val;
       Node* next;

       Node(int value){
           this->val = value;
           next = NULL;
       }
};

void print(Node* head){

    // Node* temp = head;
    // while(temp != NULL){
    //     cout<<temp->val<<" ";
    //     temp = temp->next;
    // }
    // cout <<endl;

    while (head != NULL){
        /* code */
        cout<<head->val <<" ";
        head = head->next;
    }
    cout <<endl;
    
}


int main(){
    Node* a = new Node(56);
    Node* b = new Node(89);
    Node* c = new Node(12);
    Node* d = new Node(75);
    Node* e = new Node(34);

    //attatch
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
   
    print(a);
 
    return 0;
}