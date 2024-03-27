#include <iostream>
using namespace std;
int main()
{
    int g;
    int t, m;
    cout << "Welcome to check Timing (-.-) \n";
    cout << "Enter Ghassy : ";
    cin >> g;
    // if(g <= 0){
    //     cout << "You are Muthal ";
    // }
    // else{
    //     t = g * 5;
    //     m = t/ 60;
    //     cout << "Your Timing is : " << m << " Minutes " << t - (m*60)  << " Seconds ";

    if (g <= 0)
        cout << "You are Khusra ";
    else if (g <= 20)
    {
        cout << "You are muthal ";
    }
    else
    {
        t = g * 5;
        m = t / 60;
        cout << "Your Timing is : " << m << " Minutes " << t - (m * 60) << " Seconds ";
    }
}
