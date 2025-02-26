#include <iostream>
#include <cstring>

using namespace std;

void hacked() { 
    cout << "you got hacked" << endl;
}

void safe() {
    char buffer[10];
    cout << "Enter some text: ";
    cin.width(10);
    cin >> buffer;
}

int main() { 
    safe();
    cout << "Back to main!" << endl;
    return 0;
}