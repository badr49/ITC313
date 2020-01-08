

#include "Encrypt.h"
#include <iostream>


int main(){

Encrypt TEXT ;
std::string filename = "badr" ;

//std::cout << 1 << std::endl ;
TEXT.write(false, filename) ;
//std::cout << 2 << std::endl ;
TEXT.read(true, filename);
//std::cout << 3 << std::endl ;
//std::cout << TEXT.getP() << std::endl ;



return 0;
}