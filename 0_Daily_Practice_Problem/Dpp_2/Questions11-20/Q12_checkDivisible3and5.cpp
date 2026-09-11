#include <iostream>
using namespace std;


// Take a positive integer input from the user and check if it is divisible by both 3 and
// 5. Do not use the logical AND (&&) operator inside your conditional test statement. (Hint:
// Think about how mathematical properties like the Lowest Common Multiple (LCM) can reduce
// multi-step rules).
// Sample — Input: 30 ⇒ Output: Divisible by both 3 and 5

int main(){
    int integer;
    std::cout << "Input: ";
    std::cin >> integer;

    if (integer % 15 == 0) {
        std::cout << "Divisible by both 3 and 5";
    } else {
        std::cout << "Not divisible by both 3 and 5";
    }
     

    return 0;
}