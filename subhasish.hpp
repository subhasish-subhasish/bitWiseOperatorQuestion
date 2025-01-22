#ifndef SUBHASISH_HPP
#define SUBHASISH_HPP


#include <iostream>
#include <bitset>
using namespace  std;


//Template attributes passes in the function so we have to deifne in this header file;
//Function for Print its all bit as stored in memory
template <typename T>
void printBits(T value) {   
    // Using bitset to print the bits
    bitset<sizeof(T) * 8> bits(value);  
    cout << bits << endl;
}
//Return total bit present in the variable
template <typename T>
int countTotalBits(T value) {
    return sizeof(T) * 8;  // Calculate total number of bits in the type
}
//Return total number of 1 is present in the variable
template <typename T>
int countSetBits(T value) {
    bitset<sizeof(T) * 8> bits(value);  // Convert the value to a bitset
    return bits.count();  // Return the number of 1s in the bitset
}

#endif