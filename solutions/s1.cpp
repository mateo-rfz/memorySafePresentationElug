#include <iostream>
#include <memory>
#include <string>

using namespace std;


void tester(){
    cout << "hey you on tester";
}

void safe() {
    auto buffer = make_unique<string>();
    cout << "Enter some text: ";
    cin >> *buffer;

    cout << "You entered: " << *buffer << endl;
}

int main(){
    safe();
    cout << "Back to main!" << endl;
    return 0;
}