#include <iostream>
#include <cmath>
using namespace std;

double a;
double b;
double c;
double z;

int main() {
	cout << "if (a = 1) - +" << endl;
		cout << "if (a = 2) - - " << endl;
		cout << "if (a = 3) - /" << endl;
		cout << "if (a = 4) - *" << endl;
		cout << "if (a = 5) - pow" << endl;
		cout << "if (a = 6) - sqrt" << endl;
	cout << "Input function:a = "; cin >> a;
	cout << "___________________________________________" << endl;
	cout << "c = "; cin >> c;
	cout << "z = "; cin >> z;
	if (a == 1)
		b = c + z;
	else
		if (a == 2)
			b = c - z;
		else
			if (a == 3)
				b = c / z;
			else
				if (a == 4)
					b = c * z;
				else
					if (a == 5)
						b = pow(c, z);
					else
						if (a == 6)
							b = sqrt(c);
			
	cout << "b = " << b << endl;


	return 0;
}