#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}
void reverse(int arr[], int size)
{
    int firstVal, secondVal;
    for (int i = 0; i < size / 2; i++)
    {
        firstVal = arr[i];
        secondVal = arr[size - i - 1];
        arr[i] = secondVal;
        arr[size - i - 1] = firstVal;
    }
}
int main()
{
    int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    reverse(arr, size);
    cout << "Reversed Order\n";
    printArr(arr, size);
}