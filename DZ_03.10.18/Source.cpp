#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int oper(char o, int n, ...)
{
	int *p = &n;
	int sum = 0;
	int prod = 1;
	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		if (o == 's' || o == '+')
		{
			sum += p[i];
			count++;
		}
		else if (o == '*')
			prod *= p[i];
	}
	if (o == '+')
		return sum;
	else if (o == 's')
		return ((sum) / count);
	else if (o == '*')
		return prod;
}

void main()
{
	setlocale(LC_ALL, "Rus");
	int n = 0;
	cout << "Введите номер задания: ";
	cin >> n;
	if (n == 1)
	{
		cout << "Напишите функцию, с переменным количеством аргументов, которая в качестве обязательного параметра принимает тип действия и количество переменных и выполняет выбранное действие над этими переменными. «+» - сложение, «*» - умножение, «s» - среднее арифметическое" << endl;
		cout << oper('*', 5, 1, 4, 5, 1, 1,20) << endl;
	}
	else if (n == 2)
	{
		cout << "Дано целое число N (> 0) и строка S. Преобразовать строку S в строку длины N следующим образом : если длина строки S больше N, то отбросить первые символы, если длина строки S меньше N, то в ее начало добавить символы «.»(точка)" << endl;
		char s[5] = {"ABCD"};
		int n;
		cout << "Введите n = ";
		cin >> n;
		if (strlen(s) > n)
		{
			int k = strlen(s) - n;
			for (int i = k; i< strlen(s); i++) {
				cout << s[i];
			}
		}
		else if (strlen(s) < n)
		{
			int k = n - strlen(s);
			for (int i = 0, j = 0; i<strlen(s) + k; i++)
			{
				if (i<k) 
					cout << ".";
				else
				{
					cout << s[j];
					j++;
				}
			}
		}
	}
	else if (n == 3)
	{
		cout << "Даны целые положительные числа N1 и N2 и строки S1 и S2. Получить из этих строк новую строку, содержащую первые N1 символов строки S1 и последние N2 символов строки S2 (в указанном порядке)." << endl;
		const int n = 100;
		char s1[n] = {"Hellow world"};
		char s2[n] = {"My test example"};
		char s[2 * n];
		int n1, n2;
		int size_s2 = strlen(s2);
		cout << "Введите целые положительные числа: n1 и n2 = ";
		cin >> n1 >> n2;
		strncpy(s, s1, n1);
		s[n1] = '\0';
		char* p = s2;
		p += size_s2 - n2;
		strcat(s, p);
		cout << s << endl;
	}
	system("pause");
}