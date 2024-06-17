#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the marks : "<<endl;
    cin>>marks;
    if(marks>=90){
        cout<<"A Grade";
    }
    else if(marks>=80){
        cout<<"B Grade";
    }
    else if(marks>=70){
        cout<<"C Grade";
    }
    else if(marks>=60){
        cout<<"D Grade";
    }
    else if(marks>=40){
        cout<<"E Grade";
    }
    else{
        cout<<"FAIL";
    }
}