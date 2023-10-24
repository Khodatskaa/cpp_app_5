#include <iostream>
#include <ctime>
#include <Windows.h>
using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    int rows = 5;
    int cols = 5;

    int array[5][5];  

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            array[i][j] = rand() % 100;
        }
    }

    int totalSum = 0;
    int count = 0;
    int minElement = INT_MAX;
    int maxElement = INT_MIN;

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            totalSum += array[i][j];
            count++;
            if (array[i][j] < minElement) 
            {
                minElement = array[i][j];
            }
            if (array[i][j] > maxElement) 
            {
                maxElement = array[i][j];
            }
        }
    }

    double average = static_cast<double>(totalSum) / count;

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Sum of all elements: " << totalSum << endl;
    cout << "Average: " << average << endl;
    cout << "Minimum element: " << minElement << endl;
    cout << "Maximum element: " << maxElement << endl;

    return 0;
}
