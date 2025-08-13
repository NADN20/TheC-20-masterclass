#include <iostream> 
#include "Dog.h"


int main() {    

const Dog  dog1 ("Milou","Shepherd",2) ; // stack variable
dog1.Print_All_Info(); 
dog1.Function_taking_dog("Milou2") ; // Its a copy not a reference
dog1.Print_All_Info();  // No change in the value of dog1.name
}











