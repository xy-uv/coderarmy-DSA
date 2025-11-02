#include<iostream>
using namespace std;

int main(){
    int n,row,col;
    cout<<"Enter the number: ";
    cin>>n;

    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            cout<<(row-1)*5+col<<" ";
        }cout<<endl;
    }
}