#include <iostream>

//Destructors | C++ Tutorials //ref link:https://www.youtube.com/watch?v=xaUd6i2t044&list=PLFk1_lkqT8MaImkuU0ArJ6_dbr9nEN46a&index=2

class MyClass {
public:
	MyClass() {
		std::cout << "Constructor\n";
	}

	~MyClass() {
		std::cout << "Destructor\n";
	}
};

void f() {

}

int main() {
	//MyClass c;
	return 0;
}