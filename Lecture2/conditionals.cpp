#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;
    if(a>0){
        cout<<"Entered number is positive";
    }
    if(a<0){
        cout<<"Entered number is negative";
    }
    if(a==0){
        cout<<"Entered number is 0";
    }
}