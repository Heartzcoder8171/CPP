#include<iostream>
using namespace std;
int findMax(int num1 , int num2 , int num3){        // function making find max = find the max. number.
    if(num1 > num2 && num1 > num3){
        return num1;
    }
    else if( num2 > num1 && num2 > num3){
        return num2;
    }
    else{
        return num3;
    }
}
int main(){                     // calling the function..
    int a,b,c;
    cin>>a>>b>>c;
    int maxnum = findMax(a,b,c);        // making integer maanum for declaring to print maximum number..
    cout<<maxnum<<endl;
}