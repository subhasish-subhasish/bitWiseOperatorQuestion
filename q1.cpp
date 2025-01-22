//Q1. Check if the bit is set or not

#include <iostream>
#include <bitset>

using namespace std;

bool isKthBitSet(int n, int k) {
    int mask = 1<<(k-1);
    if(n&mask){                             //n&mask will compare every bit if any of bit get 1 then it will go in the condtion
        return true;
    }
    else{
        return false;
    }
}


int main()
{
    bool ans=isKthBitSet(7,1);
    if(ans){
        cout<<"Bit is Set"<<endl;
    }
    else{
        cout<<"Bit is Not Set"<<endl;
    }

    return 0;
}
