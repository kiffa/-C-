//从键盘输入一个大写字母，要求改用小写字母输出。
//输入
//A
//输出
//a

#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string str;
	cin >> str;
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	cout << str;
}