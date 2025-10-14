#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>
#include <iostream>
#include "person.h"  

class Player : public Person 
{
friend std::ostream& operator<<(std::ostream& out, const Player& player);
public:
Player()=default;
Player(std::string& first_name_param) ; 
~Player();

private:
std::string m_game {"None"} ;
};

#endif  // _PLAYER_H_ 

