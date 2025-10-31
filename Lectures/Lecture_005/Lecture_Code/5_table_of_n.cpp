#include<iostream>
using namespace std;

int main(){
    int i,n;
    cout<<"Enter the number: ";
    cin>>n;

    //METHOD:-1
    cout<<"Table of "<<n<<": \n";
     for(i = 1; i <= 10; i++){
        cout << n << " * " << i << " = " << n * i << endl;
    }

    //METHOD:-2
    for(i=n;i<=(n*10);i=i+n){
        cout<<i<<endl;
    }
}