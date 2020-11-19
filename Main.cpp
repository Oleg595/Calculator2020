#include"Calculator.h"

int main(void) {
	string data;
	getline(cin, data);
	Calculator* calc = new Calculator(data);
	cout << calc->Result() << endl;
	return 0;
}