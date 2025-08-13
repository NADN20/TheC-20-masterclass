#include <iostream> 
#include "Dog.h"


int main() {    

const Dog dog1 ("Milou","Shepherd",2) ; // stack variable 
/*
// Direct acces 
dog1.Print_All_Info(); // Compiler error 
dog1.set_dog_name("Milou2") ;// Compiler error if we try to change the value of dog1.name
dog1.Print_All_Info();  

*/
//Pointer to non const 
//Dog * dog_ptr = &dog1 ;
//pointer to const
const Dog * const_ptr = &dog1 ; 
const_ptr->Print_All_Info ; // Compiler error
const_ptr->set_dog_name("Milou2") ; // Compiler error if we try to change the value of dog1.name 


}











