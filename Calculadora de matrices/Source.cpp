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
	int x;
	int y;
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
	int gox=20;//
	int goy=8;//
	cout << "Seleccione una opcion: ";
	cin >> op;
	switch (op) {
	case '1':
		cout << "filas= ";
		cin >> num->x;
		cout << "columnas= ";
		cin >> num->y;
		cout << "" << endl;
		if ((num->x <= 10) && (num->y <= 10)) {
			for (int i = 0; i < num->x; i++) {
				for (int j = 0; j < num->y; j++) {
					cout << "[" << i << "]" << "[" << j << "]= ";
					cin >> m1[i][j];
				}
			}
		}
		else {
			cout << "Tamaño invalido" << endl;
		}
		suma();
		break;

	case '2':
		cout << "filas= ";
		cin >> num->x;
		cout << "columnas= ";
		cin >> num->y;
		cout << "" << endl;
		if ((num->x <= 10) && (num->y <= 10)) {
			for (int i = 0; i < num->x; i++) {
				for (int j = 0; j < num->y; j++) {
					cout << "[" << i << "]" << "[" << j << "]= ";
					cin >> m2[i][j];
				}
			}
		}
		else {
			cout << "Tamaño invalido" << endl;
		}
		suma();
		break;

	case '3':
		for (int i = 0; i < num->x; i++) {
			cout << "\n";
			for (int j = 0; j < num->y; j++) {
				cout << "[" << m1[i][j] << "]" << " ";
			}
		}
		cout << "\n+";
		for (int i = 0; i < num->x; i++) {
			cout << "\n";
			for (int j = 0; j < num->y; j++) {
				cout << "[" << m2[i][j] << "]" << " ";
			}
		}
		cout << "\n=";
		for (int i = 0; i < num->x; i++) {
			cout << "\n";
			for (int j = 0; j < num->y; j++) {
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
	int gox = 20;//
	int goy = 8;//
	cout << "Seleccione una opcion: ";
	cin >> op;
	switch (op) {
	case '1':
		cout << "filas= ";
		cin >> num->x;
		cout << "columnas= ";
		cin >> num->y;
		cout << "" << endl;
		if ((num->x <= 10) && (num->y <= 10)) {
			for (int i = 0; i < num->x; i++) {
				for (int j = 0; j < num->y; j++) {
					cout << "[" << i << "]" << "[" << j << "]= ";
					cin >> m1[i][j];
				}
			}
		}
		else {
			cout << "Tamaño invalido" << endl;
		}
		resta();
		break;

	case '2':
		cout << "filas= ";
		cin >> num->x;
		cout << "columnas= ";
		cin >> num->y;
		cout << "" << endl;
		if ((num->x <= 10) && (num->y <= 10)) {
			for (int i = 0; i < num->x; i++) {
				for (int j = 0; j < num->y; j++) {
					cout << "[" << i << "]" << "[" << j << "]= ";
					cin >> m2[i][j];
				}
			}
		}
		else {
			cout << "Tamaño invalido" << endl;
		}
		resta();
		break;

	case '3':
		for (int i = 0; i < num->x; i++) {
			cout << "\n";
			for (int j = 0; j < num->y; j++) {
				cout << "[" << m1[i][j] << "]" << " ";
			}
		}
		cout << "\n-";
		for (int i = 0; i < num->x; i++) {
			cout << "\n";
			for (int j = 0; j < num->y; j++) {
				cout << "[" << m2[i][j] << "]" << " ";
			}
		}
		cout << "\n=";
		for (int i = 0; i < num->x; i++) {
			cout << "\n";
			for (int j = 0; j < num->y; j++) {
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

}