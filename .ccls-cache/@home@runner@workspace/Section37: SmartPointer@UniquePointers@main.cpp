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
/* Using unique_ptr : managed memory is owned by single pointer at any moment ! 
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
*/

    // ------------------------------------------------------------------------------------------
   /* { 
        // using make_unique syntax. Much cleaner
    std::unique_ptr<Dog> up_dog_= std::make_unique<Dog>("dog3") ; // C++14        
    up_dog_->Print_Name();

    std::unique_ptr<int> up_int_1= std::make_unique<int>(200) ; // C++14
    *up_int_1=1996;
        std::cout <<"Integer is : "<< *up_int_1 <<std::endl;
        std::cout <<"Integer lives at adress  : "<< up_int_1.get() <<std::endl;
    }
    std::cout<<"Hitting outside scope ! "<<std::endl ;
        std::cout<<"Done !"<<std::endl ;
    
        return 0;    

} */ 
//----------------------------------------------------------------------------------
    /*
    //Copies not allowed
    std::unique_ptr<Dog> up_dog_8 = std::make_unique<Dog>("Dog8");
    up_dog_8->print_dog();
    //Can get the wrapped pointer address : useful for older raw pointer APIs
    std::cout << "Dog8 memory address: " << up_dog_8.get() << std::endl;

    // Copies and Assignments are not allowed with unique ptr
    //std::unique_ptr<Dog> up_dog_9 = up_dog_8; // Error.This also does some kind of copy
                        // More on this when we've learnt about operator overloading
    //std::unique_ptr<Dog> up_dog_10{up_dog_8}; // Error :  Copy constructor deleted
    */

//----------------------------------------------------------------------------------
          //Can however move the pointer. 
            /*
            std::unique_ptr<Dog> up_dog_11 = std::make_unique<Dog>("Dog11");
            {
                std::unique_ptr<Dog> up_dog_12 = std::move(up_dog_11); // Now up_dog_12 manages Dog11
                                                            // and up_dog_11 points to nothing(nullptr)
                up_dog_12->print_dog();
                std::cout << "Dog12 memory address : " << up_dog_12.get() << std::endl;

                std::cout << "up_dog_11 is now nullptr : " << up_dog_11.get() << std::endl;	
                if(up_dog_11){
                    std::cout << "Pointer11 pointing to something valid" << std::endl;
                }else{
                    std::cout << "Pointer11 point to nullptr" << std::endl;
                }	

            }
            std::cout << "Hitting the outside scope" << std::endl;
            */

        //----------------------------------------------------------------------------------
          //Can reset unique_ptr : releases memory and sets the pointer to nullptr
            //If you comment out the reset line, the destructor is called after the doing
            //something print out, if it's not commented out, we reset the pointer and the
            //destructor is called before the line : std::cout << "Doing something" << std::endl; SHOW THIS.


            std::unique_ptr<Dog> up_dog_13 = std::make_unique<Dog>("Dog13");
            up_dog_13.reset(); // releases memory and sets pointer to nullptr

            //Can use unique pointer in if statement to see if it points somewhere valid
            if(up_dog_13){
                std::cout << "up_dog_13 points somewhere valid : " << up_dog_13.get() << std::endl;
            }else{
                std::cout << "up_dog_13 points is null : " << up_dog_13.get() << std::endl;
            }






            return 0;
        }