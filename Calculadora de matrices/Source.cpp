#include<iostream>
#include<conio.h>
#include<windows.h>
#include<math.h>
using namespace std;
int gotoxy(int x, int y)
{
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
	return 0;
}
void menu();
void suma();
void resta();
void multiplicacion();
struct datos {
	int x1;
	int y1;
	int x2;
	int y2;
	int n;
};
datos num[100];
float m1[10][10];
float m2[10][10];
float m3[10][10];
char op;
void main() {
	locale::global(locale("spanish"));
	menu();
}
void menu() {
	system("cls");
	cout << "-------Menu--------" << endl;
	cout << "1.Suma de matrices" << endl;
	cout << "2.Resta de matrices" << endl;
	cout << "3.Multiplicacion de matrices" << endl;
	cout << "4.Salir" << endl;
	cout << "Seleccione una opcion: ";
	cin >> op;
	switch (op) {
	case '1':
		suma();
		break;
	case '2':
		resta();
		break;
	case '3':
		multiplicacion();
		break;
	case '4':
		break;
	default:
		break;
	}

}
void suma() {
	system("cls");
	cout << "-----Suma-----" << endl;
	cout << "Ingrese la longitud de la matriz" << endl;
	cout << "1.Matriz 1°" << endl;
	cout << "2.Matriz 2°" << endl;
	cout << "3.Mostrar resultados" << endl;
	cout << "4.Salir" << endl;
	cout << "Seleccione una opcion: ";
	cin >> op;
	switch (op) {
	case '1':
		cout << "filas= ";
		cin >> num->x1;
		cout << "columnas= ";
		cin >> num->y1;
		cout << "" << endl;
		if ((num->x1 <= 10) && (num->y1 <= 10)) {
			for (int i = 0; i < num->x1; i++) {
				for (int j = 0; j < num->y1; j++) {
					cout << "[" << i << "]" << "[" << j << "]= ";
					cin >> m1[i][j];
				}
			}
		}
		else {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			cout << "Tamaño invalido." << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			system("pause");
		}
		suma();
		break;

	case '2':
		cout << "filas= ";
		cin >> num->x2;
		cout << "columnas= ";
		cin >> num->y2;
		cout << "" << endl;
		if((num->x2==num->x1)&& (num->y2 == num->y1)){
			if ((num->x2 <= 10) && (num->y2 <= 10)) {
				for (int i = 0; i < num->x2; i++) {
					for (int j = 0; j < num->y2; j++) {
						cout << "[" << i << "]" << "[" << j << "]= ";
							cin >> m2[i][j];
					}
				}
			}
		}
		else {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			cout << "La matriz 2 debe de ser del mismo tamaño que la 1." << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			system("pause");
		}
		suma();
		break;

	case '3':
		for (int i = 0; i < num->x1; i++) {
			cout << "\n";
			for (int j = 0; j < num->y1; j++) {
				cout << "[" << m1[i][j] << "]" << " ";
			}
		}
		cout << "\n+";
		for (int i = 0; i < num->x1; i++) {
			cout << "\n";
			for (int j = 0; j < num->y1; j++) {
				cout << "[" << m2[i][j] << "]" << " ";
			}
		}
		cout << "\n=";
		for (int i = 0; i < num->x1; i++) {
			cout << "\n";
			for (int j = 0; j < num->y1; j++) {
				m3[i][j] = m1[i][j] + m2[i][j];
				cout << "[" << m3[i][j] << "]" << " ";
			}
		}
		cout << "\n" << endl;
		system("pause");
		suma();
		break;

	case '4':
		menu();
		break;
	}

}
void resta() {
	system("cls");
	cout << "-----Resta-----" << endl;
	cout << "Ingrese la longitud de la matriz" << endl;
	cout << "1.Matriz 1°" << endl;
	cout << "2.Matriz 2°" << endl;
	cout << "3.Mostrar resultados" << endl;
	cout << "4.Salir" << endl;
	cout << "Seleccione una opcion: ";
	cin >> op;
	switch (op) {
	case '1':
		cout << "filas= ";
		cin >> num->x1;
		cout << "columnas= ";
		cin >> num->y1;
		cout << "" << endl;
		if ((num->x1 <= 10) && (num->y1 <= 10)) {
			for (int i = 0; i < num->x1; i++) {
				for (int j = 0; j < num->y1; j++) {
					cout << "[" << i << "]" << "[" << j << "]= ";
					cin >> m1[i][j];
				}
			}
		}
		else {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			cout << "Tamaño invalido." << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			system("pause");
		}
		resta();
		break;

	case '2':
		cout << "filas= ";
		cin >> num->x2;
		cout << "columnas= ";
		cin >> num->y2;
		cout << "" << endl;
		if ((num->x2 == num->x1) && (num->y2 == num->y1)) {
			if ((num->x2 <= 10) && (num->y2 <= 10)) {
				for (int i = 0; i < num->x2; i++) {
					for (int j = 0; j < num->y2; j++) {
						cout << "[" << i << "]" << "[" << j << "]= ";
						cin >> m2[i][j];
					}
				}
			}
		}
		else {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			cout << "La matriz 2 debe de ser del mismo tamaño que la 1." << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			system("pause");
		}
		resta();
		break;

	case '3':
		for (int i = 0; i < num->x1; i++) {
			cout << "\n";
			for (int j = 0; j < num->y1; j++) {
				cout << "[" << m1[i][j] << "]" << " ";
			}
		}
		cout << "\n-";
		for (int i = 0; i < num->x1; i++) {
			cout << "\n";
			for (int j = 0; j < num->y1; j++) {
				cout << "[" << m2[i][j] << "]" << " ";
			}
		}
		cout << "\n=";
		for (int i = 0; i < num->x1; i++) {
			cout << "\n";
			for (int j = 0; j < num->y1; j++) {
				m3[i][j] = m1[i][j] - m2[i][j];
				cout << "[" << m3[i][j] << "]" << " ";
			}
		}
		cout << "\n" << endl;
		system("pause");
		resta();
		break;

	case '4':
		menu();
		break;
	}

}
void multiplicacion() {
	system("cls");
	cout << "-----Multiplicación-----" << endl;
	cout << "Ingrese la longitud de la matriz" << endl;
	cout << "1.Matriz 1°" << endl;
	cout << "2.Matriz 2°" << endl;
	cout << "3.Mostrar resultados" << endl;
	cout << "4.Salir" << endl;
	cout << "Seleccione una opcion: ";
	cin >> op;
	int m = num->x1;
	int n = num->y1;
	int p = num->y2;
	switch (op) {
	case '1':
		cout << "filas= ";
		cin >> num->x1;
		cout << "columnas= ";
		cin >> num->y1;
		cout << "" << endl;
		if ((num->x1 <= 10) && (num->y1 <= 10)) {
			for (int i = 0; i < num->x1; i++) {
				for (int j = 0; j < num->y1; j++) {
					cout << "[" << i << "]" << "[" << j << "]= ";
					cin >> m1[i][j];
				}
			}
		}
		else {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			cout << "Tamaño invalido." << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			system("pause");
		}
		multiplicacion();
		break;

	case '2':
		cout << "filas= ";
		cin >> num->x2;
		cout << "columnas= ";
		cin >> num->y2;
		cout << "" << endl;
		if (num->y1 == num->x2) {
			if ((num->x2 <= 10) && (num->y2 <= 10)) {
				for (int i = 0; i < num->x2; i++) {
					for (int j = 0; j < num->y2; j++) {
						cout << "[" << i << "]" << "[" << j << "]= ";
						cin >> m2[i][j];
					}
				}
			}
		}
		else {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
			cout << "La y de la matriz 1 debe de ser igual a la x de la matriz 2." << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			system("pause");
		}
		multiplicacion();
		break;

	case '3':
		for (int i = 0; i < num->x1; i++) {
			cout << "\n";
			for (int j = 0; j < num->y1; j++) {
				cout << "[" << m1[i][j] << "]" << " ";
			}
		}
		cout << "\n*";
		for (int i = 0; i < num->x1; i++) {
			cout << "\n";
			for (int j = 0; j < num->y1; j++) {
				cout << "[" << m2[i][j] << "]" << " ";
			}
		}
		cout << "\n=";
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < p; j++) {
				for (int k = 0; k < n; k++) {
					m3[i][j] += m1[i][k] * m2[k][j];
				}
			}
		}
		for (int i = 0; i < m; ++i)
		{
			cout << "\n";
			for (int j = 0; j < p; ++j)
			{
				cout << "[" << m3[i][j] << "]" << " ";
			}
		}

		cout << "\n" << endl;
		system("pause");
		multiplicacion();
		break;

	case '4':
		menu();
		break;
	}

}
