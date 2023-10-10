#include <iostream>
#include <iomanip>
#include <time.h>
#include <cmath>
using namespace std;
int main()
{
	double R;
	double x, y;
	srand((unsigned)time(NULL));
	cout << "R = "; cin >> R;
	for (int i = 0; i < 10; i++)
		{
			cout << "x = "; cin >> x;
			cout << "y = "; cin >> y;
			if (((y >= 0 && y <= sqrt(R * R - pow(x + R, 2)))
				&& (x >= -R && x <= 0))
				|| ((y <= 0 && y >= -sqrt(R * R - pow(x - R, 2)))
					&& (x >= 0 && x <= R)))
				cout << "yes" << endl;
			else
				cout << "no" << endl;
		}
		cout << endl << fixed;

		for (int i = 0; i < 10; i++)
		{
			x = 2 * R * rand() / RAND_MAX - R;
			y = 2 * R * rand() / RAND_MAX - R;
			if (((y >= 0 && y <= sqrt(R * R - pow(x + R, 2)))
				&& (x >= -R && x <= 0)) 
				|| ((y <= 0 && y >= -sqrt(R * R - pow(x - R, 2)))
					&& (x >= 0 && x <= R)))
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}