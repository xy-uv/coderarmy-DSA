#include<iostream>
using namespace std;

int main(){
    int i,n;
    cout<<"Enter the number: ";
    cin>>n;
    long long int fact=1;
    for(i=1;i<=n;i++){
        fact*=i;
    }
    cout<<"The factorial is: "<<fact;
}