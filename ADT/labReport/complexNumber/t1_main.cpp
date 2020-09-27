#include "t1.h"
using namespace std;

int main(){
	int chose;
	complex c1, c2, result;
	c1 = creatComplex();
	c2 = creatComplex();
	cout << "Which operator you want" << endl;
	cout << "add" << "\t" << "1" << endl;
	cout << "substrate" << "\t" << "2" << endl;
	cout << "multiply" << "\t" << "3" << endl;
	cout << "division" << "\t" << "4" << endl;
	cin >> chose;
	switch (chose)
	{
	case 1:
		addComplex(c1, c2, result);
		printComplex(result);
		break;
	
	case 2:
		subtractComplex(c1, c2, result);
		printComplex(result);
		break;

	case 3:
		multiplyComplex(c1, c2, result);
		printComplex(result);
		break;

	case 4:
		divisionComplex(c1, c2, result);
		printComplex(result);
		break;
	
	default:
		cout << "Operator not allowed" << endl;
		break;
	}
}

