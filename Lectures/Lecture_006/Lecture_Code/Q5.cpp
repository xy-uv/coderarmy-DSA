#include<iostream>
using namespace std;

int main(){
    int n,row,col;
    cout<<"Enter the number of n: ";
    cin>>n;

    for(row=1;row<=n;row++){
        for(col=n;col>=1;col--){
            cout<<col<<" ";
        }cout<<endl;
    }

    cout<<"\n\n";

    for(row=n;row>=1;row--){
        for(col=1;col<=n;col++){
            cout<<row<<" ";
        }cout<<endl;
    }
}