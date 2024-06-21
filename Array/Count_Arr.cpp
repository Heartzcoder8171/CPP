#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,1,1,0,0,0,0,1,0,1,0,1,0,1};
    int size = 15 ;
    int zero = 0 ;
    int one = 0;        // intial counting = no count that is 0.
    for(int i=0 ; i<size ; i++){
        if(arr[i]==0){
            zero++;
        }
        if(arr[i]==1){
            one++;
        }
    }
    cout<<zero<<endl;
    cout<<one<<endl;
    return 0;
}