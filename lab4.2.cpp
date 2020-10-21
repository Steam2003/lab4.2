#include <iostream>
#include <cmath>
#include <Windows.h>
#include <iomanip>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x, y, A, B, xp, xk, dx;

	cout << "¬вед≥ть x початкове (xp):  "; cin >> xp;
	cout << "¬вед≥ть x к≥нцеве (xk):  "; cin >> xk;
	cout << "¬вед≥ть крок (dx):  "; cin >> dx;

	cout << fixed;
	cout << "-----------------------" << endl;
	cout << "|" << setw(4) << "x" << setw(5) << "|"
		 << setw(7) << "y" << setw(5) << "|" << endl;
	cout << "-----------------------" << endl;


	x = xp;
	while (x <= xk)
	{
		A = x * x * x + 2;
		if (x < 4)
			B = 5 * pow(x, 8) + pow(x, 6) - x * x + 3;
		else
			if (4 <= x && x < 7)
				B = atan((fabs(x + 3) / 2.)) + 7 * x;
			else
				B = log10(2 * x + exp(5 * x + 5));
		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
		   	<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;

		x += dx;
	}
	cin.get();
	return 0;
}
