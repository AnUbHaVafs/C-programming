#include <iostream>
#include <string> 
using namespace std;


int main()
{
	string str = "Intervue.io Platform ";

	
	cout << "The initial string is : ";
	cout << str << endl;

	
	str.resize(12);
	cout << str << endl;

	cout << str.capacity() << endl;

	cout << str.length() << endl;

	str.shrink_to_fit();
    cout << str.capacity() << endl;

	return 0;
}
