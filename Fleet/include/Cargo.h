#ifndef CARGO_H
#define CARGO_H


enum cargoTypes {
  IRON_ORE,
  GOLD_ORE,
  TIMBER
};

class Cargo {
  public:
    
  private:
    cargoTypes cargoType;
    float amount; // Amount of cargo measured in metric tonnes.
};

#endif
