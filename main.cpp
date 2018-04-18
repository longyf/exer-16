#include <iostream>
#include "myPower.h"
using namespace std;

int main() {
	cout<<Power(2,3)<<endl;
	cout<<Power(2,0)<<endl;
	cout<<Power(4,-2)<<endl;
	try {Power(0,-2);}
	catch (invalid_argument e) {
		cout<<e.what()<<endl;
	}
	return 0;
}
