#include <iostream>
using namespace std;
class first
{
    // private:
    int pri;

protected:
    int pro;

public:
    int pub;

    // A(){
    //     pub = 50;
    //     pri = 60;
    //     pro = 70;
    // }

    void print()
    {
        cout << "Public is " << pub;
        cout << "\n Private is " << pri;
        cout << "\n Protected is " << pro;
    };
};
int main()
{
    first f1;
    f1.print();
}