
#include "Caesar.h"
#include <iostream>
#include <string>



Caesar::Caesar() {}


std::string Caesar::encode(){

	char l[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'} ;
	for(std::string::size_type i=0;i<m_plain.length();i++)
	{
		char lettre = m_plain[i] ;
		for(int j=0;j<26;j++)
		{
			if (lettre == l[j])
			{
				int a;
				a = j + 3 ;
				if (a>26)
				{
					a -= 26 ;
					m_cipher[i] = l[a];
				}
				else			
					m_cipher[i] = l[a];
			}
		}

	}
	return m_cipher ;

}
/*
std::string Caesar::decode(){

	std::string l[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'} ;


}
*/
