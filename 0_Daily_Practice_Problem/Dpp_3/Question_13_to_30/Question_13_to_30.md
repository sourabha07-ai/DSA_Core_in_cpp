# Question 13 to 30

This file contains the full source code for `practice_Q13.cpp` through `practice_Q30.cpp`.

## practice_Q13.cpp

```cpp
#include<iostream>
using namespace std;
/*
Take a positive integer N as input and compute the sum of all natural numbers from 1up to N using a loop.
Sample 1 — Input: 5 ⇒ Output:15 
Sample 2 — Input: 10 ⇒ Output: 55
*/

int main(){
    int n;
    cout <<"Input n: ";
    cin >> n;
    int sum = 0;

    for(int i = 1; i <= n; i++){
        sum +=i;

    }
    cout <<"Output: " <<sum <<endl;
 
}
```

## practice_Q14.cpp

```cpp
#include <iostream>
using namespace std;
/* 
Write a program that takes two integers as input and prints all the even numbers located
strictly between them.
Sample 1 — Input: 3 10 ⇒ Output: 4 6 8
Sample 2 — Input: 12 21 ⇒ Output: 14 16 18 20
*/

int main(){

int first, second;
cout << "Enter a first number: ";
cin >> first;
cout <<"Enter a Second number: ";
cin >> second;

cout <<"Between Numbers: ";
//Method-1 

if(first == second){
    cout <<"Both are Same.";
}
else if(first < second){
    for(int i = first+1; i < second;i++){
        if(i % 2 == 0) cout << i <<" ";
    }
}
else{
    for(int i = second + 1; i < first; i++){
        if(i % 2 == 0) cout << i <<" ";
    }
}

// Method-2

// int start = min(first, second);
// int end = max(first, second);

// for (int i = start + 1; i < end; i++) {
//     if (i % 2 == 0)
//         cout << i << " ";
// }



    return 0;
}
```

## practice_Q15.cpp

```cpp
#include<iostream>
using namespace std;
/*
Write a program to take a number as input and compute the product of all its individual
digits.
Sample 1 — Input: 413 ⇒ Output: 12
Sample 2 — Input: 520 ⇒ Output: 0
*/

int main(){
    int n;
    cout <<"Enter input: ";
    cin >> n;

    int product = 1;

 while(n > 0){
    int digits = n % 10;
    product = product * digits;
    n = n / 10; 
          
}
        cout <<product <<endl;

    


}
```

## practice_Q16.cpp

```cpp
#include<iostream>
using namespace std;
/*
 Given a positive integer N, write a program to find and print all of its divisors.
Sample 1 — Input: 12 ⇒ Output: 1 2 3 4 6 12
Sample 2 — Input: 7 ⇒ Output: 1 7
Sample 3 — Input: 15 ⇒ Output: 1 3 5 15
*/

int main(){
    int n;
    cout <<"input :";
    cin >>n;

    for(int i = 1; i <= n; i++){
        if(n % i ==0){
            cout << i <<" ";
        }
    }

}
```

## practice_Q17.cpp

```cpp
#include<iostream>
using namespace std;
/*
 Take a positive integer N as input and compute the sum of all natural numbers from 1up to N using a loop.
Sample 1 — Input: 5 ⇒ Output:15 
Sample 2 — Input: 10 ⇒ Output: 55
*/

int main(){
    int n;
    cout <<"Input n: ";
    cin >> n;
    int sum = 0;

    for(int i = 1; i <= n; i++){
        sum +=i;

    }
    cout <<"Output: " <<sum <<endl;
 
}
```

## practice_Q18.cpp

```cpp
#include<iostream>
using namespace std;
/*
 Write a program to find if a given positive integer is a Perfect Number. A perfect number
is a positive integer that is equal to the sum of its proper divisors. (A proper divisor of a number
is a positive divisor of the number, excluding the number itself.)
Sample 1 — Input: 28 ⇒ Output: Perfect Number
(Explanation: Since 1 + 2 + 4 +7+14 = 28)
Sample 2 — Input: 12 ⇒ Output: Not a Perfect Number
(Explanation: Since 1 + 2 + 3 +4+6 = 16 ̸ = 12
*/

int main(){
    int n;
    cout <<"Enter n: ";
    cin >> n;

    int count = 0;
    for(int i = 1;i <= n/2 ;i++){
        if(n % i == 0) count += i;
    }
    if(count == n) cout <<"Perfect Number."<<endl;
    else cout <<"Not a Perfect Number." <<endl;
  

    return 0;
}
```

## practice_Q19.cpp

```cpp
#include<iostream>
using namespace std;
/*
 Write a program to print all integers from 1 to 500 that are not divisible by 3. You must
use the continue keyword.
*/

int main(){

    for(int i = 1; i <= 500; i++){
        if(i % 3 == 0) continue;
        cout  <<i <<" ";
    }
}
```

## practice_Q20.cpp

```cpp
#include <iostream>
using namespace std;

/*.Take an integer N as input and print the Fibonacci series upto N terms. 
(0,1,1,2,3,5,...)
Sample—Input: 6⇒Output: 0 1 1 2 3 5
*/

int main(){
    int n;
    cout <<"Enter n: ";
    cin >> n;
    int first_term = 0,second_term = 1;

if(n >= 1) cout <<first_term <<" " ;

if(n >= 2) cout <<second_term<<" ";
   
for(int i = 3; i <= n; i++){
    int next = first_term + second_term;
    cout << next <<" ";
    first_term = second_term;
    second_term = next;
  
   }

}
```

## practice_Q21.cpp

```cpp
#include<iostream>
using namespace std;
/*
Take a positive integer N as input and compute the sum of all natural numbers from 1up to N using a loop.
Sample 1 — Input: 5 ⇒ Output:15 
Sample 2 — Input: 10 ⇒ Output: 55
*/

int main(){
    int n;
    cout <<"Input n: ";
    cin >> n;
    int sum = 0;

    for(int i = 1; i <= n; i++){
        sum +=i;

    }
    cout <<"Output: " <<sum <<endl;
 
}
```

## practice_Q22.cpp

```cpp
#include<iostream>
#include<algorithm>
using namespace std;
 
/*Write a program to check if a given number is a Palindrome. A palindrome number reads the same forwards and backwards.
Sample 1 — Input: 121 ⇒ Output: Palindrome
Sample 2 — Input: 145 ⇒ Output: Not a Palindrome
*/

int main(){
    int n;
    cout <<"Enter a Number: ";
    cin >> n;

    string s = to_string(n);
    reverse(s.begin(),s.end());
    int r_num = stoi(s);
    cout <<"Reverse: " <<r_num <<endl;
   
    if(r_num == n){
      cout <<"palindrome";
    }else{
        cout <<"Not Palindrome";
    }

    

    return 0;
}
```

## practice_Q23.cpp

```cpp
#include <iostream>
using namespace std;
/*
Take an integer K as input. Two variables a and b can take any integer value from 1 to K. Write a program to print all possible ordered combinations of (a b) on a new line.
Sample — Input: 2 
Output:
1, 1
1, 2
2, 1
2, 2
*/

int main(){
    int k;
    cout <<"Input: ";
    cin >> k;

    for(int i = 1; i <= k;i++){
        for(int j = 1;j <= k; j++){
            cout <<i <<" " <<j <<endl ;
        }   
    }

}
```

## practice_Q24.cpp

```cpp
#include<iostream>
using namespace std;
/*
Write a program that prints all integers from 1 to 500 that contain the digit 2, the digit 7, or both, anywhere within their numerical representation.Sample — Output includes: 2, 7, 12, 17, 20, 21, 22, ...
*/
int main(){
   for (int i = 1; i <= 500; i++) {
        int n = i;

        while (n > 0) {
            int digit = n % 10;

            if (digit == 2 || digit == 7) {
                cout << i << " ";
                break;
            }

            n /= 10;
        }
    }

}
```

## practice_Q25.cpp

```cpp
 #include <iostream>
using namespace std;

/*
Write a program to iterate through the numbers from 1 to 1000
and print only those numbers whose sum of digits is exactly 17.
*/

int main() {

    for (int i = 1; i <= 1000; i++) {

        int n = i;
        int sum = 0;

        while (n > 0) {
            int digits = n % 10;
            n = n / 10;
            sum = sum + digits;
        }

        if (sum == 17) {
            cout << i << " ";
        }
    }

    return 0;
}
```

## practice_Q26.cpp

```cpp
#include <iostream>
using namespace std;

/*
Write a program that takes two positive integers as input
and prints all the prime numbers that lie strictly between them.

Sample 1 — Input: 10 20 ⇒ Output: 11 13 17 19
Sample 2 — Input: 20 30 ⇒ Output: 23 29
*/

int main() {
    int m, n;

    cout << "Enter first number: ";
    cin >> m;

    cout << "Enter Last number: ";
    cin >> n;

    for (int i = m + 1; i < n; i++) {
        bool isPrime = true;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime) cout << i << " ";
    }
}
```

## practice_Q27.cpp

```cpp
#include <iostream>
using namespace std;
/*
Write a program that prints numbers starting from 1 up to 1000. However, the loopmust terminate immediately as soon as it encounters a number whose sum of digits equals 23
*/
int main(){
     for(int i = 1; i <= 1000; i++){
        int digit_sum = 0;
        int n = i;

        while(n > 0){
            int  digit = n % 10;
            n = n / 10;
            digit_sum = digit_sum + digit;
        }
        if(digit_sum != 23) cout << i <<" ";
        else break;
     }
}
```

## practice_Q28.cpp

```cpp
#include <iostream>
using namespace std;
/*
Take an integer as input and mathematically subtract 293 from it. Compute and print the reversed value of this new resulting integer. Ensure your logic correctly handles negativeresults.
Sample 1 — Input: 183 ⇒ Math: 183− 293 =−110 ⇒ Output: -11
Sample 2 — Input: 400 ⇒ Math: 400− 293 = 107 ⇒ Output: 701
Sample 3 — Input: 293 ⇒ Math: 293− 293 = 0 ⇒ Output: 0
*/

int main()
{
    int n;
    cout << "Enter input: ";
    cin >> n;

    int sub = n - 293;
    bool negative = sub < 0;

    if (sub < 0)
    {
        sub = -sub;
    }

    int reverse = 0;

    while (sub > 0)
    {
        int digit = sub % 10;
        reverse = reverse * 10 + digit;
        sub = sub / 10;
    }

    if (negative)
    {
        reverse = -reverse;
    }

    cout << reverse << endl;

    return 0;
}
```

## practice_Q29.cpp

```cpp
#include<iostream>
using namespace std;
/*Write a program to compute ab(a raised to the power b) where a is a decimal value and b is an integer (which can be positive, negative, or zero) entered by the user. Do not use the pow() function from <cmath>.
Sample 1 — Input: 2.0 3 ⇒ Output: 8
Sample 2 — Input: 2.5 -2 ⇒ Output: 0.16
Sample 3 — Input: 5.4 0 ⇒ Output: 1
Sample 4 — Input: 4.0 -1 ⇒ Output: 0.25
*/

int main(){
    double a;
    int b;
    cout <<"Enter Base: ";
    cin >> a;
    cout <<"Enter power: ";
    cin >> b;

    double power = 1;

    if( b > 0){
        for(int i = 1;i <= b;i++){
            power = power * a;
        }
    }
    else if(b < 0){
        for(int i = 1; i <= -b;i++){
            power = power * a;
        }
        power = 1 / power;
    }

    cout <<power<<endl;
  
}
```
