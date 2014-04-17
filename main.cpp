#include "fun_complex.h"
#include <iostream>
using namespace std;
// вариант: 1, лаб: 1
int main(void){
	ComplexNS::Complex a,b;
	double y;
	int x = 0;
	cout << "Input a first complex number:" << endl;
	cin >> a.x >> a.y;
    cout << "Chooise a action:" << endl
         << "0) Multiple number with complex number;" << endl
         << "1) Multiple number with float number;" << endl
         << "2) Addition number with complex number;" << endl
         << "3) Count length of number" << endl;
	cin >> x;
	switch(x){
	case 0:
		cin >> b.x >> b.y;
		ComplexNS::print(ComplexNS::umn(a,b));
		break;
	case 1:
		cin >> y;
		ComplexNS::print(ComplexNS::umn(a,y));
        break;
	case 2:
		cin >> b.x >> b.y;
		ComplexNS::print(ComplexNS::sum(a,b));
		break;
	case 3:
        cout << ComplexNS::length(a) << endl;
		break;
	default:
        cout << "Error! Unsupported number of action." << endl;

	}
	return 0;
}
