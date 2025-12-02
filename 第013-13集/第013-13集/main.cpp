//字符串类型
#include <iostream>
#include <string>
using namespace std;

int main()
{

    char str[] = "Hello, world!";//C风格的字符串


    //C++风格的字符串,需要string头文件
    string str1 = "Hello, world!";
    string str2 = "I love programming.";

    // 输出字符串
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;
    // 字符串拼接
    string str3 = str1 + " " + str2;
    cout << "str3: " << str3 << endl;
    // 字符串长度
    cout << "str1 length: " << str1.length() << endl;
    cout << "str2 length: " << str2.length() << endl;
    cout << "str3 length: " << str3.length() << endl;
    // 字符串大小写转换
    string str4 = "HELLO, WORLD!";
    string str5 = "I LOVE PROGRAMMING.";
    string str6 = "hello, world!";
    string str7 = "i love programming.";
    cout << "str4: " << str4 << endl;
    cout << "str5: " << str5 << endl;
    cout << "str6: " << str6 << endl;
    cout << "str7: " << str7 << endl;
    str4.swap(str6);
    str5.swap(str7);
    cout << "str4: " << str4 << endl;
    cout << "str5: " << str5 << endl;
    system("pause");
    return 0;

}