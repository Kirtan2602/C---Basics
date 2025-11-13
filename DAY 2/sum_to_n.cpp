#include <iostream>
using namespace std;
int main(){
    int num, sum = 0;
    cout << "Enter the N number: ";
    cin >> num;
    
    for (int i = 1; i <= num; i++)
    {
        sum += i ;
    }

    cout << "sum of the first" << num << " numbers = " << sum << endl;
    return 0 ;
    
}