#include <iostream>
using namespace std;

int main() {
    int* arr = new int[15];

    cout << "Enter 15 integers:" << endl;
    for (int i = 0; i < 15; i++) {
        cin >> arr[i];  
    }

    cout << "The 15 integers are:" << endl;
    for (int i = 0; i < 15; i++) {
        cout << arr[i] << " ";
    }
    delete[] arr;

    return 0;
}
