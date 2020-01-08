

#include "Caesar.h"
#include <iostream>
#include <string>



int main(){

	Caesar DA ;
	Encrypt DE ;
	DA.write(false, "text_to_encode") ;
	//DA.getP() = DE.getP() ;
	std::cout << DA.getP() << std::endl ;
	DA.encode();



	//std::cout << DA.getP() << std::endl ;
	std::cout << "---------------------------------------------------------------------------------" << std::endl ;
	std::cout << DA.getC() << std::endl ;







	return 0;
}