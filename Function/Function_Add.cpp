#include<iostream>
using namespace std;
void printName(){
    int a;
    cout<<"Enter the a : ";
    cin>>a;
    int b;
    cout<<"Enter the b : ";
    cin>>b;
    int sum = a+b;
    cout<<"The sum of a and b is : "<<sum<<endl;
}
int main(){
    printName();
}