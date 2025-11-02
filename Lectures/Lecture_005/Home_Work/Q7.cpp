#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if(n == 0){
        cout << 0;
        return 0;
    }
    if(n == 1){
        cout << 1;
        return 0;
    }

    int first = 0, last = 1, curr;
    for(int i = 2; i <= n; i++){
        curr = first + last;
        first = last;
        last = curr;
    }

    cout << curr << endl;
    return 0;
}
