//fahrenheit to celcius conversion
// #include <iostream>
// using namespace std;
// int main(){
//     double fah,cel;
//     fah=0;
//     while(fah!=100){
//         cel=5*(fah-32)/9;
//         cout<<fah<<" "<<cel<<" "<<endl;
//         fah+=20;
//     }
    
// }

//Prime or not
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i!=0){
            cout<<"Prime number for "<<i<<endl;
        }
        else{
            cout<<"Not Prime for "<<i<<endl;
        }
        i++;
    }   
}