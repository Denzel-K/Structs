#include <iostream> 
using namespace std;

struct cars {
  string model;
  int year;
  string color;
};
void printCar(cars &car);
void paintCar(cars &car, string color);

int main(){
  cars car1;
  cars car2; 
  
  car1.model = "Mustang";
  car1.year = 2003;
  car1.color = "Twilight-grey";
  
  car2.model = "Corvette";
  car2.year = 2011;
  car2.color = "Blue";
  
  paintCar(car1, "Black");
  paintCar(car2, "Silver");
  
  printCar(car1);
  printCar(car2);
 
  return 0;
}

void printCar(cars &car){
  cout << "Model: " << car.model << '\n';
  cout << "Production Year: " << car.year << '\n';
  cout << "Color: " << car.color << '\n';
}

void paintCar(cars &car, string color){
  car.color = color;
}