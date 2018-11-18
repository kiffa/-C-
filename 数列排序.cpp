//问题描述
//给定一个长度为n的数列，将这个数列按从小到大的顺序排列。1 <= n <= 200
//输入格式
//第一行为一个整数n。
//第二行包含n个整数，为待排序的数，每个整数的绝对值小于10000。
//输出格式
//输出一行，按从小到大的顺序输出排序后的数列。
//样例输入
//5
//8 3 6 4 9
//样例输出
//3 4 6 8 9

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int a[200];
	int n;
	cin >> n;
	if (n >= 1 && n <= 200)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])    //如果前一个元素大于后一个元素
			{
				int temp;        //临时变量
				temp = a[j];
				a[j] = a[j + 1]; //大的元素到前一个位置
				a[j + 1] = temp;   //小的元素到后一个位置
			}
		}
	}
	// 输出各元素
	for (int k = 0; k < n; k++) {
		cout << a[k] << " ";
	}

	return 0;
}