#include<iostream>
using namespace std;
int main()
{
	int row1,column1,row2,column2;
	cout<<"Enter size of row of first matrix : ";
	cin>>row1;
	cout<<"Enter size of column of first matrix : ";
	cin>>column1;
	int matx1[row1][column1];
	cout<<"Enter first matrix elements : ";
	for(int i=0; i<row1; i++)
	{
		for(int j=0; j<column1; j++)
		{
			cin>>matx1[i][j];
		}
	}
	cout<<"First matrix elements : \n ";
	for(int i=0; i<row1; i++)
	{
		cout<<endl;
		for(int j=0; j<column1; j++)
		{
			cout<<matx1[i][j]<<" ";
		}
	}

//second matrix

	cout<<endl<<"Enter size of row of second matrix : ";
	cin>>row2;
	cout<<"Enter size of column of second matrix : ";
	cin>>column2;
	int matx2[row2][column2];
	cout<<"Enter second matrix elements : ";
	for(int i=0; i<row2; i++)
	{
		for(int j=0; j<column2; j++)
		{
			cin>>matx2[i][j];
		}
	}
	cout<<"second matrix elements : ";
	for(int i=0; i<row2; i++)
	{
		cout<<endl;
		for(int j=0; j<column2; j++)
		{
			cout<<matx2[i][j]<<" ";
		}
	}
	//multipication logic
if(column1==row2)
{
	int mul[row1][column2];
	for(int i = 0; i<row1; i++)
	{
		for(int j=0; j<column2; j++)
		{
			mul[i][j]=0;
			for(int k=0; k<column1; k++)
			{
				mul[i][j]+=matx1[i][k]*matx2[k][j];
			}
		}
	}
	cout<<"Matrix multiplication : \n ";
	for(int i=0; i<row1; i++)
	{
		for(int j=0; j<column2; j++)
	{
		cout<<mul[i][j]<<" ";
	}
	cout<<"\n";
}
}
return 0;	
}
