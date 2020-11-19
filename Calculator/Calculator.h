#pragma once
#include"Tree.h"
#include"Command.h"

class Calculator {
private:
	Tree* tree;
	ReadFunctions* functions;
public:
	Calculator(string str);
	double Word(string str, int* i);
	double Result();
};