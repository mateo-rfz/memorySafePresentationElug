#include <iostream>
using namespace std;

void tester() {
    cout << "Hey you on tester" << endl;
}

void vulnerable() {
    char buffer[10];
    cout << "Enter some text: ";
    cin >> buffer; 
}

int main() {
    vulnerable();
    cout << "Back to main!" << endl;
    return 0;
}
