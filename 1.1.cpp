/* 
Лабораторная работа №1
Задание 1: Расчет значения Y при вводимом X
Николаев Владимир
Группа: ИУ8-14
*/
#include <iostream>
#include <conio.h>
#include <math.h>


using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");

	double x;//x-вводимое пользователем целое значение переменной х
	long double y;//у-вычисляемое программой значение переменной y
	cout << endl << "\tПрограмма считает значение у по заданному х по формуле:" << endl;
	cout << endl << "\ty = sqrt(2*x^2 + 5*x + 1) / (x - 5)" << endl;
	cout << endl << "\tВведите х=";
	cin >> x;
	if (x == 5)
		cout << endl << "\t\tВведённый х не входит в область допустимых значений(ОДЗ)!" << endl;
	else
	{
		//Вычисление значение переменной у
		y = sqrt(2*pow(x, 2) + 5 * x + 1) / (x - 5);
		cout << endl << "\t\ty=" << y << endl;
	}
	cout << endl << "\tНажмите любую клавишу для выхода из программы" << endl;
	_getch();
	return 0;
}
