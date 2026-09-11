#include <iostream>
using namespace std;

int main(){
    int my_num[5] = {1,3,6,8,9};
    cout <<sizeof(my_num);//output-20
    /* You learned from the Data Types chapter that an int type is usually 4 bytes, so from the example above, 4 x 5 (4 bytes x 5 elements) = 20 bytes.*/

    return 0;
}