#include <iostream>
using namespace std;

class Employees{
    public:
    int id;
    string name;
    double salary;
    string city;
    Employees(int id,string name,double salary,string city){
        this->id = id;
        this->name = name;
        this->salary = salary;
        this->city = city;
    }
};

void print(Employees e){
    cout <<"Employees Details: "<<endl;
    cout <<endl;
    cout <<"id: " <<e.id <<endl;
    cout <<"Name: " <<e.name<<endl;
    cout <<"Salary: "<<e.salary <<endl;
    cout <<"City: "<<e.city <<endl;
};
void changes(Employees* e){
    // e->salary = 39000;// (*e).salary = 45000;
    e->city = "Bharatpur";
}

int main(){
    // Employees e1(101,"Sourabha Jena",20000,"Gunupur");
    // print(e1);

    // Employees e2(102,"Puja Maity",23000,"Khuranta");
    // Employees* p2 = &e2;
    // cout<<p2<<endl; //0x61fe90
    //  cout <<(*p2).name<<endl;; //Puja Maity  [(*p1).name = p1->name]
    //  cout <<p2->salary <<endl; //23000

    Employees e3 (103,"Sourabha",40000,"Bhubaneswar");

    //    //   cout <<&e3 <<endl; //address of e3 = 0x61fe90
    //   //Employees* is pointer datatype which is store pointer value
      Employees* p3 = &e3; // p3 store in  address of e3 = 0x61fe90
      cout <<e3.city <<endl; //Bhubaneswar
      cout <<p3 <<endl; //address print 0x61fe90
      cout <<p3->city<<endl;//Bhubaneswar
      changes(&e3);
      cout <<p3->city <<endl;//Bharatpur
      cout <<e3.city <<endl;//Bharatpur

    //  Employees e4(104,"Puja",24000,"DashMatha");
    //  cout <<e4.salary <<endl;
    //  changes(&e4);
    //  cout <<e4.salary<<endl;


      
       


    return 0;
}