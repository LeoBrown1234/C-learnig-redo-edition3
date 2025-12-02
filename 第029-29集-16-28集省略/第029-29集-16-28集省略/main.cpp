/*
三目运算符:

表达式1?表达式2:表达式3
表达式1的值必须是一个bool值，表达式2和表达式3的值可以不同。
表达式1结果是true时，返回表达式2的值，否则返回表达式3的值。

*/
#include<iostream>
using namespace std;

int main()
{
	int a = 10, b = 20, c = 30;
	int result = (a > b)? a : b; // 结果为a
	cout << "result = " << result << endl;

	result = (a > b)? c : b; // 结果为b
	cout << "result = " << result << endl;

	result = (a > b)? c : (a > c)? a : c; // 结果为a

	cout << "result = " << result << endl;

	system("pause");
	return 0;
}









