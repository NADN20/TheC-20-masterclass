#include  "person.h" 



Person::Person(){};  

Person::Person(std::string& first_name_param, std::string& last_name_param) :
first_name{first_name_param}, last_name{last_name_param } {} 




std::ostream& operator<<(std::ostream& out, const Person& p){
    out <<"Person [" << p.first_name << " " << p.last_name << "]" ;
    return out ;
}

Person::~Person(){};  


//GETTERS 


std::string Person::get_first_name() const {
    return first_name;
}

std::string Person::get_last_name() const {
    return last_name;
}






