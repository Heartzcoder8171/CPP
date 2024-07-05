#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{1,3,4,6};
    vector<int> brr{3,2,5,4,6};
    vector<int> ans;

    // outer loop.

    for(int i=0; i<arr.size();i++){
        int element = arr[i];
        for(int j=0; j<brr.size();j++){             //  inner loop.
            if(element == brr[j]){
                brr[j] = -1;                        // mark = due to duplicacy of element we marks it = -1.
                ans.push_back(element);
            }
        }
    }
    for(auto value : ans){
        cout << value << " ";
    }
}