#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of elements : ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int x;
    cout << "Enter number to find frequency : ";
    cin >> x;

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
        
    }
    cout << "Frequency of " << x << " = " << count << endl;

    return 0;
}