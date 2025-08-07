#include<iostream> 
#include<string_view> 


class Dog {

public : 
Dog () = default ; 
Dog(std::string_view param_name ,std::string_view breed_param, int age_param);
~Dog() ;

//Setters
void set_dog_name (std::string_view name ) {
this->name=name ; 

}
void set_dog_breed(std::string_view breed ) {
this->breed=breed ; 

} 
void set_dog_age( int age ) {

*(this->p_age)=age ;

}


void printf(){
std::cout<<" Dog ( " << this << " ) : [ Name : " << name << " Breed : "<< breed<< " Age : " << *p_age <<" ] "<< std :: endl; 
}
private : 
std::string name ; 
std:: string breed ; 
int *p_age {nullptr}; 
};

Dog::Dog(std::string_view param_name ,std::string_view breed_param, int age_param) {
    name=param_name; 
    breed=breed_param; 
    p_age= new int ;
    *p_age=age_param;
    std::cout<<"Dog constructor called for : " << name << " constructed at "<< this << std::endl ; 
}

Dog::~Dog() {
delete p_age ; 
std::cout<<"Dog  destructor called for : " << name <<" at "<< this << std::endl ; 
} 
/*void some_func() {

Dog My_dog("Fatroucha","Arabe",3) ;

}
*/

void some_func(Dog dog_param) {




}
int main() {

    Dog dog1("fatroucha","Caniche",5); // Constructor 
    dog1.printf()  ; 
     
    dog1.set_dog_name("Pumba") ;
    dog1.printf()  ;  
    dog1.set_dog_breed("chiwawa"); 
    dog1.printf(); 

    std::cout<<"Done ! "<<std:: endl ; 


    // Destructor 
    return 0 ;
} 