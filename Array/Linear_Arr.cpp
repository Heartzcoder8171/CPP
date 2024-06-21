#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,5,7,9};
    int size = 5;
    int key = 3;
    bool flag = 0;
    // 0 ->  not found.
    // 1 -> found. 
    for(int i = 0; i < size; i++){
        if(arr[i]==key){
            flag = 1;       // check the condition.
            break;
        }
    }
    if(flag){
        cout<<"present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }
    return 0;
}