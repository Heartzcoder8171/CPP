#include<iostream>
#include<cmath>
using namespace std;
int Binary_to_decimal(int n){
    int binary = 0;         // binary starts from 0.
    int i=0;                // binary num increases.
    while(n>0){
        int bit = n & 1;                //And operation.
        binary = bit * pow(10 , i++);           // formula.
        n = n>>1;                       // right shift.
    }
    return binary;
}
int main(){
    int n;
    cin>>n;
    int binaryno = Binary_to_decimal(n);
    cout<<binaryno; 
}