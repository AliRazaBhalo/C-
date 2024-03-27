#include<iostream>
using namespace std;
int fib(int n){
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    
    
    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fibNm1 + fibNm2;
    // cout << "Fibonnaci of " << n << " is " << fibN << endl;

}
int main(){
    int n;
    cout << "Enter n ";
    cin >> n;    
   cout << "Fibonnaci of " << n << "th term is " <<  fib(n);
}