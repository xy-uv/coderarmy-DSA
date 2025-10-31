#include<iostream>
using namespace std;

int main(){
    int n,pow,num,i;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the power you want: ";
    cin>>pow;
    num=1;
    for(i=1;i<=pow;i++){
        num=num*n;
    }
    cout<<num<<endl;
}