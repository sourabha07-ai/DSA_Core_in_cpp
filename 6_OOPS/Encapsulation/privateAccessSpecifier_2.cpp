#include <iostream>
using namespace std;

#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"


class Student{
    private:
    string email;
    int id;

    public:
    void setEmail(string e){
        email = e;
    }
    void setId(int i){
        id =  i;
    }

    string getEmail(){
        return email;
    }

    int getId(){
        return id;
    }
};

int main(){

    Student s1;
    s1.setEmail("sourabhajena2003@gmail.com");
    cout <<"Email: " <<g <<s1.getEmail() <<reset <<endl;

    s1.setId(24);
    cout <<"My Id: " <<y <<s1.getId() <<reset <<endl;
}