#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int *arr = new int[n];
    arr[0] = 5;
    arr[1] = 4;
    arr[2] = 3;
    cout << " " << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    delete[] arr;
    return 0;
}