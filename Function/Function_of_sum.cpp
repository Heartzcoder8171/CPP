#include<iostream>
using namespace std;
int getsum(int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int ans = getsum(n);
    cout<<ans<<endl;
}