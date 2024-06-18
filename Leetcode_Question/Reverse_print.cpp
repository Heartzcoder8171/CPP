#include<iostream>
using namespace std;
int reverse(int x){
    int ans = 0; 
    bool isnegative = false;        // check therange is it out of range or in.
    if(x <= INT8_MIN){                 // INT_MIN is a function to use in negative range.
        return 0;
    }
    if(x < 0){
        isnegative=true;
        x = -x;                            // gives -ve number.
    }
    while(x>0){
        if(ans > INT8_MAX / 10){               // INT_MAX gives the +ve range.
            return 0;
        }
        int digit = x % 10;
        ans = ans * 10 + digit;        // formulae to reverse the digits.
        x = x/10;
    }
    return isnegative ? -ans : ans;                     // print answer.
}