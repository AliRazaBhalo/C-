#include <iostream>
using namespace std;
void storeTable(int arr[][10], int size, int n, int m, int number)
{
    for (int i = 0; i < size; i++)
    {
        arr[n][i] = number * (i + 1);
        cout << arr[n][i] << "\t";
    }
    cout << endl;
}
int main()
{
    int table[2][10] = {{2, 4, 6, 8, 10, 12, 14, 16, 18, 20}, {3, 6, 9, 12, 15, 18, 21, 24, 27, 30}};
    // cout << table[0][3];
    storeTable(table, 10, 0, 10, 3);
    storeTable(table, 10, 1, 10, 2);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << table[i][j] << "\t";
        }
        cout << endl;
    }
}