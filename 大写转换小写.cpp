//�Ӽ�������һ����д��ĸ��Ҫ�����Сд��ĸ�����
//����
//A
//���
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