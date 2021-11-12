#include <iostream>
using namespace std;
<<<<<<< HEAD
int tong(int a, int b);

int hieu(int a, int b)
{
	return a-b;
}
=======
int tong(int a, int b)
{
	return a+b;
}
int hieu(int a, int b);
>>>>>>> bf8d1cd75aa281bbc7033c38a236bacd041cbce8

int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
<<<<<<< HEAD
	cout << "Phep toan tru: ";
	cin >> hieu(a, b);
=======
	cout << "Chon phep toan cong:  ";
	cin >> tong(a, b);
>>>>>>> bf8d1cd75aa281bbc7033c38a236bacd041cbce8
	system("pause");
	return 0;
}