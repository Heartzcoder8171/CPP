#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    for(int row=0 ; row<3 ; row+=1){
        for(int col=0 ; col<5; col+=1){
            cout << "* ";
        }
        cout<<endl;
    }
}