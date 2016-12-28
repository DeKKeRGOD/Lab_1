/*
Лабораторная работа №1
Задание 2.
Николаев Владимир
Группа: ИУ8-14
*/
#include <iostream>
#include <conio.h>
#include "stdafx.h"

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "rus");
        cout << "Определение формы фигуры";
	cout << "Введите x";
        cin >> x;
        switch ( x )
	{
        case (1):            
            printf("\tТочка\n");
            break;
        case (2):
            printf("\tОтрезок\n");
            break;
        case (3):
            printf("\tТреугольник\n");
            break;
        case (4):
            printf("\tКвадрат\n");
            break;
	case (5):            
            printf("\tПятиугольник\n");
            break;
        case (6):
            printf("\tШестиугольник\n");
            break;
        case (7):
            printf("\tСемиугольник\n");
            break;
        case (8):
            printf("\tВосьмиугольник\n");
            break;
        default:
            printf("\tНеверное значение\n");
    }
    getchar();
    return 0;
}
