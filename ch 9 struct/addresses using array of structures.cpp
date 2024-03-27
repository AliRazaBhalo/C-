#include <iostream>
using namespace std;
struct address
{
    int houseNo;
    int street;
    char city[100];
    char state[100];
};
void printInfo(struct address add)
{
    cout << "The address is : " << add.houseNo << ", " << add.street << ", " << add.city << ", " << add.state;
}
int main()
{
    // struct address add1 = {1,2,"Sahiwal", "Punjab"};
    struct address addresses[5];
    cout << "Enter address 1 (Synatx : house, street, city, state)";
    cin >> addresses[0].houseNo >> addresses[0].street >> addresses[0].city >> addresses[0].state;
    printInfo(addresses[0]);
    // addresses[1] = {1, 3, "Lahore", "Punjab"};
    // addresses[2] = {1, 3, "Karachi", "Punjab"};
    // addresses[3] = {1, 3, "Islamabad", "Punjab"};
    // addresses[4] = {1, 3, "Bahawalpur", "Punjab"};

    // printInfo(add1);
}