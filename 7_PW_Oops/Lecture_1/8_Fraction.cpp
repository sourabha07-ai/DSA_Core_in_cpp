#include<iostream>
using namespace std;
class Fraction{
     public:
        int Numerator;
        int Denominator;
        Fraction(int Numerator,int Denominator){
           this->Numerator = Numerator;
           this->Denominator = Denominator;
        }
        void print(){
            cout<<Numerator <<"/" <<Denominator<<endl;
        }
        Fraction(){}

};

Fraction multiply(Fraction& f1,Fraction& f2){
        Fraction result;
        result.Numerator = f1.Numerator * f2.Numerator;
        result.Denominator = f1.Denominator * f2.Denominator; 
        return result;
}

int main(){
        Fraction f1(3,5);
        Fraction f2(2,6);
        Fraction ans = multiply(f1,f2);
        f1.print();
        f2.print();
        ans.print();
        

}