
 
#include"Dog.h" 


Dog::Dog(std::string_view param_name ,std::string_view breed_param, int age_param) {
    name=param_name; 
    breed=breed_param; 
    p_age= new int ;
    *p_age=age_param;
    std::cout<<"Dog constructor called for : " << name << " constructed at "<< this << std::endl ; 
}

Dog::~Dog() {
//delete p_age ; 
std::cout<<"Dog  destructor called for : " << name <<" at "<< this << std::endl ; 
}

Dog::Dog(std::string_view name)
{
  this->name=name;  
    std::cout<<"Dog  constructor called for : " << name <<" at "<< this << std::endl ; 

}
