#include <iostream>

using namespace std;
//---------------------Функции и Прототипы---------------------------------------





//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	
	//-------------------------------САМА ПРОГА-------------------------------------

	int x, y, z;

	double rezult;

	cout << "Задайте координаты конца вектора: " << endl;
	cout << "X = ";
	cin >> x;

	cout << endl << "Y = ";
	cin >> y;

	cout << endl << "Z = ";
	cin >> z;

	cout << endl;

	rezult = sqrt(x * x + y * y + z * z);

	cout << "Начало вектора X = 0; Y = 0; Z = 0;" << endl;
	cout << "Конец вектора X = " << x << " Y = " << y << " Z = " << z << endl;
	cout << "Длинна вектора: " << rezult << endl;

	system("pause");

	return 0;
}
