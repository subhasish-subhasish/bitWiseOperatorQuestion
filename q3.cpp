//Q3. Clear the ith bit of the number ?

#include <iostream>
#include "subhasish.hpp"

int setIthBit(int num, int i){
    int mask = ~(1<<i); //1<<i will mask and after this ~ will make 1's complement of the number
    return num & mask;
}


int main(){
    int num=7; //  0000011;
    int ans=setIthBit(num,2);
    cout<<"Before Clr ith bit"<<endl;
    printBits(num);
    cout<<"After Clr ith bit"<<endl;
    printBits(ans);

    return 0;
}