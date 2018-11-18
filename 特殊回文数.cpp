//问题描述
//123321是一个非常特殊的数，它从左边读和从右边读是一样的。
//输入一个正整数n， 编程求所有这样的五位和六位十进制数，满足各位数字之和等于n 。
//输入格式
//输入一行，包含一个正整数n。
//输出格式
//按从小到大的顺序输出满足条件的整数，每个整数占一行。
//样例输入
//52
//样例输出
//899998
//989989
//998899
//数据规模和约定
//1 <= n <= 54。

#include "pch.h"

#include<iostream>
using namespace std;

int main()
{
	int n;	//保存用户输入的数据 
	int pNumber = 10000;	//回环数赋初值 
	int left, right;	//分别表示回环数的左边部分和右边部分 
	int i;	// 用在分离pNumber各个位时计数 
	int nArray[6];
	unsigned int temp = 0;
	cin >> n;
	for (pNumber; pNumber <= 999999; pNumber++)
	{
		i = 0;
		temp = pNumber;
		if (temp < 100000)	//当 pNumber为5位数的时候 
		{
			while (temp > 0)	//将数 pNumber的每一位分解出来，存入数组 
			{
				nArray[i++] = temp % 10;
				temp = temp / 10;
			}
			if (nArray[0] + nArray[1] + nArray[2] + nArray[3] + nArray[4] == n)	//判断pNumber的各位相加是否等于输入的n 
			{
				left = nArray[0] * 10 + nArray[1];
				right = nArray[4] * 10 + nArray[3];
				if (left == right)	//判断左边是否等于右边 
				{
					cout << pNumber << endl;
				}
			}
		}
		else	//当 pNumber为6位数的时候 
		{
			while (temp > 0)	//将数 pNumber的每一位分解出来，存入数组 
			{
				nArray[i++] = temp % 10;
				temp = temp / 10;
			}
			if (nArray[0] + nArray[1] + nArray[2] + nArray[3] + nArray[4] + nArray[5] == n)	//判断pNumber的各位相加是否等于输入的n 
			{
				left = nArray[0] * 100 + nArray[1] * 10 + nArray[2];
				right = nArray[5] * 100 + nArray[4] * 10 + nArray[3];
				if (left == right)	//判断左边是否等于右边 
				{
					cout << pNumber << endl;
				}
			}
		}
	}
	return 0;
}
