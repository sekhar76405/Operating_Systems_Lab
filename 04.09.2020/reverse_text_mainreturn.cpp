#include<iostream>
#include<string>
using namespace std;


int size_of_command(string command)		// developing a seperate function to know how many letters are there in the command
{
	return command.size();			//returning the size or no of letters
}


int main(int argc, char** argv)
{
	cout<<" You have entered " << argc << " arguments: " << "\n";

	for(int i = argc - 1 ; i>=0 ; i--)
	{

		for(int j = size_of_command(argv[i]) - 1 ; j>=0 ; j--)		//to know the actual no of iterations to make / print the letters
		{

			cout<<argv[i][j];					//printing each letter

		}

		cout<<endl;

	}
	return 0;
}
