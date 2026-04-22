#include <iostream>
using namespace std;

uint32_t reverseBits(uint32_t n)
{
    uint32_t result = 0;

    for (int i = 0; i < 32; i++) {
        result <<= 1;        // make space
        result |= (n & 1);   // add last bit of n
        n >>= 1;             // move to next bit
    }

    return result;
}


//  int main() 
//   {
//      uint32_t n = 43261596;
//      cout << reverseBits(n);  // Output: 964176192
//  }

