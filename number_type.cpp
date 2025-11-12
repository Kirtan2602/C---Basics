#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter the number:";
    cin>>num;
    if(num > 0){
        cout << num << " this is positive number";
    }
    else if (num < 0){
        cout << num << " this is negative number";
    }
    else{
        cout << num << " zero";
    }
    return 0;
}