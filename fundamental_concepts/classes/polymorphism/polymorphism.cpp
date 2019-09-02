// This program showcases polymorphism in C++
// By: Nick from CoffeeBeforeArch

#include "interface.h"

using namespace std;

int main() {
  // Create three objects. One car, and one truck, and one generic
  // vehicle
  Car car1("ABC-123", 2003, "Four-Door");
  Truck truck1("456-DEF", 2014, 7);

  // Only valid if Vehicle is not an abstract class
  Vehicle v1("VANITY", 1975);

  // This calls the appropriate version of getDescription()
  // Similar to function overloading
  cout << car1.getDescription() << endl;
  cout << truck1.getDescription() << endl;

  // Only valid if Vehicle is not an abstract class
  cout << v1.getDescription() << endl;

  // Both of these objects are derived from vehicles, so we can
  // represent them as their parent class.
  Vehicle *v2 = &car1;
  Vehicle *v3 = &truck1;

  // This will still call the child class method of getDescription()
  cout << v2->getDescription() << endl;
  cout << v3->getDescription() << endl;

  return 0;
}
