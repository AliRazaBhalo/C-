#include <iostream>
typedef struct address
{
    int houseNo;
    int street;
    char city[199];
    char state[100];
} add;

using namespace std;
void getInfo(add *address)
{
    cout << "Enter House No : \n";
    cin >> (*address).houseNo;
    cout << "Enter street No : \n";
    cin >> (*address).street;
    cout << "Enter city : \n";
    cin >> (*address).city;
    cout << "Enter State : \n";
    cin >> (*address).state;
}

void printInfo(add address)
{
    cout << "The address is : " << address.houseNo << "," << address.street << "," << address.city << "," << address.state;
}
int main()
{
    add add1, add2, add3, add4, add5;
    int pr;
    printf("Enter information of first people\n");
    getInfo(&add1);
    /*
    printf("Enter information of second people\n");
    getInfo(&add2);
    printf("Enter information of third people\n");
    getInfo(&add3);
    printf("Enter information of fourth people\n");
    getInfo(&add4);
    printf("Enter information of fifth people\n");
    getInfo(&add5);
    */

    cout << "Which address you want to print?";
    cin >> pr;
    switch (pr)
    {
    case 1:
        printInfo(add1);
        break;
        /*

        case 2:
             printInfo(add2);
             break;
         case 3:
             printInfo(add3);
             break;
         case 4:
             printInfo(add4);
             break;
         case 5:
             printInfo(add5);
             break;
        */

    default:
        cout << "You want to print wrong person address :-)";
        break;
    }
}
