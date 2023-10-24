#include <iostream>
using namespace std;

int main() {
    int rows = 4;
    int cols = 4;
    int array[4][4] = 
    {
        {7, 5, 9, 1},
        {11, 5, 3, 3},
        {2, 5, 0, 1},
        {55, 3, 22, 4}
    };

    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += array[i][j];
            cout << array[i][j] << "\t";
        }
        cout << "| " << rowSum << endl;
    }

    cout << "--------------------------------" << endl;

    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += array[i][j];
        }
        cout << colSum << "\t";
    }
    cout << endl;

    int totalSum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            totalSum += array[i][j];
        }
    }
    cout << endl;

    cout << "Total: " << totalSum << endl;

    return 0;
}
