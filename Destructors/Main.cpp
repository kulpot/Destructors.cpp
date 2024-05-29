#include <iostream>
#include <vector>

//Destructors | C++ Tutorials //ref link:https://www.youtube.com/watch?v=xaUd6i2t044&list=PLFk1_lkqT8MaImkuU0ArJ6_dbr9nEN46a&index=2

class MyClass {
public:
	MyClass() {
		std::cout << "Constructor\n";
		//xs = new int[100];
		x = 5;
		b = true;
	}

	~MyClass() {
		//std::cout << "Destructor\n";
		//delete[] xs;
	}
private:
	//int* xs;
	int x;
	bool b;
	std::vector<int> v;
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