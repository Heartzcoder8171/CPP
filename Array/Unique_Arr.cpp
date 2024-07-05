#include<iostream>
#include<vector>
using namespace std;
int find_unique(vector<int>arr){
        int ans = 0;            // at starting point is 0  because koi effect nhi pdh rha if 0 is doing xor in any number its gives no effect.
        for(int i =0; i<arr.size();i++){
           ans = arr ^ arr[i];
        }
        return ans;
}
int main(){
    int n;      // input the number.
    cin >> n;
    vector<int> arr(n);              // declare the vector.
    // taking input.
    for(int i=0; i<arr.size(); i++){       // arr.size = vector's of array's size.
        cin >> arr[i];
    }

    // store the vector.

    int unique = find_unique(arr);
    cout << unique << endl;
    return 0;
}