#include<iostream>
using namespace std;

int main(){
    int n,row,col,p;
    cout<<"Enter the number of n: ";
    cin>>n;
    cout<<"Enter the value you want to print: ";
    cin>>p;

    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            cout<<p<<" ";
        }cout<<endl;
    }    
}