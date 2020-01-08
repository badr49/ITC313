


#ifndef  _CAESAR_H_
#define _CAESAR_H_

#include "Encrypt.h"
#include <string>


class Caesar: public Encrypt {

public:

    Caesar();

    std::string encode();

    std::string decode();

};

#endif
