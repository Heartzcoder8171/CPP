#include<iostream>
using namespace std;
char getGrade(int marks){         // getGrade method is used to get the grade of given number.
    if(marks>=90){
        return 'A';
    }
    else if(marks>=80){
        return 'B';
    }
    else if(marks>=70){
        return 'C';
    }
    else if(marks>=60){
        return 'D';
    }
    else{
        return 'E';
    }
}
int main(){
    int marks;
    cout<<"Enter the marks : ";
    cin>>marks;
    char finalGrade  = getGrade(marks);
    cout<<finalGrade<<endl;
    return 0;
}