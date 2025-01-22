//Q4(1). Remove the last(Rightmost set bit) Set bit of a Number ?
//Q4(2). Find the position of last set bit of a Number ?

#include <iostream>
#include "subhasish.hpp"

int removeRightmostSetBit(int num){
    return num & (num-1);
}

int postionRightmostSetBit(int num){
    if(num==0){
        cout<<"No set bit"<<endl;
        return -1; //no set bit
    }
    int position = 0; // Positions are 1-based
    while ((num & 1) == 0) {
        num >>= 1; // Right shift until we find the first set bit
        position++;
    }
    return position;
}


int main(){
    
    int num=16; //  0000011;
    //Driver Code Q4(1)----
    int ans=removeRightmostSetBit(num);
    cout<<"Before Clr Rightmost Set bit"<<endl;
    printBits(num);
    cout<<"After Clr Rightmost Set bit"<<endl;
    printBits(ans);
    cout<<"---------------------------------------------"<<endl;
    //Driver Code Q4(2)---
    cout<<"Positon of Rightmost Set bit is : "<<postionRightmostSetBit(num)<<endl;
    
    return 0;
}