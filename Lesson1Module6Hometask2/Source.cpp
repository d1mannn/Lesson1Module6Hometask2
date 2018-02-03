#include <iostream>
#include <stdio.h>
#include <time.h>
#include <locale.h>
using namespace std;

int task;
int ShiftRight3(int *a, int *b, int *c);
int ShiftLeft3(int *a, int *b, int *c);
int IsLeapYear(int year);
int MonthDays(int month, int year);
void PreviousDate(int year, int month, int day);
void NextDay(int year, int month, int day);
void hyppo(double *a, double *b, double *c);
void length(double *x1, double *x2, double *y1, double *y2, double *length1, double *length2);
void f();
void Height(double *a, double *b, double *c, double *h, double *p);

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	do
	{
		cout << "Введите номер задания - ";
		cin >> task;
		switch (task)
		{
			case 1:
			{
				/*1.	Описать процедуру ShiftRight3(A, B, C), выполняющую правый циклический сдвиг :
				значение A переходит в B, значение B — в C, значение C — в A
				(A, B, C — вещественные параметры, являющиеся одновременно входными и выходными).
				С помощью этой процедуры выполнить правый циклический сдвиг для двух данных наборов из трех чисел :
				(A1, B1, C1) и(A2, B2, C2).*/
				int a, b, c;
				a = -10 + rand() % 20;
				cout << "a == " << a << endl;
				b = -10 + rand() % 20;
				cout << "b == " << b << endl;
				c = -10 + rand() % 20;
				cout << "c == " << c << endl;
				ShiftRight3(&a, &b, &c);
				cout << "ЗАМЕНА!!!" << endl;
				cout << "a == " << a << endl;
				cout << "b == " << b << endl;
				cout << "c == " << c << endl;
			} break;

			case 2:
			{
				/*2.	Описать процедуру ShiftLeft3(A, B, C), выполняющую левый циклический сдвиг
				: значение A переходит в C, значение C — в B, значение B — в A(A, B, C — вещественные параметры,
				являющиеся одновременно входными и выходными).С помощью этой процедуры выполнить
				левый циклический сдвиг для двух данных наборов из трех чисел : (A1, B1, C1) и(A2, B2, C2).*/
				int a, b, c;
				a = -10 + rand() % 20;
				cout << "a == " << a << endl;
				b = -10 + rand() % 20;
				cout << "b == " << b << endl;
				c = -10 + rand() % 20;
				cout << "c == " << c << endl;
				ShiftLeft3(&a, &b, &c);
				cout << "ЗАМЕНА!!!" << endl;
				cout << "a == " << a << endl;
				cout << "b == " << b << endl;
				cout << "c == " << c << endl;
			} break;

			case 3:
			{
				/*3.	Описать функцию IsLeapYear(Y) логического типа, которая возвращает True, если
				год Y(целое положительное число) является високосным, и False в противном случае.
				Вывести значение функции IsLeapYear для пяти данных значений параметра Y.
				Високосным считается год, делящийся на 4, за исключением тех годов, которые делятся на 100 и не делятся на 400.*/
				int year;
				cout << "Введите год - ";
				cin >> year;
				IsLeapYear(year);
				if (IsLeapYear(year) == 1)
					cout << "Високосный год!!!" << endl;
				else
					cout << "Невисокосный год!!" << endl;

			} break;

			case 4:
			{
				/*4.	Используя функцию IsLeapYear из задания 3, описать функцию MonthDays(M, Y) целого типа,
				которая возвращает количество дней для M - го месяца года Y(1 ≤ M ≤ 12, Y > 0 — целые числа).
				Вывести значение функции MonthDays для данного года Y и месяцев M1, M2, M3.*/
				int year, month;
				cout << "Введите год - ";
				cin >> year;
				cout << "Введите месяц - ";
				cin >> month;
				IsLeapYear(year);
				MonthDays(month, year);
				cout << "Дней в " << month << "-м месяце - " << MonthDays(month, year) << endl;

			} break;

			case 5:
			{
				/*5.	Используя функцию MonthDays из задания 4, описать процедуру PrevDate(D, M, Y),
				которая по информации о правильной дате, включаю - щей день D,
				номер месяца M и год Y, определяет предыдущую дату
				(пара - метры целого типа D, M, Y являются одновременно входными и выходными).
				Применить процедуру PrevDate к трем исходным датам и вывести полученные значения предыдущих дат*/
				int day, month, year;
				cout << "Введите год - ";
				cin >> year;
				cout << "Введите месяц - ";
				cin >> month;
				cout << "Введите дату - ";
				cin >> day;
				PreviousDate(year, month, day);

			} break;

			case 6:
			{
				/*6.	Используя функцию MonthDays из задания 4, описать процедуру NextDate(D, M, Y),
				которая по информации о правильной дате, включаю - щей день D, номер месяца M и год Y,
				определяет следующую дату(пара - метры целого типа D, M, Y являются одновременно входными и выходными).
				Применить процедуру NextDate к трем исходным датам и вывести полученные значения следующих дат*/
				int day, month, year;
				cout << "Введите год - ";
				cin >> year;
				cout << "Введите месяц - ";
				cin >> month;
				cout << "Введите дату - ";
				cin >> day;
				NextDay(year, month, day);
			} break;
			
			case 7:
			{
				/*7.	Используя функцию Dist из задания Proc59,
					описать процедуру Altitudes(xA, yA, xB, yB, xC, yC, hA, hB, hC), 
					находящую высоты hA, hB, hC треугольника ABC(выходные параметры), 
					проведенные соответственно из вершин A, B, C(их координаты являются входными параметрами).
					С помощью этой процедуры найти высоты треугольников ABC, ABD, ACD, 
					если даны координаты точек A, B, C, D.*/
				double a, b, c, h = 0, p = 0;
				a = 1 + rand() % 10;
				b = 1 + rand() % 10;
				c = 1 + rand() % 10;
				cout << "Длины сторон треугольника - " << a << "," << b << "," << c << endl;
				Height(&a, &b, &c, &h, &p);
				cout << "Высота треугольника = " << h << endl;


			} break;

			case 8:
			{
				/*8.	Определите функцию double f(double x, double y), 
					которая вычисляет и возвращает длину гипотенузы прямоугольного 
					треугольника, две другие стороны x и y которого известны*/
				double a, b, c = 0;
				cout << "Введите длину катета А - ";
				cin >> a;
				cout << "Введите длину катета B - ";
				cin >> b;
				hyppo(&a, &b, &c);
				cout << "Длина гипотенузы - " << c << endl;

			} break;

			case 9:
			{
				/*9.	Напишите функцию double f(double x1, double y1, double x2, double y2), 
					которая вычисляет расстояние между двумя точками(xl, yl) и(x2, y2)*/
				double x1, x2, y1, y2, length1 = 0, length2 = 0;
				x1 = 1 + rand() % 20;
				x2 = 1 + rand() % 20;
				y1 = 1 + rand() % 20;
				y2 = 1 + rand() % 20;
				length(&x1, &x2, &y1, &y2, &length1, &length2);
				cout << "Расстояние между точками " << x1 << " и " << x2 << " = " << length1 << endl;
				cout << "Расстояние между точками " << y1 << " и " << y2 << " = " << length2 << endl;
			} break;

			case 10:
			{
				/*10.	Напишите функцию int f(int m2, int m1, int m0), 
					которая вычисляет и возвращает натуральное число,
					первая(сотни), вторая(десятки) и третья(единицы) цифры
					которого равны соответственно m2, m1, m0*/
				f();
			} break;
		}
	} while (task > 0);
}

int ShiftRight3(int *a, int *b, int *c)
{
	int temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
	return 0;
}

int ShiftLeft3(int *a, int *b, int *c)
{
	int temp = *a;
	*a = *c;
	*c = *b;
	*b = temp;
	return 0;
}

int IsLeapYear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 1;
	else
		return 0;
}

int MonthDays(int month, int year)
{
	if (month == 4 || month == 6 || month == 9 || month == 11)
		return 30;
	else if (month == 2)
	{
		if (IsLeapYear(year) == 1)
			return 29;
		else
			return 28;
	}
	else
		return 31;
}

void PreviousDate(int year, int month, int day)
{

	if (day < 1 && day >31)
	{
		cout << "Введите правильную дату";
	}
	else if (day == 1)
	{
		if (day == 1 && month == 1)
			year = year - 1;

		if (month == 1)
			month = 12;
		else
			month = month - 1;
		day = MonthDays(month, year);
	}
	else
		day = day - 1;

	cout << "дата предыдущего дня: " << day << "." << month << "." << year << endl;
}

void NextDay(int year, int month, int day)
{

	if (day < 1 && day >31)
	{
		cout << "Введите правильную дату";
	}
	else if (day == 31 && month == 12)
	{
		year = year + 1;
		day = 1;
		month = 1;
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (day == 30)
		{
			day = 1;
			month = month + 1;
		}
		else
			day = day + 1;

	}
	else if (month == 2)
	{
		if (day == 28)
			if (IsLeapYear(year) == 1)
				day = 29;
			else
				day = 1;
		if (day == 29)
		{
			day = 1;
			month = month + 1;
		}
	}
	else
	{
		if (day == 31)
		{
			day = 1;
			month = month + 1;
		}
		else day = day + 1;

	}
	cout << "дата следующего дня: " << day << "." << month << "." << year << endl;
}

void hyppo(double *a, double *b, double *c)
{	
	*c = sqrt(pow(*a, 2) + pow(*b, 2));
}

void length(double *x1, double *x2, double *y1, double *y2, double *length1, double *length2)
{
	*length1 = abs(*x1 - *x2);
	*length2 = abs(*y1 - *y2);
}

void f()
{	
	srand(time(NULL));
	int m2 = 100 + rand() % 899;
	int m1 = 10 + rand() % 89;
	int m0 = 0 + rand() % 9;
	cout << m2 << "," << m1 << "," << m0 << endl;
	
}

void Height(double *a, double *b, double *c, double *h, double *p)
{
	*p = (*a + *b + *c) / 2;
	*h = 2 * sqrt((*p * (*p - *a) * (*p - *b) * (*p - *c)) / *a);
}