#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(0, "rus");
    double i = 1, sum = 0, k = 0, z = 100, l = 0;
	while (( abs ( k - z )) >= ( 0.0001 ))
	{
		k = 1 / (( 3 * i - 2 ) * ( 3 * i + 1 ));
		l = i + 1;
		z = 1 / (( 3 * l - 2 ) * ( 3 * l + 1 ));
		i++;
		sum = sum + k;
	}
	cout << sum;
	return (0);
}