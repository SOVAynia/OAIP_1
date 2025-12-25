﻿#include <iostream>
#include <cmath>
using namespace std;

// e^-x-cosx+sin2xy

int main()
{
	double x, y;

	cout << "Введите x:";
	cin >> x;
	cout << "Введите Y:";
	cin >> y;
	double otvet = exp(-x) - cos(x) + sin(2 * x * y); 
	cout << "Ответ: " << otvet << endl;
	return 0;
}