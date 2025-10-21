#ifndef DOG_H
#define DOG_H



#include<string> 
#include<iostream>


class Dog {

public : 
Dog () = default ; 
Dog(std::string_view param_name);
Dog(std::string_view param_name ,std::string_view breed_param, int age_param);
~Dog() ;

//Setters :  
void set_dog_name (std::string_view name ) {
this->name=name ; 

}
void set_dog_breed(std::string_view breed ) {
this->breed=breed ; 

} 
void set_dog_age( int age ) {

*(this->p_age)=age ;

}

//Getters : 
std::string_view get_dog_name() ; 
std::string_view get_dog_breed() ;
int get_dog_age() ; 
 
void Print_Name(); 

void Print_All_Info(); 

private : 
std::string name ;  
std:: string breed ; 
int *p_age {nullptr}; 
};



#endif
