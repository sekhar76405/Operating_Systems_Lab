#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	cout << "You have entered " << argc << " arguments:" << "\n";

	for (int i = argc -1; i>=0 ; i--)
	{
		cout << argv[i] << "\n";
	}

	return 0;
}

