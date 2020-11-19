#pragma once
#include<iostream>
#include"Command.h"
using namespace std;

enum OPER {
	PLUS,
	MULTIPLICATION,
	DIVISION,
	DEGREE,
	NO
};

class Element {
public:
	Element* left;
	Element* right;
	Element* parent;
	virtual double value() = 0;
	virtual OPER Oper() = 0;
};

class Number : public Element {
private:
	double number;
public:
	Number(double num);
	double value();
	OPER Oper();
};

class Operation : public Element {
private:
	OPER operation;
	map<FUNC, com> m;
public:
	Operation(OPER op, Element* left, Element* right, map<FUNC, com> functions);
	double value();
	OPER Oper();
};

class Tree {
private:
	Element* start;
public:
	Tree();
	void NewElem(Element* elem);
	double result();
};