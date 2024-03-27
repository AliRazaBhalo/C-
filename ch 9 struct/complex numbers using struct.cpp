#include <iostream>
using namespace std;
struct complex
{
    int real, img;
};

void calcSum(struct complex n1, struct complex n2)
{
    cout << "Complex number is : " << n1.real + n2.real << " + " << n1.img + n2.img  << "i"<< endl;
}
int main()
{
    complex n1 = {5, 8};
    complex n2 = {5, 8};
    // cout << "Complex number is : " << n1.real + n2.real << " + " << n1.img + n2.img << endl;
    calcSum(n1,n2);
}