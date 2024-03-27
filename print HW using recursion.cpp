#include<iostream>
using namespace std;
void Hello(int count){
    if(count == 0){
        return;
    }
    cout << "Hello World\n";
    Hello(count - 1);
}
int main(){
    Hello(4);
        
}