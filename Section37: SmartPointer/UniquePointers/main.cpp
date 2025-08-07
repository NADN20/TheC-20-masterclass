#include<iostream> 
#include<memory> 
#include"Dog.h"

int main (){
  
 /*//stack variable   
{
Dog dog1("Dog1");

dog1.Print_All_Info();

std::cout<<"Hitting outside scope ! "<<std::endl ;
}
std::cout<<"Done !"<<std::endl ;  
*///--------------------------------------------------------------------------------------

// Using raw pointers
/*
Dog * p_dog1= new Dog("Milou") ;
int * p_int1 = new int (100) ;

p_dog1->Print_Name(); 

std::cout <<"Integer is : "<<*p_int1 <<std::endl; 
std::cout <<"Integer lives at adress  : "<< p_int1 <<std::endl; 

delete p_dog1 ; 
delete p_int1 ;
----------------------------------------------------------------------------------------- */
// Using unique_ptr : managed memory is owned by single pointer at any moment ! 
{
Dog *p_dog_2 = new Dog ("dog2") ; 

std::unique_ptr<Dog> up_dog_{p_dog_2};
std::unique_ptr<int> up_int_1{new int(200)}; // Fonda exemple 
std::unique_ptr<Dog> up_dog_2{nullptr};


up_dog_->Print_Name(); 
*up_int_1=1996; 
std::cout <<"Integer is : "<< *up_int_1 <<std::endl; 
std::cout <<"Integer lives at adress  : "<< up_int_1.get() <<std::endl; 


}
std::cout<<"Hitting outside scope ! "<<std::endl ;


    return 0 ; 
}