 #include <iostream>
 using namespace std;
 int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num ;

    cout << "multiplication table of " << num << ":" << endl;

    for (int i = 0; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << num * i << endl; 
    }
    return 0 ;
 }