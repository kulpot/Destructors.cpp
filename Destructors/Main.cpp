#include <iostream>

//Destructors | C++ Tutorials //ref link:https://www.youtube.com/watch?v=xaUd6i2t044&list=PLFk1_lkqT8MaImkuU0ArJ6_dbr9nEN46a&index=2

class MyClass {
public:
	MyClass() {
		std::cout << "Constructor\n";
		xs = new int[100];
	}

	~MyClass() {
		std::cout << "Destructor\n";
		delete[] xs;
	}
private:
	int* xs;
};

//void f() {
//	MyClass c;
//}

int main() {
	MyClass* p = new MyClass;
	delete p;


	//MyClass c;
	//std::cout << "before f\n";
	//f();
	//std::cout << "after f\n";
	return 0;
}