#include<iostream>
using namespace std;
int main(){
	
	// Program # 1
	
	int arr[] = {100,2,3,4,5,6,7};
	int max = arr[0];
	for(int i = 0; i < 9 ; i++){
		if(arr[i] > max){
			cout << arr[i];
		}
	}
	cout << "The last value of an array is " << arr[6] << endl;	

	// Program # 2
/*	int salary, experience;
	cout << "Enter Your salary : ";
	cin >> salary;
	cout << "Enter Your Experience years : ";
	cin >> experience;
	if(experience >= 5){
		salary = salary + (salary * 5/100);
		cout << "Your salary is increased by 5% \n";
		cout << "Your New salary is " << salary;
	} 
	else{
		cout << "Your salary can't be increased in Sahiwal :)\n";
	}
	
	// Program # 3
	float a = 1;
	float end,sum;
	cout << "Enter Ending Denominator n : ";
	cin >> end;
	cout << "The series is : ";
	for(int i = 1; i <= end; i++){
		cout << a << "/" << i << "\t";
		sum += a/i;	
	}	
	cout <<"\nThe Sum of the given series is : " << sum <<endl;
*/
}

