#include <cmath>
#include <iostream>
void main() {
	using namespace std;
	setlocale(LC_ALL, "Russian");
	double a, b, d;  // Стандарнтные переменные
	short c;   //Номер действия
	short f; // Закрытие программы
	int e = 1; //Возведение в степень
	int g = -1; //Возведение в степень
	double h;  //Возведение в степень
	do {
		do {
			cout << ("Введите номер операции:") << endl;
			cout << ("1) Cложение + ") << endl;
			cout << ("2) Вычитание -") << endl;
			cout << ("3) Умножение *") << endl;
			cout << ("4) Деление /") << endl;
			cout << ("5) Извлечений из под корня") << endl;
			cout << ("6) Возведение в степень") << endl;
			cout << ("7) Решение квадратного уравнения") << endl;
			cout << ("8) Тригонометрическая функция") << endl;
			cout << ("9) Создание таблцы") << endl;
			cout << ("10) Показать таблицу квадратов\n");
			cin >> (c);
		} while (c > 10 || c < 1);
		if (c == 10) {
			cin >> a;
			cin >> b;
			double p = a * b;
			int** tabl = new int* [a];
			for (int i = 0; i < a; i++)
			{
				tabl[i] = new int[b];
				cout << tabl[i];
			}

			delete[] tabl;
		}
		else if (c == 9) {
			cout << ("Введите количесвто срок") << endl;
			cin >> a;
			cout << ("Введите количество столбцов") << endl;
			cin >> b;
			int arrs;
		}
		else if (c == 8) {
			int nf;// Номер действия
			double res;// Результат
			double vc;// Введённое число
			do {
				cout << ("Выберите тригономитрическую функцию:\n 1) sin\n 2) cos\n 3) tg\n 4) ctg\n");
				cin >> nf;
			} while (nf > 4 || nf < 1);
			if (nf == 1) {
				cout << ("Введите радиану\n");
				cin >> vc;
				res = sin(vc);
				cout << res << endl;
			}
			else if (nf == 2) {
				cout << ("Введите радиану\n");
				cin >> vc;
				res = cos(vc);
				cout << res << endl;
			}
			else if (nf == 3) {
				cout << ("Введите радиану\n");
				cin >> vc;
				res = tan(vc);
				cout << res << endl;
			}
			else if (nf == 4) {
				cout << ("Введите радиану\n");
				cin >> vc;
				res = 1 / tan(vc);
				cout << res << endl;
			}
		}
		else if (c == 7) {																				// Квадатное уравнение
			cout << ("Введите квадратное уравнение вида ax^2+bx+c = d") << endl;
			cout << ("Введите a") << endl;
			cin >> (a);
			cout << ("Введите b") << endl;
			cin >> (b);
			cout << ("Введите c") << endl;
			double q;
			cin >> (q);
			cout << ("введите d") << endl;
			double w;
			cin >> (w);
			if (w != 0) {
				q = q - w;
			}
			double D;
			D = (b * b) - (4 * a * q);
			cout << ("D = ") << (D) << endl;
			if (D < 0) {
				cout << ("Корней нет") << endl;
			}
			else if (D == 0) {
				double x;
				x = (-b) / 2 * a;
				cout << ("Один корень x=") << x << endl;
			}
			else if (D > 0) {
				double S;
				S = sqrt(D);
				cout << ("Корень из D = ") << (S) << endl;
				double xf;
				xf = ((-b) + S) / 2 * a;
				double xs;
				xs = ((-b) - S) / 2 * a;
				cout << ("Два корня") << endl;
				cout << ("x1=") << xf << endl;
				cout << ("x2=") << xs << endl;
			}
		}
		else if (c == 5) {																	// Корень
			cout << "Введите число из которого хотите извлечь корень" << endl;
			cin >> (a);
			d = sqrt(a);
			cout << ("Ответ:") << (d) << endl;
		}
		else if (c == 1) {
			cout << ("Введите 2 числа") << endl;
			cin >> a >> b;
			d = a + b;
			cout << ("Ответ:") << (d) << endl;
		}
		else if (c == 2) {
			cout << ("Введите 2 числа") << endl;
			cin >> a >> b;
			d = a - b;
			cout << ("Ответ:") << (d) << endl;
		}
		else if (c == 3) {
			cout << ("Введите 2 числа") << endl;
			cin >> a >> b;
			d = a * b;
			cout << ("Ответ:") << (d) << endl;
		}
		else if (c == 4) {
			cout << ("Введите 2 числа") << endl;
			cin >> a >> b;
			d = a / b;
			cout << ("Ответ:") << (d) << endl;
		}
		else if (c == 6) {													// возведение в степень
			cout << ("Введите число") << endl;
			cin >> (a);
			h = d = a;
			cout << ("Введите степень") << endl;
			cin >> (b);
			if (b == 0) { cout << ("Ответ:1") << endl; }
			if (b < 0) {
				while (b < g) { { h = h * a; b++; }
				}
				cout << ("Ответ:") << 1 / h << endl;
			}
			if (b > 0) {
				while (e < b) { d = d * a; e++; }
				cout << ("Ответ:") << d << endl;
			}
		}
		cout << ("Хотите закрыть программу? 1-Да 0-Нет") << endl;
		cin >> (f);
		while (f != 1 && f != 0) {
			cout << ("Хотите закрыть программу? 1-Да 0-Нет") << endl;
			cin >> (f);
		}
	} while (f == 0);
}