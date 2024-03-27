#include<iostream>
using namespace std;
void swap(int *num1, int *num2){
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
	
}
int main(){
/*
	int num1 = 10;
	int num2 = 20;
	
	swap(num1,num2);
	cout << num1 <<" " << num2;
*/
// By Using pointers
//Method 1

/*
	int n1,n2;
	cout << "Enter first number : ";
	cin >> n1;
	cout << "Enter second number : ";
	cin >> n2;
	int * n1Ptr = &n1;
	int * n2Ptr = &n2;
	
 	cout << "Numbers before swap : " n1 << " " << n2;           
	swap(*n1Ptr, *n2Ptr);
 	cout << "Numbers after swap : " n1 << " " << n2;           
 		
*/
	
//	cout << "\n " << n1Ptr;
//	cout << "\n " << &n1Ptr;
//	cout << "\n " << n1;
	
//	cout << "\n " << n1Ptr;
//	cout << "\n " << n1Ptr;
	
	
//Method 2

	int n1,n2;
	cout << "Enter first number : ";
	cin >> n1;
	cout << "Enter second number : ";
	cin >> n2;
	
	swap(&n1,&n2);
	cout << "After swap " << << " " n1 << n2;

}


