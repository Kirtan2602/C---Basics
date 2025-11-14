#include <iostream>
using namespace std;
int main(){
    string s;
    cout << "Enter the sentence : ";
    getline(cin,s);

    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        char ch = tolower(s[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            count++;
        }
        
    }
    cout << "Number of vowels in this sentence : " << count << endl ;
    return 0 ;
}