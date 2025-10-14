#include "person.h"
#include "player.h"


 std::ostream& operator<<(std::ostream& out, const Player& player){
    out <<"Player [ Game : "  << player.m_game << " Name :" <<player.get_first_name() <<" " << player.get_last_name()<< "]" ;

    return out ;}


 