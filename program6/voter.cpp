#include<iostream>

using namespace std;


int main()
{
	int age;
	cout<<"Enter age of user:"<<endl;
	cin>>age;


	if(age>=18)
		cout<<"you are eligible for voting"<<endl;
	else
		cout<<"you are not eligible for voting"<<endl;
	return 0;
}

