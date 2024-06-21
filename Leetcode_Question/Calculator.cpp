#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a : ";
    cin>>a;
    int b;
    cout<<"enter b : ";
    cin>>b;
    char op;
    cout<<"enter the op : +,-,*,/ : ";
    cin>>op;
    switch(op){
        case '+' : cout << a << " + "<< b << " = " << a+b << endl;
        break;
        case '-' : cout << a << " - " << b << " = " << a-b <<endl;
        break;
        case '*' : cout << a << " * " << b << " = " << a*b <<endl;;
        break;
        case '/' : cout << a << " / " << b << " = " << a/b <<endl;
        break;
        default : cout << " No Operation performs." <<endl;    
        }
    return 0;
}