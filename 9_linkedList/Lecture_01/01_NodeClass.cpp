#include<iostream>
#include<vector>
using namespace std;

class Node {
    public:
     int val;
     Node* next;

     Node(int value){
        this->val = value;
     }
};



int main(){
    Node a(11);
    Node b(12);
    Node c(13);
    Node d(14);
    Node e(15);
   
    //Attatch
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = NULL;

    // cout <<a.next <<endl; //b ra address
    // cout <<(*(a.next)).val<<endl;//b ra value
    // cout <<(*(a.next)).next<<endl;// c ra address
    // cout <<((*(a.next)).next)->val<<endl;// c ra value


    cout <<a.val<<endl; //a ra value
    cout <<a.next->val<<endl; //b ra value
    cout <<a.next->next->val<<endl; //c ra value

 
    return 0;
}