#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    long long int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i*i;
    }
    cout<<"The sum is: "<<sum;
}