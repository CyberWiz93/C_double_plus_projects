#include <iostream>

int main(){

int dog_age = 13; // Add dog age 

int early_years = 21; // first two years count as 21 human years
int later_years = (dog_age - 2) * 4;
int human_years = early_years + later_years;


std::cout << "My name is Simba! Ruff ruff, I am " << human_years << " in human years."; 



}
