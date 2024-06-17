#include<iostream>
using namespace std;
int print_even_odd(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    if(n%2==0){
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
}
int main(){
    print_even_odd();
}