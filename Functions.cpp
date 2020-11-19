#include"Functions.h"

double Log(double num) {
	return log10(num);
}

double Sqrt(double num) {
	return sqrt(num);
}

double Exp(double num) {
	return exp(num);
}

double Int(double num) {
	if ((int)num + 1 - num > num - (int)num) {
		return (double)(int)num;
	}
	else {
		return (double)((int)num + 1);
	}
}

