//��������
//153��һ���ǳ��������������������ÿλ���ֵ������ͣ���153 = 1 * 1 * 1 + 5 * 5 * 5 + 3 * 3 * 3���������������������������λʮ��������
//�����ʽ
//����С�����˳�����������������λʮ��������ÿ����ռһ�С�
#include"pch.h"
#include <iostream>
using namespace std;

int main() {
	int num = 100;
	int temp = 0;
	int a[3];
	for (num; num < 1000; num++) {
		temp = num;
		for (int i= 0; i < 3; i++) {
			a[i] = temp % 10;
			temp = temp / 10;
		}
		if (a[0] * a[0] * a[0] + a[1] * a[1] * a[1] + a[2] * a[2] * a[2] == num) {
			cout << num << endl;
		}
	}
}