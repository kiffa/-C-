//��������
//123321��һ���ǳ����������������߶��ʹ��ұ߶���һ���ġ�
//����һ��������n�� �����������������λ����λʮ�������������λ����֮�͵���n ��
//�����ʽ
//����һ�У�����һ��������n��
//�����ʽ
//����С�����˳���������������������ÿ������ռһ�С�
//��������
//52
//�������
//899998
//989989
//998899
//���ݹ�ģ��Լ��
//1 <= n <= 54��

#include "pch.h"

#include<iostream>
using namespace std;

int main()
{
	int n;	//�����û���������� 
	int pNumber = 10000;	//�ػ�������ֵ 
	int left, right;	//�ֱ��ʾ�ػ�������߲��ֺ��ұ߲��� 
	int i;	// ���ڷ���pNumber����λʱ���� 
	int nArray[6];
	unsigned int temp = 0;
	cin >> n;
	for (pNumber; pNumber <= 999999; pNumber++)
	{
		i = 0;
		temp = pNumber;
		if (temp < 100000)	//�� pNumberΪ5λ����ʱ�� 
		{
			while (temp > 0)	//���� pNumber��ÿһλ�ֽ�������������� 
			{
				nArray[i++] = temp % 10;
				temp = temp / 10;
			}
			if (nArray[0] + nArray[1] + nArray[2] + nArray[3] + nArray[4] == n)	//�ж�pNumber�ĸ�λ����Ƿ���������n 
			{
				left = nArray[0] * 10 + nArray[1];
				right = nArray[4] * 10 + nArray[3];
				if (left == right)	//�ж�����Ƿ�����ұ� 
				{
					cout << pNumber << endl;
				}
			}
		}
		else	//�� pNumberΪ6λ����ʱ�� 
		{
			while (temp > 0)	//���� pNumber��ÿһλ�ֽ�������������� 
			{
				nArray[i++] = temp % 10;
				temp = temp / 10;
			}
			if (nArray[0] + nArray[1] + nArray[2] + nArray[3] + nArray[4] + nArray[5] == n)	//�ж�pNumber�ĸ�λ����Ƿ���������n 
			{
				left = nArray[0] * 100 + nArray[1] * 10 + nArray[2];
				right = nArray[5] * 100 + nArray[4] * 10 + nArray[3];
				if (left == right)	//�ж�����Ƿ�����ұ� 
				{
					cout << pNumber << endl;
				}
			}
		}
	}
	return 0;
}
