#include<iostream>
using namespace std;

int main(){
    int i,n;
    cout<<"Enter the number: ";
    cin>>n;
    int sum=0;

    for(i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"The total sum is: "<<sum<<endl;
}