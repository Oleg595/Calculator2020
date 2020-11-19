#pragma once
#ifdef FUNCTIONS_EXPORTS
#define FUNCTIONS_API __declspec(dllexport)
#else
#define FUNCTIONS_API __declspec(dllimport)
#endif
#include<iostream>
using namespace std;

extern "C" FUNCTIONS_API double Log(double num);

extern "C" FUNCTIONS_API double Sqrt(double num);

extern "C" FUNCTIONS_API double Exp(double num);

extern "C" FUNCTIONS_API double Int(double num);