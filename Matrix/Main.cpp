#include <iostream>

using namespace std;

int main()
{
    int arrayMatrix[3][3] =
    {
        {4, 4, 2},
        {5, 7, 2},
        {9, 1, 3}
    };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter a 9 values: " << endl;;
            cin >> arrayMatrix[i][j];
        }
    }
    cout << "Full Matrix: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            
            cout << arrayMatrix[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}