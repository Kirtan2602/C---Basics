#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);

    int spaces = 0, digits = 0, letters = 0;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ' ')
            spaces++;
        else if(s[i] >= '0' && s[i] <= '9')
            digits++;
        else if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            letters++;
    }

    cout << "Total spaces: " << spaces << endl;
    cout << "Total digits: " << digits << endl;
    cout << "Total letters: " << letters << endl;

    return 0;
}
