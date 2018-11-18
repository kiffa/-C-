//问题描述
//Fibonacci数列的递推公式为：Fn = Fn - 1 + Fn - 2，其中F1 = F2 = 1。
//
//当n比较大时，Fn也非常大，现在我们想知道，Fn除以10007的余数是多少。
//
//输入格式
//输入包含一个整数n。(10)
//输出格式 (55)
//输出一行，包含一个整数，表示Fn除以10007的余数。
//说明：在本题中，答案是要求Fn除以10007的余数，因此我们只要能算出这个余数即可，而不需要先计算出Fn的准确值，
//再将计算的结果除以10007取余数，直接计算余数往往比先算出原数再取余简单。
//tips:使用数组来保存F序列，只保存除10007的余数。
#include "pch.h"
#include<iostream>
using namespace std;

//使用函数循环计算斐波拉契数列，根据题目，对每一个fn-1和fn-2都取余数，再对和取余数
int Fibonacci(int n) {
	int a = 1, b = 1;
	int c = 0;
	if (n <= 2) {
		return a;
	}
	for (int i = 3; i<=n; ++i) {
		c = a%10007 + b%10007;
		a = b;
		b = c;

	}
	return c%10007;
}

int main() {
	int n;
	cin >> n;
	int rs = Fibonacci(n);
	cout << rs;
	return 0;
}