#include <iostream>
using namespace std;

int main() {
    int numbers[5]={1, 2, 3, 4, 5};
    cout << "Array elements in reverse order:";
    for (int i = 4; i >= 0; i--) {
        cout << numbers[i] << " ";
    }
    return 0;
}
