#include<iostream>
using namespace std;
int printArea_of_circle(){
    int radius;\
    cout<<"enter radius : ";
    cin>>radius;
    int area = 2 * 3.14 * radius;
    cout<<area<<endl;
}
int main(){
    printArea_of_circle();
}