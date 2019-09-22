#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>


// -------------------------------- ПР 1

int DaysInYear(int year)  // ЗАДАНИЕ 1
{
	if (year % 4 == 0)
		if (year % 100 == 0 && year % 400 != 0)
			return 365;
		else
			return 366;
	else return 365;
}

void PR1_Task1()
{
	int year;
	printf("Введите год: ");
	scanf("%d", &year);
	printf("В %dг. %d дней.\n\n", year, DaysInYear(year));
}

void PR1_Task2()
{
	int x, y, z;

	printf("\nВведите x: ");
	scanf("%d", &x);

	printf("\nВведите y: ");
	scanf("%d", &y);

	printf("\nВведите z: ");
	scanf("%d", &z);

	int answer = x + y + z > z * y * z ? x + y + z : z * y * z;
	printf("\nОтвет: %d", answer);
}

void PR1_Task3()
{
	int N;
	printf("Введите N: ");
	scanf("%d", &N);

	int x;
	printf("Введите кол-во цифр в числе: ");
	scanf("%d", &x);

	int i = 0;

	while (!(N % 10)) 
	{
		i++;
		N /= 10;
	}

	printf("\n\n");
	if (i == x-1)
		printf("Число %d состоит из %d цифр", N, x);
	else 
	{
		printf("Число %d состоит не из %d цифр", N, x);
	}


}

// -------------------------------- ПР 2

void PR2_Task4() 
{
	int mounth;

	printf("Введите месяц: ");
	if (scanf("%d", &mounth) == 1) // проверка на ввод числа
	{
		switch (mounth)
		{
			case(1, 3, 5, 7, 8, 10, 12):
				printf("В месяце 31 день.");
				break;

			case(4, 6, 9, 11):
				printf("В месяце 30 дней.");
				break;

			case(2):
				printf("В месяце 28 дней.");
				break;

			default:
				printf("Введённое вами число не входит в допустимый диапозон.\n");
				printf("Введите число в диапозоне 1-12.\n");
				break;
		}
	}
	else 
	{
		printf("Некорректный ввод. Повторите попытку.");
	}

}

void PR2_Task15() 
{
	int N; // 6-14  ==> достоинство
	int M; // 1-4 ==> масть
	char name;

	printf("Введите достоинство карты (число 6-14): ");
	if (scanf("%d", &N) == 1)
	{
		if (N > 5 && N < 15)
		{
			printf("Введите масть (число 1-4): ");
			if (scanf("%d", &M) == 1)
			{
				if (M > 0 && M < 5)
				{
					// выводим достоинство карты
					switch (N)
					{
					case(6):
						printf("Шестёрка");
						break;

					case(7):
						printf("Семёрка");
						break;

					case(8):
						printf("Восьмёрка");
						break;

					case(9):
						printf("Девятка");
						break;

					case(10):
						printf("Десятка");
						break;

					case(11):
						printf("Валет");
						break;

					case(12):
						printf("Дама");
						break;

					case(13):
						printf("Король");
						break;

					case(14):
						printf("Туз");
						break;

					default:

						break;
					}

					// вывод масти
					switch (M)
					{
					case(1):
						printf(" пики");
						break;

					case(2):
						printf(" трефы");
						break;

					case(3):
						printf(" бубны");
						break;

					case(4):
						printf(" черви");
						break;

					}
				}
				else
				{
					printf("Введённое вами число не входит в допустимый диапозон.\n");
					printf("Введите число в диапозоне 1-4.\n");
				}
				
			}
			else
			{
				printf("Некорректный ввод. Повторите попытку.\n");
			}

		}
		else 
		{
			printf("Введённое вами число не входит в допустимый диапозон.\n");
			printf("Введите число в диапозоне 6-14.\n");
		}

	}
	else
	{
		printf("Некорректный ввод. Повторите попытку.\n");
	}

}

// -------------------------------- ПР 3

void PR3_Task1()
{
	int N, K, el, smaller = 0;

	printf("Введите N: ");
	scanf("%d", &N);

	printf("Введите K: ");
	scanf("%d", &K);

	printf("* * * * *  Ввод элементов * * * * * \n\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d> ", i + 1);
		scanf("%d", &el);

		if (el < K) smaller = 1;

	}
	printf("\n* * * * *  Конец ввода * * * * * \n\n");


	if (smaller) printf("True => в наборе есть число меньше %d", K);
	else printf("False => в наборе нет чисел меньше %d", K);

}

void PR3_TaskMinmax26()
{
	int N, i, ni, num = 0, maxnum = 0;

	printf("N:");
	scanf("%i", &N);
	for (i = 1; i <= N; ++i) 
	{
		printf("%i>", i);
		scanf("%i", &ni);

		if (ni % 2 == 0) num++;
		else 
		{
			if (num > maxnum) maxnum = num;
			num = 0;
		}
	}
	if (num > maxnum) maxnum = num;
	printf("%i\n", maxnum);
}

void PR3_TaskMinmax10()
{
	int i, N, ni, min, max, minn, maxn;
	printf("N:");
	scanf("%i", &N);
	for (i = 1; i <= N; ++i) 
	{
		printf("%i>", i);
		scanf("%i", &ni);

		if ((i == 1) || (ni < min)) 
		{
			min = ni;
			minn = i;
		}
		if ((i == 1) || (ni > max)) 
		{
			max = ni;
			maxn = i;
		}
	}
	printf("%i\n", minn < maxn ? minn : maxn);
}

void PR3_TaskWhile26() 
{
	int N;
	printf("N:");
	scanf("%i", &N);

	int f1 = 1, f2 = 1, f = 0;

	while (f < N) 
	{
		f = f2 + f1;
		f2 = f1;
		f1 = f;
	}

	printf("F_k-1=%i\nF_k+1=%i\n", f2, f1 + f2);
}

void PR3_TaskWhile10() 
{
	int N;
	printf("N: ");
	scanf("%i", &N);

	int k = 0, temp = 3;

	while (temp < N) 
	{
		temp *= 3;
		++k;
	}
	printf("K: %i\n", k);
}

// -------------------------------- ПР 4

void PR4_Task1()
{
	int n;
	printf("Введите n: ");
	
	if (scanf("%d", &n) == 1 && n > 0)
	{
		for (int i = 0; n > 0; i++, n--)
		{
			int j = i;
			while (j > 0)
			{
				printf("  ");
				j--;

			}

			int m = n;
			if (i % 2 == 1)
			{
				while (m > 0)
				{
					printf("2 ");
					m--;
				}

			}
			else
			{
				while (m > 0)
				{
					printf("1 ");
					m--;
				}

			}

			printf("\n");
		}

	}
	else printf("ОШИБКА! Введено некорректное значение! ");

}

void PR4_Task2()
{
	int n;
	printf("Введите n: ");
	
	if (scanf("%d", &n) == 1 && n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			int j = i;
			while (j < i + 6)
			{
				printf("%d ", j + 1);

				j++;
			}

			printf("\n");
		}

	}
	else printf("ОШИБКА! Введено некорректное значение! ");
}



int main()
{
	setlocale(LC_ALL, "rus");





	printf("\n\n");
	return 0;
}
