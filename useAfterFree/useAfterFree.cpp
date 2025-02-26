#include <iostream>
using namespace std;

int main() {
    int* ptr = new int(42);
    cout << "Value: " << *ptr << endl;

    delete ptr;

    cout << "After free: " << *ptr << endl;

    return 0;
}
