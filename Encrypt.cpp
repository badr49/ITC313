
#include "Encrypt.h"

#include <string>
#include <iostream>
#include <fstream>




Encrypt::Encrypt() {}


std::string Encrypt::getP(){
	return m_plain;
}

std::string Encrypt::getC(){
	return m_cipher;
}




bool Encrypt::read(bool isPlain, std::string filename){

	std::ifstream flux(filename.c_str()); 
	std::string line ;
	std::string display ;

	if(flux){

		while(getline(flux, line)){
			display += line ;
		}
		std::cout << display << std::endl;
    
}
else{

    std::cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << std::endl;
    return false; 
}
if (isPlain)
{
	m_plain = display ;
}
else {
	m_cipher = display ;
}
return true ;
}




bool Encrypt::write(bool isPlain, std::string filename){

	std::ofstream flux(filename.c_str());
	if(flux){

    	flux << "si vous lisez et comprennez ceci!" << std::endl ;
    	flux << "------______-_-_-_-_-_-_--------_-_-_--______------_--" << std::endl ;
    	
    	if(isPlain){
    		flux << m_plain << std::endl ;
    	}
    	else
    		flux << m_cipher << std::endl ;
	return true ;
	}
else
{
    std::cout << "ERREUR: Impossible d'ouvrir le fichier." << std::endl;
    return false;
}
}

void Encrypt::encode(){
	
	m_cipher += "\n" + m_plain ;
}

void Encrypt::decode(){

	m_plain  += "\n" + m_cipher ;
}