#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50,60,70,80};
    int size = 8;
    int start = 0;
    int end = size -1;
    for(int i = 0; i < size ; i++){
        if(start <= end)
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        cout<<arr[i]<<endl;
    }
}