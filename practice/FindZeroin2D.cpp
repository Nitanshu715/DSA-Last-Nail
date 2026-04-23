#include<iostream>
using namespace std;
int main()
{
    int i, j, arr[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "Enter the number: ";
            cin >> arr[i][j];
        }
    }
    for (i = 0; i < 3; i++)
    {
        cout << endl;
        for (j = 0; j < 3; j++)
        cout << arr[i][j] << " ";
    }
    cout << endl;
    cout << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (arr[i][j] == 0)
            {
               cout << "The row: " << i << " contains a 0.\n";
               cout << "The column: " << j << " contains a 0.\n"; 
            }
        }
    }
    return 0;
}
