#include<iostream> 
#include<string_view> 


class Dog {

public : 
Dog () = default ; 
Dog(std::string_view param_name ,std::string_view breed_param, int age_param);
~Dog() ; 
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
std::cout<<"Dog  destructor called for : " << name << std::endl ; 
} 
/*void some_func() {

Dog My_dog("Fatroucha","Arabe",3) ;

}
*/

void some_func(Dog dog_param) {




}
int main() {


    return 0 ;
} 