#include <iostream>

using namespace std;
//---------------------������� � ���������---------------------------------------





//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	
	//-------------------------------���� �����-------------------------------------

	int x, y, z;

	double rezult;

	cout << "������� ���������� ����� �������: " << endl;
	cout << "X = ";
	cin >> x;

	cout << endl << "Y = ";
	cin >> y;

	cout << endl << "Z = ";
	cin >> z;

	cout << endl;

	rezult = sqrt(x * x + y * y + z * z);

	cout << "������ ������� X = 0; Y = 0; Z = 0;" << endl;
	cout << "����� ������� X = " << x << " Y = " << y << " Z = " << z << endl;
	cout << "������ �������: " << rezult << endl;

	system("pause");

	return 0;
}
