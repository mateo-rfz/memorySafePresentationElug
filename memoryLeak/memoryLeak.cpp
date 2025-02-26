#include <iostream>
using namespace std;

void leak() {
    int* ptr = new int(42);
}

int main() {
    while (true) {
        leak();
    }
    return 0;
}