//sizeof关键字，可以显示内存大小
#include<iostream>
using namespace std;

int main()
{
	short num1 = 10;
	int num2 = 20;
	long num3 = 30;
	long long num4 = 40;
	float num5 = 50.5;
	double num6 = 60.6;
	long double num7 = 70.7;

	cout << "Size of short: " << sizeof(num1) << endl;
	cout << "Size of int: " << sizeof(num2) << endl;
	cout << "Size of long: " << sizeof(num3) << endl;
	cout << "Size of long long: " << sizeof(num4) << endl;
	cout << "Size of float: " << sizeof(num5) << endl;
	cout << "Size of double: " << sizeof(num6) << endl;
	cout << "Size of long double: " << sizeof(num7) << endl;


	system("pause");
	return 0;
}

