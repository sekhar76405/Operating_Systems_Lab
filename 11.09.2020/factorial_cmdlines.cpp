#include<iostream>
#include<cstring>
using namespace std;

int factorial(int num)
{
	if(num==0)
	return 1;
	if(num==1)
	return 1;
	else
	return num * factorial(num - 1);
}

int main (int argc, char** argv)
{
	int number;
	if(strcmp(argv[1],"f")==0)				// f is a custom keyword that triggers the if part
	{
		cout<<"enter a number: ";
		cin>>number;
		cout<<"the factorial is : "<<factorial(number)<<endl;
	}
else
{
cout<<"no command line key words detected";
}
return 0;
}
