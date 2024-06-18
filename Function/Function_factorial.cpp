#include<iostream>
using namespace std;
int print_factorial(){
    int n=1;
    cout<<"Enter n : ";
    cin>>n;
    int fact = 1;
    for(int i=n ; i>1 ; i--){
        fact = fact * i;
    }
    cout<<fact<<endl;
}
int main(){
    print_factorial();
    return 0;
}