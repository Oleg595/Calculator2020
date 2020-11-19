#include"Operations.h"

double Div(double num1, double num2) {
	return num1 / num2;
}

double Deg(double num1, double num2) {
	return pow(num1, num2);
}

double Sin(double num) {
	return sin(num);
}

double Cos(double num) {
	return cos(num);
}

double Tg(double num) {
	return tan(num);
}

double Ctg(double num) {
	return 1. / tan(num);
}

double Arcsin(double num) {
	return asin(num);
}

double Arccos(double num) {
	return acos(num);
}

double Arctg(double num) {
	return atan(num);
}

double Arcctg(double num) {
	return 3.141592653589793238462 / 2 - atan(num);
}