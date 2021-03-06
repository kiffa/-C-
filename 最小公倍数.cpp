// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//问题描述
//编写一函数lcm，求两个正整数的最小公倍数。
//样例输入
//一个满足题目要求的输入范例。
//例：
//(a,b)[a,b]=ab 最小公倍数 = a,b乘积/最大公因数

//3 5
//样例输出
//与上面的样例输入对应的输出。
//例：
//

#include "pch.h"
#include <iostream>
using namespace std;

//使用辗转相除法求解最大公约数
int gcd(int x, int y)
{
	int z = y;
	while (x%y != 0)
	{
		z = x % y;
		x = y;
		y = z;
	}
	return z;
}

//求解最小公倍数
int lcm(int x, int  y) {
	
	int r;
	r = gcd(x, y);
	return x * y / r;
}

int main()
{
	int x, y;
	cin >> x >> y;
	
	int rs = lcm(x, y);
	cout << rs;
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
