#include <iostream>

using namespace std;

class Vehicle
{
public:
    virtual void vehicle() = 0;
    virtual void FuelConsumption() = 0;
};

class Airplane : public Vehicle
{
public:
    virtual void vehicle()
    {
        cout << "Airplane " << endl;
    }
    virtual void FuelConsumption()
    {
        cout << "Fuel consumption = 500L" << endl;
    }
};

class Ship : public Vehicle
{
public:
    virtual void vehicle()
    {
        cout << "Ship " << endl;
    }
    virtual void FuelConsumption()
    {
        cout << "Fuel consumption = 1000L" << endl;
    }
};

class Truck : public Vehicle
{
public:
    virtual void vehicle()
    {
        cout << "Truck " << endl;
    }
    virtual void FuelConsumption()
    {
        cout << "Fuel consumption = 200L" << endl;
    }
};

class Bike : public Vehicle
{
public:
    virtual void vehicle()
    {
        cout << "Bike " << endl;
    }
    virtual void FuelConsumption()
    {
        cout << "Fuel consumption = 0L" << endl;
    }
};

class Car : public Truck
{
public:
    virtual void vehicle()
    {
        cout << "Car " << endl;
    }
    virtual void FuelConsumption()
    {
        cout << "Fuel consumption = 80L" << endl;
    }
};


int main()
{
    Airplane obj;
    Ship obj1;
    Truck obj2;
    Bike obj3;
    Car obj4;
    Vehicle* veh = &obj;
    veh->vehicle();
    veh->FuelConsumption();
    veh = &obj1;
    veh->vehicle();
    veh->FuelConsumption();
    veh = &obj2;
    veh->vehicle();
    veh->FuelConsumption();
    veh = &obj3;
    veh->vehicle();
    veh->FuelConsumption();
    veh = &obj4;
    veh->vehicle();
    veh->FuelConsumption();
}


