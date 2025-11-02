#include<iostream>
using namespace std;

int main(){
    int row,col,n;
    cout<<"Enter the number: ";
    cin>>n;
    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            char val='F'+(row-1);
            cout<<val<<" ";
        }cout<<endl;
    }
}