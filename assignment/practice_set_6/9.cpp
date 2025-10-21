// Vehicle Class with Inheritance and Constructor Overloading
// Create a Vehicle base class and a Car derived class with:
// • Protected: brand
// • Public: Constructor overloading in Car for different car types
#include <iostream>
#include <string>
using namespace std;
class Vehicle {
    protected:
        string brand;
    public:
        Vehicle(string b) {
            this->brand = b;
        };
};
class Car : public Vehicle {
    private:
        string model;
        int year;
    public:
        Car(string b, string m, int y) : Vehicle(b), model(m), year(y) {
            cout << "Sedan Created: " << brand << " " << model << " " << year << endl;
        }

        // Constructor for SUV
        Car(string b, string m) : Vehicle(b), model(m), year(0) {
            cout << "SUV Created: " << brand << " " << model << endl;
        }

        // Constructor for Truck
        Car(string b) : Vehicle(b), model("Truck"), year(0) {
            cout << "Truck Created: " << brand << endl;
        }
};
int main() {
    Car sedan("Toyota", "Camry", 2020);
    Car suv("Ford", "Explorer");
    Car truck("Volvo");
    return 0;
}