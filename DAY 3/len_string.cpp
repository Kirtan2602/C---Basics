#include <iostream>
using namespace std;
int main(){
    string s;
    
    cout << "Enter a string for measured lenght : ";
    getline(cin,s);

    cout << "Lenght = " << s.length();

    return 0 ;

}