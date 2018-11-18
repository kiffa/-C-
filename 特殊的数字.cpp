//问题描述
//153是一个非常特殊的数，它等于它的每位数字的立方和，即153 = 1 * 1 * 1 + 5 * 5 * 5 + 3 * 3 * 3。编程求所有满足这种条件的三位十进制数。
//输出格式
//按从小到大的顺序输出满足条件的三位十进制数，每个数占一行。
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