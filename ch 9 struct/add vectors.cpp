#include <iostream>
using namespace std;
struct vector
{
    int x, y;
};
void printVector(struct vector v1, struct vector v2)
{
    cout << v1.x << " + " << v2.x << " is " << ((v1.x + v2.x)) << endl;
    cout << v1.y << " + " << v2.y << " is " << ((v1.y + v2.y));
}

int main()
{
    struct vector v1, v2, sum;
    cout << "Enter vector 1 (x y) : ";
    cin >> v1.x >> v1.y;

    cout << "Enter vector 2 (x y) : ";
    cin >> v2.x >> v2.y;

    printVector(v1,v2);
    // cout << v1.x << " + " << v2.x << " is " << ((v1.x + v2.x)) << endl;
    // cout << v1.y << " + " << v2.y << " is " << ((v1.y + v2.y));
}