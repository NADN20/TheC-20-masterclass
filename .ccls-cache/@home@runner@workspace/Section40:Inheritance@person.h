#ifndef _PERSON_H_
#define _PERSON_H_

#include <iostream> 
#include <string>


class Person {

  // lezem nefhem friend 
  friend std::ostream& operator<<(std::ostream& out, const Person& person); 
  public: 
  Person();  
  Person(std::string& first_name_param, std::string& last_name_param) ;
  ~Person(); 


 // GETTERS 

std::string get_first_name() const ; 
std::string get_last_name() const ;  
  

  
 private : 
 std::string first_name {} ;
 std::string last_name {} ;   
};

#endif  // _PERSON_H_

