#include <cmath>
#include <iostream>
void main() {
	using namespace std;
	setlocale(LC_ALL, "Russian");
	double a, b, d;  // ������������ ����������
	short c;   //����� ��������
	short f; // �������� ���������
	int e = 1; //���������� � �������
	int g = -1; //���������� � �������
	double h;  //���������� � �������
	do {
		do {
			cout << ("������� ����� ��������:") << endl;
			cout << ("1) C������� + ") << endl;
			cout << ("2) ��������� -") << endl;
			cout << ("3) ��������� *") << endl;
			cout << ("4) ������� /") << endl;
			cout << ("5) ���������� �� ��� �����") << endl;
			cout << ("6) ���������� � �������") << endl;
			cout << ("7) ������� ����������� ���������") << endl;
			cout << ("8) ������������������ �������") << endl;
			cout << ("9) �������� ������") << endl;
			cout << ("10) �������� ������� ���������\n");
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
			cout << ("������� ���������� ����") << endl;
			cin >> a;
			cout << ("������� ���������� ��������") << endl;
			cin >> b;
			int arrs;
		}
		else if (c == 8) {
			int nf;// ����� ��������
			double res;// ���������
			double vc;// �������� �����
			do {
				cout << ("�������� ������������������ �������:\n 1) sin\n 2) cos\n 3) tg\n 4) ctg\n");
				cin >> nf;
			} while (nf > 4 || nf < 1);
			if (nf == 1) {
				cout << ("������� �������\n");
				cin >> vc;
				res = sin(vc);
				cout << res << endl;
			}
			else if (nf == 2) {
				cout << ("������� �������\n");
				cin >> vc;
				res = cos(vc);
				cout << res << endl;
			}
			else if (nf == 3) {
				cout << ("������� �������\n");
				cin >> vc;
				res = tan(vc);
				cout << res << endl;
			}
			else if (nf == 4) {
				cout << ("������� �������\n");
				cin >> vc;
				res = 1 / tan(vc);
				cout << res << endl;
			}
		}
		else if (c == 7) {																				// ��������� ���������
			cout << ("������� ���������� ��������� ���� ax^2+bx+c = d") << endl;
			cout << ("������� a") << endl;
			cin >> (a);
			cout << ("������� b") << endl;
			cin >> (b);
			cout << ("������� c") << endl;
			double q;
			cin >> (q);
			cout << ("������� d") << endl;
			double w;
			cin >> (w);
			if (w != 0) {
				q = q - w;
			}
			double D;
			D = (b * b) - (4 * a * q);
			cout << ("D = ") << (D) << endl;
			if (D < 0) {
				cout << ("������ ���") << endl;
			}
			else if (D == 0) {
				double x;
				x = (-b) / 2 * a;
				cout << ("���� ������ x=") << x << endl;
			}
			else if (D > 0) {
				double S;
				S = sqrt(D);
				cout << ("������ �� D = ") << (S) << endl;
				double xf;
				xf = ((-b) + S) / 2 * a;
				double xs;
				xs = ((-b) - S) / 2 * a;
				cout << ("��� �����") << endl;
				cout << ("x1=") << xf << endl;
				cout << ("x2=") << xs << endl;
			}
		}
		else if (c == 5) {																	// ������
			cout << "������� ����� �� �������� ������ ������� ������" << endl;
			cin >> (a);
			d = sqrt(a);
			cout << ("�����:") << (d) << endl;
		}
		else if (c == 1) {
			cout << ("������� 2 �����") << endl;
			cin >> a >> b;
			d = a + b;
			cout << ("�����:") << (d) << endl;
		}
		else if (c == 2) {
			cout << ("������� 2 �����") << endl;
			cin >> a >> b;
			d = a - b;
			cout << ("�����:") << (d) << endl;
		}
		else if (c == 3) {
			cout << ("������� 2 �����") << endl;
			cin >> a >> b;
			d = a * b;
			cout << ("�����:") << (d) << endl;
		}
		else if (c == 4) {
			cout << ("������� 2 �����") << endl;
			cin >> a >> b;
			d = a / b;
			cout << ("�����:") << (d) << endl;
		}
		else if (c == 6) {													// ���������� � �������
			cout << ("������� �����") << endl;
			cin >> (a);
			h = d = a;
			cout << ("������� �������") << endl;
			cin >> (b);
			if (b == 0) { cout << ("�����:1") << endl; }
			if (b < 0) {
				while (b < g) { { h = h * a; b++; }
				}
				cout << ("�����:") << 1 / h << endl;
			}
			if (b > 0) {
				while (e < b) { d = d * a; e++; }
				cout << ("�����:") << d << endl;
			}
		}
		cout << ("������ ������� ���������? 1-�� 0-���") << endl;
		cin >> (f);
		while (f != 1 && f != 0) {
			cout << ("������ ������� ���������? 1-�� 0-���") << endl;
			cin >> (f);
		}
	} while (f == 0);
}