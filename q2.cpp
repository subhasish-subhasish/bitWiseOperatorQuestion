//Q2. Set ith bit of a number

#include <iostream>
#include "subhasish.hpp"
using namespace std;

int setIthBit(int num, int i){
    int mask = 1<<i;
    return num | mask;
}

int main(){
    int num=3; //  0000011;
    int ans=setIthBit(num,2);
    cout<<"Before set ith bit"<<endl;
    printBits(num);
    cout<<"After set ith bit"<<endl;
    printBits(ans);
    

    return 0;
}