
#include"Dog.h" 

//Constructor 
Dog::Dog(std::string_view param_name ,std::string_view breed_param, unsigned int age_param) {
    name=param_name; 
    breed=breed_param; 
    age=age_param ;
    std::cout<<"Dog constructor called for : " << name << " constructed at "<< this << std::endl ; 
}

Dog::Dog(std::string_view name)
{
  this->name=name;  
  std::cout<<"Dog  constructor called for : " << name <<" at "<< this << std::endl ; 
}

//Destructor    
Dog::~Dog() {
std::cout<<"Dog  destructor called for : " << name <<" at "<< this << std::endl ; 
}
//Setters 
void Dog::set_dog_name (std::string_view name ) {
this->name=name ; 
}

void Dog:: set_dog_breed(std::string_view breed ) {
this->breed=breed ; 
} 
void Dog::set_dog_age( unsigned int age ) {
this->age=age ;
}

//utilites function : 
void Dog:: Print_All_Info(){
std::cout<<"Dog ( " << this << " ) : [ Name : " << name << " Breed : "<< breed<< " Age : " << age <<" ] "<< std :: endl; 
}
void Dog::Print_Name(){
std::cout<<name<<std::endl;
}
