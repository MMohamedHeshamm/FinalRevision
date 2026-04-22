#include <iostream>
#include<cmath>
using namespace std;





double power(double a, int b)
{
	long long B = b;

	if (B < 0) {
		a = 1.0 / a;
		B = -B;
	}

	if (B == 0) return 1;

	double tmp = power(a, B / 2);
	double result = tmp * tmp;

	if (B % 2 == 1)
		result *= a;

	return result;
}


//	int main()
//	{
//		double a;
//		int b;
//	
//		cout << "Enter base (a): ";
//		cin >> a;
//	
//		cout << "Enter exponent (b): ";
//		cin >> b;
//	
//		double result = power(a, b);
//	
//		cout << "Result: " << result << endl;
//	
//		return 0;
//	}