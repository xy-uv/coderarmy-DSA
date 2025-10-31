#include<iostream>
using namespace std;

int main(){
    int i,n;
    cout<<"Enter the number: ";
    cin>>n;

   if(n<2){
    cout<<"Not Prime";
    return 0;
   }else{
     for(i=2;i<=n;i++){
        if(n%2==0){
            cout<<"Not Prime";
            return 0;
        }
    }
    cout<<"Prime";
   }
}