//Pattern 5
/*
    3 3 3
    2 2 2
    1 1 1
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<n-i+1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}