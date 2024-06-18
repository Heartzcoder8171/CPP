#include<iostream>
using namespace std;
int print_Prime(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    if(n%2==0){
        cout<<"not prime"<<endl;
    }
    else{
        cout<<"Prime"<<endl;
    }
}
int main(){
    print_Prime();
    return 0;
}