#include <iostream>
using namespace std;
int findNumbers(int numb[], int n)
{
    int even = 0;
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (numb[i] % 2 != 0)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }
    cout << "Total Odd elements are " << odd << endl;
    cout << "Total Even elements are " << even << endl;
}

int main()
{
    int numb[] = {1, 3, 4, 5, 6, 7, 8, 9, 13};
    findNumbers(numb, 9); // Not to use []
}