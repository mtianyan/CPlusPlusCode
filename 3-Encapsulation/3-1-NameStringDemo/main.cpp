#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;


int main(void)
{

	string name;
	cout << "please input your name:";
	getline(cin, name);
	if (name.empty()) {
		cout << "input is null" << endl;
		system("pause");
		return 0;
	}
	if (name == "mtianyan")
	{
		cout << "you are a admin" << endl;

	}
	cout << "hello ," + name << endl;
	cout << "your name length is :" << name.size() << endl;
	cout << "your name frist letter is :" << name[0] << endl;

	system("pause");
	return 0;
}