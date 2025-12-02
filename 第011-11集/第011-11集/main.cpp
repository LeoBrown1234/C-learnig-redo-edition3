#include<iostream>
using namespace std;

int main()
{
	//1.字符型变量创建方式
	char ch = 'a';
	cout << ch << endl;

	//2.字符型变量所占内存大小
	cout << "char:"<<sizeof(char) << endl;

	//3.字符型变量常见错误
	
	//不能用双引号  char ch2 = "b";
	//char ch3='abcd'; //错误，超出ASCII码范围,这是字符串
	//只能有一个字符在中间，和字符串类型有所区分



	//4.字符型变量对应ASCII编码
	cout << (int)ch << endl;//字符型转int型查看ASCII编码



	system("pause");
	return 0;
}






