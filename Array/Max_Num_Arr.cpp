#include<iostream>
#include<limits.h>      // intialize the INT_MIN , INT_MAX.
using namespace std;
int main(){
    int arr[]={2,4,6,8,10};
    int size = 5;
    int Max_Num = INT_MIN;          // Initialize range of maximmum variable.
    for(int i = 0; i<size ; i++){
        if(arr[i] > Max_Num){
            Max_Num = arr[i];
        }
    }
    cout<<Max_Num<<endl;
    return 0;
}