#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,2,3,4};
    int sizea = 4;
    int brr[] = {5,6,7,8,9};
    int sizeb = 5;
    vector<int> ans;
    for(int i=0; i<sizea; i++){
        ans.push_back(arr[i]);              // used to insert the element in b.
    }
    for(int i=0; i<sizeb; i++){
        ans.push_back(brr[i]);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}