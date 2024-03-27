#include <iostream>
using namespace std;

class complexNumber
{
    int a, b;
    int input;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void print()
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }

    void setDataBySum(complexNumber o1, complexNumber o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
};
int getInput(string name)
{
    int input;
    cout << "Enter input for " << name << " : ";
    cin >> input;
    return input;
}

int main()
{


    complexNumber c1, c2, c3;
    c1.setData(getInput("1first"), getInput("1second")); // why it is first getting the value of second argument?
    c1.print();

    c2.setData(getInput("2first"), getInput("2second"));
    c2.print();

    c3.setDataBySum(c1, c2);
    c3.print();
}