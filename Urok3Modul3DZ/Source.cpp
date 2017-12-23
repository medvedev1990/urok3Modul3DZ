#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<math.h>

using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	cout.precision(2);
	short int N;
	int short y;
	float f;
	do
	{
		cout << "введите номер задания" << endl;
		cin >> N;
		switch (N)
		{
		case 1:
		{
			/*1.	Пользователь вводит два числа. Определить, равны ли эти числа, и если нет, вывести их на экран в порядке возрастания.*/
			int a, b;
			cout << "введите первое число" << endl;
			cin >> a;
			cout << "введите второе число" << endl;
			cin >> b;
			if (a == b)
				cout << "числа a и b равны" << endl;
			else if (a > b)
				cout << b << " " << a << endl;
			else
				cout << a << " " << b << endl;
		}
		break;
		case 2:
		{
			/*2.	Пользователь с клавиатуры вводит 5 оценок студента. Определить, допущен ли студент к экзамену. Студент получает допуск, если его средний балл 4 балла и выше*/
			int ocenka1, ocenka2, ocenka3, ocenka4, ocenka5;
			int i;
			cout << "введите первую оценку" << endl;
			cin >> ocenka1;
			cout << "введите вторую оценку" << endl;
			cin >> ocenka2;
			cout << "введите третью оценку" << endl;
			cin >> ocenka3;
			cout << "введите четвертую оценку" << endl;
			cin >> ocenka4;
			cout << "введите пятую оценку" << endl;
			cin >> ocenka5;
			float summ = (ocenka1 + ocenka2 + ocenka3 + ocenka4 + ocenka5) / 5;
			if (summ >= 4)
				cout << "вы допущены ваш балл : "<<summ << endl;
			else
				cout << "вы не допущены ваш балл : " <<summ<< endl;
		}
		break;
		case 3:
		{
			int ocenka1, ocenka2, ocenka3, ocenka4, ocenka5;
			int i;
			cout << "введите первую оценку" << endl;
			cin >> ocenka1;
			cout << "введите вторую оценку" << endl;
			cin >> ocenka2;
			cout << "введите третью оценку" << endl;
			cin >> ocenka3;
			cout << "введите четвертую оценку" << endl;
			cin >> ocenka4;
			cout << "введите пятую оценку" << endl;
			cin >> ocenka5;
			float summ = (ocenka1 + ocenka2 + ocenka3 + ocenka4 + ocenka5) / 5;
			if (summ >= 4)
				cout << "вы допущены ваш балл : " << summ << endl;
			else
				cout << "вы не допущены ваш балл : " << summ << endl;
		}
		break;
		case 4:
		{
		/*4.	Написать программу-калькулятор.
		Пользователь вводит два числа и выбирает арифметическое действие. Вывести на экран результат*/
			int a, b;
			float deystvie;
			cout << "введите первое число" << endl;
			cin >> a;
			cout << "выберите действие 1 -; 2 +; 3 *; 4 /;" << endl;
			cin >> deystvie;
			cout << "введите второе число" << endl;
			cin >> b;
			if (deystvie == 1)
				cout << "a - b = " << a - b << endl;
			else if (deystvie == 2)
				cout << "a + b = " << a + b << endl;
			else if (deystvie == 3)
				cout << "a * b = " << a*b << endl;
			else if (deystvie == 4)
				cout << "a / b = " << a / b << endl;
			else
				cout << "error" << endl;
		}
		break;
		case 5:
		{
			char text, fon;
			char color[9] = "color ";
			cout << "0 = Черный\t8 = Серый\n";
			cout << "1 = Синий\t9 = Светло - синий\n";
			cout << "2 = Зеленый\tA = Светло - зеленый\n";
			cout << "3 = Голубой\tB = Светло - голубой\n";
			cout << "4 = Красный\tC = Светло - красный\n";
			cout << "5 = Лиловый\tD = Светло - лиловый\n";
			cout << "6 = Желтый\tE = Светло - желтый\n";
			cout << "7 = Белый\tF = Ярко - белый\n\n";
			cout << "Введите цвет фона: ";
			cin >> color[6];
			cout << "Введите цвет текста: ";
			cin >> color[7];
			if (((color[6] < 'a') || (color[6] > 'f')) && ((color[6] < '0') || (color[6] > '9')))
				cout << "не верно введен цвет фона" << endl;
			else if (((color[7] < 'a') || (color[7] > 'f')) && ((color[7] < '0') || (color[7] > '9')))
				cout << "не верно введен цвет текста" << endl;
			else
				system(color);
		}
		break;
		case 6:
		{
			/*6.	Написать программу, 
			которая по выбору пользователя возводит введенное им число в степень от нулевой до седьмой включительно*/
			int a, b, c;
			cout << "введите число" << endl;
			cin >> a;
			for (b = 0;b <= 7;b++)
			{
				c = pow(a,b);
				cout << a << " ^ " << b << " = " << c << endl;
			}
		}
		break;
		case 7:
		{
			int a, b, c;
			int d;
			
			cout << "сколько люденй было в первой маршрутке?" << endl;
				cin >> a;
			cout << "сколько людей было во второй маршрутке?" << endl;
				cin >> b;
			cout << "сколько людей было в третье маршрутке?" << endl;
				cin >> c;
				d = a + b + c ;
				f = d % 3;
				if (f != 0)
					cout << "равномерная пеересадка не возможна" << endl;
				else
				{
					if ((a > b) && (b > c))
						cout << "нужно пересадить " << a - b << " пассажиров" << endl;
					else if ((a > c) && (c > b))
						cout <<"нужно пересадить " << a - c << " пассажиров" << endl;
					else if ((b > a) && (a > c))
						cout << "нужно пересадить " << b - a << " пассажиров" << endl;
					else if ((b > c) && (c > a))
						cout << "нужно пересадить " << b - c << " пассажиров" << endl;
					else if ((c > a) && (a > b))
						cout << "нужно пересадить " << c - a << " пассажиров" << endl;
					else if ((c > b) && (b > c))
						cout << "нужно пересадить " << c - b << " пассажиров" << endl;
				}


		}
		break;
		default:
			break;
		}
		cout << "Вы хоттите продолжить проверку заданий? 1-да 2-нет" << endl;
		cin >> y;
	}
	while (y == 1);
}