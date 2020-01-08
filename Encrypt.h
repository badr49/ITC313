

#ifndef ENCRYPT_H
#define ENCRYPT_H


#include <string>
#include <iostream>
#include <fstream>





class Encrypt {

public:

    Encrypt();

    std::string getP() ;

    std::string getC() ;

    bool read(bool isPlain, std::string filename);

    bool write(bool isPlain, std::string filename);

    void encode();

    void decode();

protected:

    std::string m_plain;

    std::string m_cipher;

};
#endif