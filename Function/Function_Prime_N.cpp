#include<iostream>
using namespace std;
int print_N_Prime(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    for(int i = 2 ; i < n ; i++){
        if(n%2==0){
            cout<<"not prime"<<endl;
        }
        else{
            cout<<"prime"<<endl;
        }
    }
}
int main(){
    print_N_Prime();
    return 0;
}