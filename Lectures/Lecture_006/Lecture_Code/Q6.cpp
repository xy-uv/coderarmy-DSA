#include<iostream>
using namespace std;

int main(){
    int row,col,n;
    cout<<"Enter the Number: ";
    cin>>n;

    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            char ch='a'+(col-1);
            cout<<ch<<" ";
        }cout<<endl;
    }
   
}