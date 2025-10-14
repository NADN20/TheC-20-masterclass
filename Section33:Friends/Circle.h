class Point{

public : 
Point() = delete ; 

Point(int x , int y) : point_x{x} , point_y{y} ; 

private: 
int point_x {0} ; 
int point_y {0} ; 
};