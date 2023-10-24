#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() {
    const int rows1 = 5;
    const int cols1 = 10;
    const int rows2 = 5;
    const int cols2 = 5;

    int array1[rows1][cols1];
    int array2[rows2][cols2];

    
    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            array1[i][j] = rand() % 51;
        }
    }

    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            array2[i][j] = array1[i][2 * j] + array1[i][2 * j + 1];
        }
    }

    cout << "First array:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cout << array1[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Second array:" << endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << array2[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
