#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int N = 6;

int main()
{
    int arr[N][N], newArr[N][N];
    int offset;
    std::string direction;

    srand(time(0));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }

    cout << "Original array:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter the number of offsets: ";
    cin >> offset;
    cout << "Enter the direction of the shift (0-left, 1-right, 2-up, 3-down): ";
    cin >> direction;

    if (direction == "0")
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                newArr[i][(j - offset + N) % N] = arr[i][j];
            }
        }
    }
    else if (direction == "1")
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                newArr[i][(j + offset) % N] = arr[i][j];
            }
        }
    }
    else if (direction == "2")
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                newArr[(i - offset + N) % N][j] = arr[i][j];
            }
        }
    }
    else if (direction == "3")
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                newArr[(i + offset) % N][j] = arr[i][j];
            }
        }
    }

    cout << "Shifted array:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << newArr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}