#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if(ch>=48 && ch<=57){
        cout<<"Numeric";
    }
    else if(ch>=65 && ch<=90){
        cout<<"Uppercase";
    }
    else if(ch>=97 && ch<=122){
        cout<<"Lowercase";
    }
    else{
        cout<<"It is a symbol";
    }
}