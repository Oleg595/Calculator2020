#include"Command.h"

double Single::Execute(double num, ...) {
	return command(num);
}

double Binary::Execute(double num, ...) {
	va_list ap;
	double num1;
	va_start(ap, num);
	num1 = va_arg(ap, double);
	return command(num, num1);
}

string ReadFunctions::FUNC_To_string(FUNC func) {
	if (func == SIN)
		return "Sin";
	if (func == COS)
		return "Cos";
	if (func == TG)
		return "Tg";
	if (func == CTG)
		return "Ctg";
	if (func == ARCSIN)
		return "Arcsin";
	if (func == ARCCOS)
		return "Arccos";
	if (func == ARCTG)
		return "Arctg";
	if (func == ARCCTG)
		return "Arcctg";
	if (func == LOG)
		return "Log";
	if (func == DIV)
		return "Div";
	if (func == DEG)
		return "Deg";
	return "";
}

ReadFunctions::ReadFunctions(string str) {
	for (const auto& entry : fs::directory_iterator(str)) {
		LPCWSTR pbuft = (LPCWSTR)(entry.path().c_str());
		HINSTANCE le_module = LoadLibrary(pbuft);
		for (int i = 0; i < END; i++) {
			FUNC_To_string((FUNC)i);
			FARPROC adresse_la_func = GetProcAddress(le_module, (LPCSTR)FUNC_To_string((FUNC)i).c_str());
			if (adresse_la_func != 0) {
				m[(FUNC)i] = (com)adresse_la_func;
			}
		}
	}
}

com ReadFunctions::Function(FUNC func) {
	if (m.find(func) != m.end()) {
		return m.find(func)->second;
	}
	else {
		return NULL;
	}
}