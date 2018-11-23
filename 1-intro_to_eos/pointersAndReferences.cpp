#include <iostream>

using namespace std;

class Car {
	int wheels;
	string engine;
	int doors;

public:
	Car(int wheels, string engine, int doors) {
		this->wheels = wheels;
		this->engine = engine;
		this->doors = doors;
	}

	friend std::ostream& operator << (std::ostream& stream, const Car& car) {
		stream << "wheels: " << car.wheels << endl;
		stream << "engine: " << car.engine << endl;
		stream << "doors: "  << car.doors  << endl;
		stream << "------------------------------------" << endl;
	}

	string toString() {
		cout << "printing car: " << this << endl;
		cout << "wheels: " << wheels << endl;				
		cout << "engine: " << engine << endl;
		cout << "doors: " << doors << endl;
		stream << "------------------------------------" << endl;
	}

};

int main() {
	Car* c = new Car(4, "v6", 2);
	Car a = Car(10, "v8", 4);
	//cout << c << endl;
	//cout << c -> toString() << endl;
	
}
