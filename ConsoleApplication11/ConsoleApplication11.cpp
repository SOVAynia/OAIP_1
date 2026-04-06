﻿#include <iostream> // используемые библиотеки
#include <cmath> // Использовал библиотеку cmath
using namespace std;
// e^-x-cosx+sin2xy
int main()
{
	double x, y;  // Переменные x и y с плавующей запятой
// пустая строка
	cout << "Введите x:";	//Ввод чисела
	cin >> x;				// Чтение числа
	cout << "Введите Y:";	// Ввод чисела
	cin >> y;				// Чтение числа 
	double otvet = exp(-x) - cos(x) + sin(2 * x * y); // Вычисление примера по формуле
	cout << "Ответ: " << otvet << endl; // вывод ответа 
	return 0;
}
