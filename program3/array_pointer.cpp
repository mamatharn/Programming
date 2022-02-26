#include<iostream>

using namespace std;


int main()
{

	int arr[5];
	int *ptr=arr;

	cout<<"Enter elements of array:"<<endl;
	for(int i=0;i<5;i++)
		cin>>ptr[i];

	cout<<"Entered array elements are:"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<*(ptr+i)<<endl;
	}


	return 0;
}




