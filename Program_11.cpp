#include <iostream>
using namespace std;
int main() 
{
int n;
cout << "Enter the number : ";
cin >> n;
int b=0 , c=1 , d ;
for(int i = 0; i<n; i++)
{
cout<<b<<" "; 
d=b+c; 
b=c; 
c=d; 
}

return 0;
}