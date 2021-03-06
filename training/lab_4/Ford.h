#pragma once
#include <iostream>
#include "Car.h"

class Ford : public Car {
public:
Ford() {}
virtual std::string TypeInfo() const override{return "Ford Fiesta";}

virtual std::string ColorInfo() const override{return "Red";}

virtual std::string EngineFuelInfo() const override{return "Pb98";}

virtual std::string EngineCapInfo() const override{return "1398 [cm^3]";}

virtual std::string EnginePowInfo() const override{return "45 [kW]";}

virtual std::string GpsInfo() const override {return "F/Google/No.000.000\n";}





};
