#include <iostream>

#include "foo.h"
#include "version.h"

int main() {
	std::cout << "Version: " << VERSION << std::endl;
	std::cout << "Main" << std::endl;

	Foo f1;
	f1.bar();

	return 0;
}
