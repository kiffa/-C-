//问题描述
//十六进制数是在程序设计时经常要使用到的一种整数的表示方式。它有0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F共16个符号，分别表示十进制数的0至15。十六进制的计数方法是满16进1，所以十进制数16在十六进制中是10，而十进制的17在十六进制中是11，以此类推，十进制的30在十六进制中是1E。
//给出一个非负整数，将它表示成十六进制的形式。
//输入格式
//输入包含一个非负整数a，表示要转换的数。0 <= a <= 2147483647
//输出格式
//输出这个整数的16进制表示
//样例输入
//30
//样例输出
//1E

#include "pch.h"
#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	int n;
	string s[16] = { "0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F" };
	string hex[] = { 0 };
	while (n != 0) {
		int i = 0;
		n = a / 16;
		hex[i] = a % 16;
		i++;
	}
	for (int i = 0; i < sizeof(hex); i++) {
		for (int j = 0; j < sizeof(hex) - i - 1; j++)
		{
			if (hex[j] > hex[j + 1])    //如果前一个元素大于后一个元素
			{
				string temp;        //临时变量
				temp = hex[j];
				hex[j] = hex[j + 1]; //小的元素到前一个位置
				hex[j + 1] = temp;   //大的元素到后一个位置
				hex[j] = s[j];
			}
		}
	}
	for (int k = 0; k < sizeof(hex); k++) {
		cout << hex[k];
	}
}