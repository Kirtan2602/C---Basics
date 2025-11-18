#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int oldValue, newValue;
    cout << "Enter number to replace: ";
    cin >> oldValue;

    cout << "Enter new number: ";
    cin >> newValue;

    for(int i = 0; i < n; i++) {
        if(arr[i] == oldValue)
            arr[i] = newValue;
    }

    cout << "Updated array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
