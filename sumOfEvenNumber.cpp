#include<iostream>
using namespace std; 

int main(){
    int sum=0, n, i=0 ;
    
    cout<< "enter the number: ";
    cin>> n;

    while(i<n){
        sum = sum + i;
        i+=2;
    }
    cout << sum << endl;
    return 0;
}