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
void vector();
void quaterniones();
void mc();
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
float v[10];
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
	cout << "4.Matriz por vector" << endl;
	cout << "5.Generación de nuevas coordenadas por quaterniones" << endl;
	cout << "6.Matriz Compuesta" << endl;
	cout << "7.Salir" << endl;
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
		vector();
		break;
	case '5':
		quaterniones();
		break;
	case '6':
		mc();
		break;
	case'7':
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
		cout << "\nM1";
		for (int i = 0; i < num->x1; i++) {
			cout << "\n";
			for (int j = 0; j < num->y1; j++) {
				cout << "[" << m1[i][j] << "]" << " ";
			}
		}
		cout << "\n+";
		cout << "\nM2";
		for (int i = 0; i < num->x1; i++) {
			cout << "\n";
			for (int j = 0; j < num->y1; j++) {
				cout << "[" << m2[i][j] << "]" << " ";
			}
		}
		cout << "\n=";
		cout << "\nM3";
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

	default:
		num->x1 = 0;
		num->y1 = 0;
		num->x2 = 0;
		num->y2 = 0;
		for (int i = 0; i < 10; ++i)
		{
			for (int j = 0; j < 10; ++j)
			{
				m1[i][j] = NULL;
				m2[i][j] = NULL;
				m3[i][j] = NULL;
			}
		}
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
		cout << "\nM1";
		for (int i = 0; i < num->x1; i++) {
			cout << "\n";
			for (int j = 0; j < num->y1; j++) {
				cout << "[" << m1[i][j] << "]" << " ";
			}
		}
		cout << "\n-";
		cout << "\nM2";
		for (int i = 0; i < num->x1; i++) {
			cout << "\n";
			for (int j = 0; j < num->y1; j++) {
				cout << "[" << m2[i][j] << "]" << " ";
			}
		}
		cout << "\n=";
		cout << "\nM3";
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

	default:
		num->x1 = 0;
		num->y1 = 0;
		num->x2 = 0;
		num->y2 = 0;
		for (int i = 0; i < 10; ++i)
		{
			for (int j = 0; j < 10; ++j)
			{
				m1[i][j] = NULL;
				m2[i][j] = NULL;
				m3[i][j] = NULL;
			}
		}
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
	int k = num->x1;
	int m = num->y1;
	int n = num->y2;
	switch (op) {
	case '1':
		num->x1 = 0;
		num->y1 = 0;
		num->x2 = 0;
		num->y2 = 0;
		for (int i = 0; i < 10; ++i)
		{
			for (int j = 0; j < 10; ++j)
			{
				m1[i][j] = NULL;
				m2[i][j] = NULL;
				m3[i][j] = NULL;
			}
		}
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
		cout << "\nM1";
		for (int i = 0; i < num->x1; i++) {
			cout << "\n";
			for (int j = 0; j < num->y1; j++) {
				cout << "[" << m1[i][j] << "]" << " ";
			}
		}
		cout << "\n*";
		cout << "\nM2";
		for (int i = 0; i < num->x2; i++) {
			cout << "\n";
			for (int j = 0; j < num->y2; j++) {
				cout << "[" << m2[i][j] << "]" << " ";
			}
		}
		cout << "\n=";
		cout << "\nM3";
		for (int i = 0; i < k; i++) {
			for (int j = 0; j < n; j++) {
				/*m3[i][j] = 0;*/
				for (int z = 0; z < m; z++) {
					m3[i][j] += m1[i][z] * m2[z][j];
				}
			}
		}
		for (int i = 0; i < k; ++i)
		{
			cout << "\n";
			for (int j = 0; j < n; ++j)
			{
				cout << "[" << m3[i][j] << "]" << " ";
			}
		}
		cout << "\n" << endl;
		system("pause");
		multiplicacion();
		break;

	default:
		num->x1 = 0;
		num->y1 = 0;
		num->x2 = 0;
		num->y2 = 0;
		for (int i = 0; i < 10; ++i)
		{
			for (int j = 0; j < 10; ++j)
			{
				m1[i][j] = NULL;
				m2[i][j] = NULL;
				m3[i][j] = NULL;
			}
		}
		menu();
		break;
	}

}
void vector() {
	system("cls");
	cout << "-----Matriz por vector-----" << endl;
	cout << "Ingrese la longitud de la matriz y del vector" << endl;
	cout << "1.Matriz" << endl;
	cout << "2.Vector" << endl;
	cout << "3.Mostrar resultados" << endl;
	cout << "4.Salir" << endl;
	cout << "Seleccione una opcion: ";
	cin >> op;
	int k = num->x1;
	int m = num->y1;
	int n = num->y2;
	switch (op) {
	case '1':
		num->x1 = 0;
		num->y1 = 0;
		num->x2 = 0;
		num->y2 = 0;
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
		vector();
		break;

	case '2':
		cout << "filas= ";
		cin >> num->x2;
		num->y2 = 1;
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
		vector();
		break;

	case '3':
		cout << "\nM1";
		for (int i = 0; i < num->x1; i++) {
			cout << "\n";
			for (int j = 0; j < num->y1; j++) {
				cout << "[" << m1[i][j] << "]" << " ";
			}
		}
		cout << "\n*";
		cout << "\nV";
		for (int i = 0; i < num->x2; i++) {
			cout << "\n";
			for (int j = 0; j < num->y2; j++) {
				cout << "[" << m2[i][j] << "]" << " ";
			}
		}
		cout << "\n=";
		cout << "\nVr";
		for (int i = 0; i < k; i++) {
			for (int j = 0; j < n; j++) {
				for (int z = 0; z < m; z++) {
					m3[i][j] += m1[i][z] * m2[z][j];
				}
			}
		}
		for (int i = 0; i < k; ++i)
		{
			cout << "\n";
			for (int j = 0; j < n; ++j)
			{
				cout << "[" << m3[i][j] << "]" << " ";
			}
		}

		cout << "\n" << endl;
		system("pause");
		vector();
		break;
	default:
		num->x1 = 0;
		num->y1 = 0;
		num->x2 = 0;
		num->y2 = 0;
		for (int i = 0; i < 10; ++i)
		{
			for (int j = 0; j < 10; ++j)
			{
				m1[i][j] = NULL;
				m2[i][j] = NULL;
				m3[i][j] = NULL;
			}
		}
		menu();
		break;
	}
}
void quaterniones() {
	system("cls");
	cout << "-----Generación de nuevas coordenadas por quaterniones-----" << endl;
	cout << "1.Ingresar datos" << endl;
	cout << "2.Salir" << endl;
	float punto[3];
	float vector[3];
	float angulo = 0;
	float coseno;
	float seno;
	float q[4];
	float u;//vector unitario
	float q1[4];
	float A[4][3];
	float r[4];//resultado
	float B[4][4];
	float rf[4];//resultado final
	cout << "Seleccione una opcion: ";
	cin >> op;
	switch (op) {
	case'1':
		cout << "Ingrese los valores del punto:" << endl;
		for (int i = 0; i < 3; i++) {
			cout << "[" << i << "]=";
			cin >> punto[i];
		}
		cout << "Ingrese los valores del vector:" << endl;
		for (int i = 0; i < 3; i++) {
			cout << "[" << i << "]=";
			cin >> vector[i];
		}
		cout << "Ingrese el angulo: ";
		cin >> angulo;
		angulo = angulo / 2;
		u = (vector[0] * vector[0]) + (vector[1] * vector[1]) + (vector[2] * vector[2]);
		u = sqrt(u);
		coseno = cos(angulo*3.1416 / 180);
		seno = sin(angulo*3.1416 / 180);
		q[0] = coseno;
		q[1] = (vector[0] / u)*seno;
		q[2] = (vector[1] / u)*seno;
		q[3] = (vector[2] / u)*seno;
		q1[0] = q[0];
		q1[1] = (q[1])*-1;
		q1[2] = (q[2])*-1;
		q1[3] = (q[3])*-1;
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 3; j++) {
				A[i][j] = ((q[i]) * (punto[j]));
			}
		}
		A[1][0] *= -1; A[1][2] *= -1; A[2][0] *= -1;
		A[2][1] *= -1; A[3][1] *= -1; A[3][2] *= -1;
		r[1] = (A[0][0]) + (A[2][2]) + (A[3][1]);
		r[2] = (A[0][1]) + (A[1][2]) + (A[3][0]);
		r[3] = (A[0][2]) + (A[1][1]) + (A[2][0]);
		r[0] = (A[1][0]) + (A[2][1]) + (A[3][2]);
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				B[i][j] = ((r[i]) * (q1[j]));
			}
		}
		B[1][1] *= -1; B[1][3] *= -1; B[2][1] *= -1;
		B[2][2] *= -1; B[3][2] *= -1; B[3][3] *= -1;
		rf[1] = (B[0][1]) + (B[1][0]) + (B[2][3]) + (B[3][2]);
		rf[1] = roundf(rf[1] * 100) / 100;
		rf[2] = (B[0][2]) + (B[1][3]) + (B[2][0]) + (B[3][1]);
		rf[2] = roundf(rf[2] * 100) / 100;
		rf[3] = (B[0][3]) + (B[1][2]) + (B[2][1]) + (B[3][0]);
		rf[3] = roundf(rf[3] * 100) / 100;
		rf[0] = (B[0][0]) + (B[1][1]) + (B[2][2]) + (B[3][3]);
		rf[0] = roundf(rf[0] * 100) / 100;
		cout << "Las nuevas coordenadas son: ";
		cout << "i[" << rf[1] << "] " << "j[" << rf[2] << "] " << "k[" << rf[3] << "]" << endl;
		system("pause");
		quaterniones();
		break;
	default:
		menu();
		break;
	}
}
void mc() {
	system("cls");
	cout << "-----Matriz compuesta-----" << endl;
	cout << "Ingrese los puntos de la matriz y el vector." << endl;
	cout << "1.Generar MC" << endl;
	cout << "2.Salir" << endl;
	cout << "Seleccione una opcion: ";
	int x;
	int y;
	int z;
	int p;
	float angulo;
	char eje;
	float traslacion[4][4];
	float traslacionN[4][4];
	float rotacionx[4][4];
	float rotaciony[4][4];
	float rotacionz[4][4];
	float TR[4][4];
	float TRTN[4][4];
	float matrizcompuesta[10][10];
	float puntos[10][10];
	cin >> op;
	switch (op) {
	case '1':
		cout << "Ingrese los valores del vector: " << endl;
		cout << "x=";
		cin >> x;
		cout << "y=";
		cin >> y;
		cout << "z=";
		cin >> z;
		cout << "Ingrese el angulo:";
		cin >> angulo;
		cout << "Ingrese el eje:";
		cin >> eje;
		cout << "Ingrese la cantidad de puntos:";
		cin >> p;
		for (int j = 0; j < p; j++) {
			puntos[4][j] = 0;
			for (int i = 0; i < 3; i++) {
				cout << "[" << i << "]=";
				cin >> puntos[i][j];
				puntos[3][j] = 1;
			}
		}
		system("cls");
		cout << "P";
		for (int i = 0; i < 4; i++) {
			cout << "\n";
			for (int j = 0; j < p; j++) {
				cout << "[" << puntos[i][j] << "]" << " ";
			}
		}
		//traslacion
		traslacion[0][0] = 1;
		traslacion[0][1] = 0;
		traslacion[0][2] = 0;
		traslacion[0][3] = x;
		traslacion[1][0] = 0;
		traslacion[1][1] = 1;
		traslacion[1][2] = 0;
		traslacion[1][3] = y;
		traslacion[2][0] = 0;
		traslacion[2][1] = 0;
		traslacion[2][2] = 1;
		traslacion[2][3] = z;
		traslacion[3][0] = 0;
		traslacion[3][1] = 0;
		traslacion[3][2] = 0;
		traslacion[3][3] = 1;
		cout << "\nT";
		for (int i = 0; i < 4; i++) {
			cout << "\n";
			for (int j = 0; j < 4; j++) {
				cout << "[" << traslacion[i][j] << "]" << " ";
			}
		}
		if (eje == 'x') {
			//rotacion x
			rotacionx[0][0] = 1;
			rotacionx[0][1] = 0;
			rotacionx[0][2] = 0;
			rotacionx[0][3] = 0;
			rotacionx[1][0] = 0;
			rotacionx[1][1] = cos(angulo* 3.1416 / 180.0);
			rotacionx[1][2] = -sin(angulo* 3.1416 / 180);
			rotacionx[1][3] = 0;
			rotacionx[2][0] = 0;
			rotacionx[2][1] = sin(angulo* 3.1416 / 180);
			rotacionx[2][2] = cos(angulo* 3.1416 / 180.0);
			rotacionx[2][3] = 0;
			rotacionx[3][0] = 0;
			rotacionx[3][1] = 0;
			rotacionx[3][2] = 0;
			rotacionx[3][3] = 1;
			cout << "\nR(x)";
			for (int i = 0; i < 4; i++) {
				cout << "\n";
				for (int j = 0; j < 4; j++) {
					rotacionx[i][j] = roundf(rotacionx[i][j] * 100) / 100;
					cout << "[" << rotacionx[i][j] << "]" << " ";
				}
			}
		}
		if (eje == 'y') {
			//rotacion y
			rotaciony[0][0] = cos(angulo* 3.1416 / 180.0);
			rotaciony[0][1] = 0;
			rotaciony[0][2] = sin(angulo* 3.1416 / 180);
			rotaciony[0][3] = 0;
			rotaciony[1][0] = 0;
			rotaciony[1][1] = 1;
			rotaciony[1][2] = 0;
			rotaciony[1][3] = 0;
			rotaciony[2][0] = -sin(angulo* 3.1416 / 180);
			rotaciony[2][1] = 0;
			rotaciony[2][2] = cos(angulo* 3.1416 / 180.0);
			rotaciony[2][3] = 0;
			rotaciony[3][0] = 0;
			rotaciony[3][1] = 0;
			rotaciony[3][2] = 0;
			rotaciony[3][3] = 1;
			cout << "\nR(y)";
			for (int i = 0; i < 4; i++) {
				cout << "\n";
				for (int j = 0; j < 4; j++) {
					rotaciony[i][j] = roundf(rotaciony[i][j] * 100) / 100;
					cout << "[" << rotaciony[i][j] << "]" << " ";
				}
			}
		}
		if (eje == 'z') {
			//rotacion z
			rotacionz[0][0] = cos(angulo* 3.1416 / 180.0);
			rotacionz[0][1] = -sin(angulo* 3.1416 / 180);
			rotacionz[0][2] = 0;
			rotacionz[0][3] = 0;
			rotacionz[1][0] = sin(angulo* 3.1416 / 180);
			rotacionz[1][1] = cos(angulo* 3.1416 / 180.0);
			rotacionz[1][2] = 0;
			rotacionz[1][3] = 0;
			rotacionz[2][0] = 0;
			rotacionz[2][1] = 0;
			rotacionz[2][2] = 1;
			rotacionz[2][3] = 0;
			rotacionz[3][0] = 0;
			rotacionz[3][1] = 0;
			rotacionz[3][2] = 0;
			rotacionz[3][3] = 1;
			cout << "\nR(z)";
			for (int i = 0; i < 4; i++) {
				cout << "\n";
				for (int j = 0; j < 4; j++) {
					rotacionz[i][j] = roundf(rotacionz[i][j] * 100) / 100;
					cout << "[" << rotacionz[i][j] << "]" << " ";
				}
			}
		}
		//traslacion inversa
		traslacionN[0][0] = 1;
		traslacionN[0][1] = 0;
		traslacionN[0][2] = 0;
		traslacionN[0][3] = -x;
		traslacionN[1][0] = 0;
		traslacionN[1][1] = 1;
		traslacionN[1][2] = 0;
		traslacionN[1][3] = -y;
		traslacionN[2][0] = 0;
		traslacionN[2][1] = 0;
		traslacionN[2][2] = 1;
		traslacionN[2][3] = -z;
		traslacionN[3][0] = 0;
		traslacionN[3][1] = 0;
		traslacionN[3][2] = 0;
		traslacionN[3][3] = 1;
		cout << "\nT-1";
		for (int i = 0; i < 4; i++) {
			cout << "\n";
			for (int j = 0; j < 4; j++) {
				cout << "[" << traslacionN[i][j] << "]" << " ";
			}
		}
		//resultados
		if (eje == 'x') {
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					TR[i][j] = 0;
					for (int k = 0; k < 4; k++) {
						TR[i][j] += traslacion[i][k] * rotacionx[k][j];
					}
				}
			}
		}
		if (eje == 'y') {
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					TR[i][j] = 0;
					for (int k = 0; k < 4; k++) {
						TR[i][j] += traslacion[i][k] * rotaciony[k][j];
					}
				}
			}
		}
		if (eje == 'z') {
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					TR[i][j] = 0;
					for (int k = 0; k < 4; k++) {
						TR[i][j] += traslacion[i][k] * rotacionz[k][j];
					}
				}
			}
		}
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				TRTN[i][j] = 0;
				for (int k = 0; k < 4; k++) {
					TRTN[i][j] += TR[i][k] * traslacionN[k][j];
				}
			}
		}
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < p; j++) {
				matrizcompuesta[i][j] = 0;
				for (int k = 0; k < 4; k++) {
					matrizcompuesta[i][j] += TRTN[i][k] * puntos[k][j];
					matrizcompuesta[i][j] = roundf(matrizcompuesta[i][j] * 100) / 100;
				}
			}
		}

		cout << "\nResultado";
		for (int i = 0; i < 4; ++i)
		{
			cout << "\n";
			for (int j = 0; j < p; ++j)
			{
				cout << "[" << matrizcompuesta[i][j] << "]" << " ";
			}
		}

		cout << "" << endl;
		system("pause");
		mc();
		break;
	default:
		menu();
		break;

	}

}