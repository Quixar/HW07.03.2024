#include <iostream>
using namespace std;

class Transport {
protected:
	string type;
public:
	Transport(string type) {}
	double calculate_time(double distance, int avg_speed) { return 0; }
	double calculate_price(double distance, double price_per_km) { return 0; }
};

class Car : public Transport {
public:
	Car() : Transport("Car") {}
	double calculate_time(double distance, int avg_speed) {
		return distance / avg_speed;
	}
	double calculte_price(double distance, double price_per_km) {
		return distance * price_per_km;
	}
};

class Taxi : public Transport {
public:
	Taxi() : Transport("Taxi") {}
	double calculate_time(double distance, int avg_speed) {
		return distance / avg_speed;
	}
	double calculte_price(double distance, double price_per_km) {
		return distance * price_per_km;
	}
};

class Tram : public Transport {
public:
	Tram() : Transport("Tram") {}
	double calculate_time(double distance, int avg_speed) {
		return distance / avg_speed;
	}
	double calculte_price(double distance, double price_per_km) {
		return distance * price_per_km;
	}
};

class Bus : public Transport {
public:
	Bus() : Transport("Bus") {}
	double calculate_time(double distance, int avg_speed) {
		return distance / avg_speed;
	}
	double calculte_price(double distance, double price_per_km) {
		return distance * price_per_km;
	}
};

class Escooter : public Transport {
public:
	Escooter() : Transport("Electro scooter") {}
	double calculate_time(double distance, int avg_speed) {
		return distance / avg_speed;
	}
	double calculte_price(double distance, double price_per_km) {
		return distance * price_per_km;
	}
};

class Train : public Transport {
public:
	Train() : Transport("Train") {}
	double calculate_time(double distance, int avg_speed) {
		return distance / avg_speed;
	}
	double calculte_price(double distance, double price_per_km) {
		return distance * price_per_km;
	}
};

class Airplane : public Transport {
public:
	Airplane() : Transport("Airplane") {}
	double calculate_time(double distance, int avg_speed) {
		return distance / avg_speed;
	}
	double calculte_price(double distance, double price_per_km) {
		return distance * price_per_km;
	}
};

class Bike : public Transport {
public:
	Bike() : Transport("Bike") {}
	double calculate_time(double distance, int avg_speed) {
		return distance / avg_speed;
	}
	double calculate_price(double distance, double price_per_km) { return 0; }
};

int main() {

}