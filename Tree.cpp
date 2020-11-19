#include"Tree.h"

Number::Number(double num) {
	number = num;
	this->left = NULL;
	this->right = NULL;
}

double Number::value() {
	return number;
}

OPER Number::Oper() {
	return NO;
}

Operation::Operation(OPER op, Element* left, Element* right, map<FUNC, com> functions) {
	m = functions;
	operation = op;
	this->left = left;
	this->left->parent = this;
	this->right = right;
	this->right->parent = this;
}

double Operation::value() {
	if (operation == PLUS) {
		return left->value() + right->value();
	}
	if (operation == MULTIPLICATION) {
		return left->value() * right->value();
	}
	if (operation == DIVISION) {
		Binary* s = new Binary(m.find(DIV)->second);
		return(s->Execute(left->value(), right->value()));
	}
	if (operation == DEGREE) {
		Binary* s = new Binary(m.find(DEG)->second);
		return(s->Execute(left->value(), right->value()));
	}
}

OPER Operation::Oper() {
	return operation;
}

Tree::Tree() {
	start = NULL;
}

void Tree::NewElem(Element* elem) {
	Element* cur = start;
	while ((cur != NULL) && (cur->Oper() <= elem->Oper())) {
		cur = cur->right;
	}
	if (cur == start) {
		Element* add = elem->left;
		elem->left = start;
		elem->parent = NULL;
		start = elem;
		return;
	}
	else {
		cur = cur->parent;
		Element* add = cur->right;
		cur->right->parent = elem;
		cur->right = elem;
		elem->left = add;
		elem->parent = cur;
		return;
	}
}

double Tree::result() {
	return start->value();
}