#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    const int rows = 1;
    const int cols = 10; 

    int array[rows][cols];

    for (int j = 0; j < cols; j++) {
        array[0][j] = n;
        n++;
    }
    cout << endl;

    cout << "Recieved array:" << endl;
    for (int j = 0; j < cols; j++) {
        cout << array[0][j] << " ";
    }
    cout << endl;

    return 0;
}
