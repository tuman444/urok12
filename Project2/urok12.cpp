#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int  a = 30;
	//cout << boolalpha;
	//cout << (a > 10) << endl;
	a = 12;
	if (a > 10)
	{
		while (a > 5)
		{
			a--;
			cout << "taskl a = " << a << endl;
		}
    cout << "���� ����� ������ 10" << endl; 
	}
	else
	{
		cout << "���� ����� ������ 10" << endl;
	}
}