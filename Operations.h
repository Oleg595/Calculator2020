#pragma once

#ifdef OPERATIONS_EXPORTS
#define OPERATIONS_API __declspec(dllexport)
#else
#define OPERATIONS_API __declspec(dllimport)
#endif
#include<iostream>
using namespace std;

extern "C" OPERATIONS_API double Div(double num1, double num2);

extern "C" OPERATIONS_API double Deg(double num1, double num2);

extern "C" OPERATIONS_API double Sin(double num);

extern "C" OPERATIONS_API double Cos(double num);

extern "C" OPERATIONS_API double Tg(double num);

extern "C" OPERATIONS_API double Ctg(double num);

extern "C" OPERATIONS_API double Arcsin(double num);

extern "C" OPERATIONS_API double Arccos(double num);

extern "C" OPERATIONS_API double Arctg(double num);

extern "C" OPERATIONS_API double Arcctg(double num);
