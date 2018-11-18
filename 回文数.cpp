//问题描述
//1221是一个非常特殊的数，它从左边读和从右边读是一样的，编程求所有这样的四位十进制数。
//输出格式
//按从小到大的顺序输出满足条件的四位十进制数。

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	//这种四位数abcd满足a = d != 0, b = c, 枚举即可.
	//a, b分别从小到大枚举能够使得之后输出的数一定大于之前输出的数
	for (int a = 1; a < 10; ++a)//千位
		for (int b = 0; b < 10; ++b)//百位
			cout << a * 1000 + b * 100 + b * 10 + a << endl;
	return 0;
}