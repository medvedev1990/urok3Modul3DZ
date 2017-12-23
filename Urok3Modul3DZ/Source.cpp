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
		cout << "������� ����� �������" << endl;
		cin >> N;
		switch (N)
		{
		case 1:
		{
			/*1.	������������ ������ ��� �����. ����������, ����� �� ��� �����, � ���� ���, ������� �� �� ����� � ������� �����������.*/
			int a, b;
			cout << "������� ������ �����" << endl;
			cin >> a;
			cout << "������� ������ �����" << endl;
			cin >> b;
			if (a == b)
				cout << "����� a � b �����" << endl;
			else if (a > b)
				cout << b << " " << a << endl;
			else
				cout << a << " " << b << endl;
		}
		break;
		case 2:
		{
			/*2.	������������ � ���������� ������ 5 ������ ��������. ����������, ������� �� ������� � ��������. ������� �������� ������, ���� ��� ������� ���� 4 ����� � ����*/
			int ocenka1, ocenka2, ocenka3, ocenka4, ocenka5;
			int i;
			cout << "������� ������ ������" << endl;
			cin >> ocenka1;
			cout << "������� ������ ������" << endl;
			cin >> ocenka2;
			cout << "������� ������ ������" << endl;
			cin >> ocenka3;
			cout << "������� ��������� ������" << endl;
			cin >> ocenka4;
			cout << "������� ����� ������" << endl;
			cin >> ocenka5;
			float summ = (ocenka1 + ocenka2 + ocenka3 + ocenka4 + ocenka5) / 5;
			if (summ >= 4)
				cout << "�� �������� ��� ���� : "<<summ << endl;
			else
				cout << "�� �� �������� ��� ���� : " <<summ<< endl;
		}
		break;
		case 3:
		{
			int ocenka1, ocenka2, ocenka3, ocenka4, ocenka5;
			int i;
			cout << "������� ������ ������" << endl;
			cin >> ocenka1;
			cout << "������� ������ ������" << endl;
			cin >> ocenka2;
			cout << "������� ������ ������" << endl;
			cin >> ocenka3;
			cout << "������� ��������� ������" << endl;
			cin >> ocenka4;
			cout << "������� ����� ������" << endl;
			cin >> ocenka5;
			float summ = (ocenka1 + ocenka2 + ocenka3 + ocenka4 + ocenka5) / 5;
			if (summ >= 4)
				cout << "�� �������� ��� ���� : " << summ << endl;
			else
				cout << "�� �� �������� ��� ���� : " << summ << endl;
		}
		break;
		case 4:
		{
		/*4.	�������� ���������-�����������.
		������������ ������ ��� ����� � �������� �������������� ��������. ������� �� ����� ���������*/
			int a, b;
			float deystvie;
			cout << "������� ������ �����" << endl;
			cin >> a;
			cout << "�������� �������� 1 -; 2 +; 3 *; 4 /;" << endl;
			cin >> deystvie;
			cout << "������� ������ �����" << endl;
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
			cout << "0 = ������\t8 = �����\n";
			cout << "1 = �����\t9 = ������ - �����\n";
			cout << "2 = �������\tA = ������ - �������\n";
			cout << "3 = �������\tB = ������ - �������\n";
			cout << "4 = �������\tC = ������ - �������\n";
			cout << "5 = �������\tD = ������ - �������\n";
			cout << "6 = ������\tE = ������ - ������\n";
			cout << "7 = �����\tF = ���� - �����\n\n";
			cout << "������� ���� ����: ";
			cin >> color[6];
			cout << "������� ���� ������: ";
			cin >> color[7];
			if (((color[6] < 'a') || (color[6] > 'f')) && ((color[6] < '0') || (color[6] > '9')))
				cout << "�� ����� ������ ���� ����" << endl;
			else if (((color[7] < 'a') || (color[7] > 'f')) && ((color[7] < '0') || (color[7] > '9')))
				cout << "�� ����� ������ ���� ������" << endl;
			else
				system(color);
		}
		break;
		case 6:
		{
			/*6.	�������� ���������, 
			������� �� ������ ������������ �������� ��������� �� ����� � ������� �� ������� �� ������� ������������*/
			int a, b, c;
			cout << "������� �����" << endl;
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
			
			cout << "������� ������ ���� � ������ ���������?" << endl;
				cin >> a;
			cout << "������� ����� ���� �� ������ ���������?" << endl;
				cin >> b;
			cout << "������� ����� ���� � ������ ���������?" << endl;
				cin >> c;
				d = a + b + c ;
				f = d % 3;
				if (f != 0)
					cout << "����������� ���������� �� ��������" << endl;
				else
				{
					if ((a > b) && (b > c))
						cout << "����� ���������� " << a - b << " ����������" << endl;
					else if ((a > c) && (c > b))
						cout <<"����� ���������� " << a - c << " ����������" << endl;
					else if ((b > a) && (a > c))
						cout << "����� ���������� " << b - a << " ����������" << endl;
					else if ((b > c) && (c > a))
						cout << "����� ���������� " << b - c << " ����������" << endl;
					else if ((c > a) && (a > b))
						cout << "����� ���������� " << c - a << " ����������" << endl;
					else if ((c > b) && (b > c))
						cout << "����� ���������� " << c - b << " ����������" << endl;
				}


		}
		break;
		default:
			break;
		}
		cout << "�� ������� ���������� �������� �������? 1-�� 2-���" << endl;
		cin >> y;
	}
	while (y == 1);
}