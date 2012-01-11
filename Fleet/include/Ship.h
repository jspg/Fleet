#ifndef SHIP_H
#define SHIP_H

#include <vector>
#include "Vector2.h"
#include "Cargo.h"

enum shipStates {
  IDLE,
  SAILING
};

class Ship {
public:
    Ship();
    
private:
    Vector2f position; // What units are used? Meters, kilometers, nautical miles???
    Vector2f target;
    float speed; // m/s, km/h, knots???
    shipStates state;
    float length; // Dimensions in meters
    float width;
    float height;
    float weight; // Weight of unloaded ship measured in metric tonnes
    std::vector< Cargo > cargoCarried;
    float maxCapacity; // Maximum capacity in metric tonnes



};

#endif