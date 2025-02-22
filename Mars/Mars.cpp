#include <iostream>

int main() {
  // Add your code below  

 double weight = 0;
 double new_weight = 0;

 std::cout << "Hello! Please enter weight of item in lbs: ";
 std::cin >> weight;

 new_weight = weight * (3.7 / 9.81);

 std::cout << "This will weight: " << new_weight << " lbs on Mars!\n"; 

}