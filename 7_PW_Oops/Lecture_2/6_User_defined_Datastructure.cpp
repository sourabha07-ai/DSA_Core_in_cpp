#include <iostream>
#include <vector>
using namespace std; 
#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"

class MyVector{
private:
     //main datatypes don't changes required
      int length;
      int* arr;
      int cap;
public:
      //Create a Constructor
      MyVector(int capacity,int defalut_value){
         length = cap = capacity;
         arr = new int[capacity];
         for(int i = 0; i < capacity;i++){
              arr[i] = defalut_value;
         }
      }

      //pop the element in the vector
      void pop_back(){
         if(length == 0){
            cout <<"Vector is empty!"<<endl;
            return;
         }
         length--;
      }

      //Size of Vector
      int size(){
         return length;

      }
      //Capacity of Vector
      int capacity(){
         return cap;

      }
      //Show the index value
      int get(int index){
         if(index < 0 || index >=length){
            cout <<"Index out of bound!";
            return;
         }
         return arr[index];
      }

      //Update the index value 
      int set(int index, int value){
         if(index < 0 || index >=length){
            cout <<"Index out of bound!";
            return;
         }
            arr[index] = value;
            return value;
      }

      //Push the new Element
      void push_back(int val){
         if(length == cap){//Jadi array full hei jaichi
             //double the capacity and copy paste
              cap = 2 * cap;
              int* temp = new int[cap];
              for(int i = 0; i < length; i++){
               temp[i] = arr[i];
              }
              delete[] arr;
              arr = temp;
         }
         arr[length] = val;
         length++;
      }

      // Print the vector
      void print(){
         for(int i = 0; i < length;i++){
            cout <<arr[i]<<" ";
         }
         cout <<endl;
      }
};

int main(){
      MyVector vec1(5,-1);
      vec1.print();
       cout <<y <<"Size of array: "<<reset<<vec1.size()<<y" " <<"Capacity: "<<reset <<vec1.capacity()<<endl;
      vec1.pop_back();
      vec1.print();
      cout <<y <<"Size of array: "<<reset<<vec1.size()<<y" " <<"Capacity: "<<reset <<vec1.capacity()<<endl;
      vec1.push_back(23);
      vec1.print();
      cout <<y <<"Size of array: "<<reset<<vec1.size()<<y" " <<"Capacity: "<<reset <<vec1.capacity()<<endl;
      vec1.push_back(24);
      vec1.print();
      cout <<y <<"Size of array: "<<reset<<vec1.size()<<y" " <<"Capacity: "<<reset <<vec1.capacity()<<endl;
      cout <<"get() function: " <<vec1.get(5)<<endl;
      vec1.set(0,10);
      vec1.print();

    return 0;
}