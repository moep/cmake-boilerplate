#include <iostream>

#include "foo.h"

Foo::Foo() {
	std::cout << "Foo:Foo()" << std::endl;
}

Foo::~Foo() {
	std::cout << "Foo::~Foo()" << std::endl;
}

void Foo::bar() {
	std::cout << "Foo::bar()" << std::endl;
}

