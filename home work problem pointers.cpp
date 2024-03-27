#include <iostream>
using namespace std;
int main()
{
    // question 1
    /*int num1, num2;
    cout << "Enter Num 1 :";
    cin >> num1;
    cout << "Enter Num 2 :";
    cin >> num2;
    int *n1Ptr = &num1, *n2Ptr = &num2;
    if(*n1Ptr > *n2Ptr){
        cout << *n1Ptr << " is greater ";
    }
    else{
        cout << *n2Ptr << " is greater";
    }
    */
    //    Question 2
    /*
    int arr[] = {1,2,3,4,5};
    for(int i = 4; i >= 0; i--){
     cout << arr[i] << endl;
    }
    */

    //   Question 3
    /**/
    char a = 'A';
    char z = 'Z';
    char *alpha = &a;
    char *zptr = &z;
    for (; *alpha <= *zptr ; (*alpha)++) // (*alpha)++ means add 1 in value not in address
    {
        cout << *alpha << endl;
    }
    
}