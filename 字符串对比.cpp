//��������
//�����������ɴ�д��ĸ��Сд��ĸ��ɵ��ַ���(���Ƚ���1��10֮��)������֮��Ĺ�ϵ������4�����֮һ��
//1�������ַ������Ȳ��ȡ����� Beijing �� Hebei
//2�������ַ�������������ȣ�������Ӧλ���ϵ��ַ���ȫһ��(���ִ�Сд)������ Beijing �� Beijing
//3�������ַ���������ȣ���Ӧλ���ϵ��ַ����ڲ����ִ�Сд��ǰ���²��ܴﵽ��ȫһ�£�Ҳ����˵���������������2�������� beijing �� BEIjing
//4�������ַ���������ȣ����Ǽ�ʹ�ǲ����ִ�СдҲ����ʹ�������ַ���һ�¡����� Beijing �� Nanjing
//����ж�����������ַ���֮��Ĺ�ϵ�����������е���һ�࣬������������ı�š�
//�����ʽ
//�������У�ÿ�ж���һ���ַ���
//�����ʽ
//����һ�����֣������������ַ����Ĺ�ϵ���
//��������
//BEIjing
//beiJing
//�������

#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <string.h>
#include <iterator>
#include <cctype>
using namespace std;

int Lower(string s) {
	for (int i = 0; i < s.size(); i++)
		s[i] = tolower(s[i]);
	return 0;
}

int main() {
	string x, y;
	cin >> x;
	cin >> y;

	if (x.length() != y.length())
	{
		cout << "1";
	}
	else {
		if (x == y) {
			cout << "2";
		}
		else {
			if (Lower(x)==Lower(y))
			{
				cout << "3";
			}
			else {
				cout << "4";
			}
		}
	}
	return 0;
}