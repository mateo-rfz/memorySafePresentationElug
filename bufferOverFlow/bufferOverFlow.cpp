#include <iostream>
using namespace std;

int main() {
    char buffer[10];
    int secret = 42;

    cout << "Enter some text: ";
    cin >> buffer;

    cout << "You entered: " << buffer << endl;
    cout << "Secret value: " << secret << endl;

    return 0;
}