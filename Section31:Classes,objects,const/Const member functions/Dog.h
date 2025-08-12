#ifndef DOG_H
#define DOG_H



#include<string> 
#include<iostream>


class Dog {

public : 
//Constructor 
Dog () = default ; 
Dog(std::string_view param_name);
Dog(std::string_view param_name ,std::string_view breed_param,unsigned int age_param);
//Destructor 
~Dog() ;
//Setters :  
void set_dog_name (std::string_view name ) ;
void set_dog_breed(std::string_view breed );
void set_dog_age( unsigned int age );
//Getters : 
std::string_view get_dog_name() const ; 
std::string_view get_dog_breed() const ;
unsigned int get_dog_age() const ; 
//utilites function : 
void Print_Name() const ; 
void Print_All_Info() const ;

private : 
std::string name ; 
std:: string breed ; 
unsigned int age ; 
};



#endif
