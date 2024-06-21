#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50,60,70,80};
    int size = 9;
    int start = 0;
    int end = size - 1;     // due to last index.
    for(int i = 0; i<size ; i++){
        if(start > end){
            break;
        }
        if(start == end){
            cout<<arr[start]<<" ";
        }
        else{
        cout<<arr[start]<<" ";
        cout<<arr[end]<<" ";
        }
        start++;
        end--;
    }
    return 0;
}