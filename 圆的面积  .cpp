#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
#define PI 3.14159265358979323

double CirclueSquare(double r) {
	double square = PI * r*r;
	return square;
}

int main() {
	double r;
	cin >> r;
	double s = CirclueSquare(r);
	cout <<setiosflags(ios::fixed)<<setprecision (7)<< s;
}