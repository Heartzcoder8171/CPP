#include<iostream>
using namespace std;
int main(int k , int n){
    int mask = 1<<k;            // left shift for making this maskable.
    int ans = n | k;              // OR  operation performs to making as a output.
    return ans;
}