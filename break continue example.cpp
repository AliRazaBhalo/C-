#include<iostream>
using namespace std;
int main(){
    int pocketMoney = 5000;
    for (int  i = 0; i < 30; i++)
    {
        if(i % 2 == 0){
            continue; // to skip a statement or a set of statements
            // skip to the next itteration of loop
        }
        cout << "You can go out on day " << i << endl;
        pocketMoney -= 500;
        if(pocketMoney == 0){
            cout << "You can't go out bcz you don't have money.\n";
            break; // to get control out of the loop
            // to terminate a loop 
        }
    }
    
}