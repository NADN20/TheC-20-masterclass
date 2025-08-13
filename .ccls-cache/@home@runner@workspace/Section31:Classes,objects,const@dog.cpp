
#include"dog.h" 

//Constructors
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
void set_dog_name (std::string_view name ) {
this->name=name ; 
}

void set_dog_breed(std::string_view breed ) {
this->breed=breed ; 
} 
void set_dog_age( unsigned int age ) {
this->age=age ;
}

//utilites function : 
void Print_All_Info(){
std::cout<<"Dog ( " << this << " ) : [ Name : " << name << " Breed : "<< breed<< " Age : " << *p_age <<" ] "<< std :: endl; 
}
void Print_Name(){
std::cout<<name<<std::endl;
}
