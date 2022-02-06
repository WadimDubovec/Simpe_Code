#include<iostream>
using namespace std;

void Foo(int* pa)		// p - pointer (указатель)
{
	(*pa)++;			//приоритет операций - сначала разыменовать , потом ++
}

int main()
{
	int a = 0;
	cout << a << endl;

	Foo(&a);
	cout << a << endl;

	return 0;
}
