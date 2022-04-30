/****************************************************************************
* Snippets, ejemplos, y utilidades del curso de C++ orientado a videojuegos *
* https://github.com/Manu343726/CppVideojuegos/                             *
*                                                                           * 
* Copyright © 2014 Manuel Sánchez Pérez                                     *
*                                                                           *
* This program is free software. It comes without any warranty, to          *
* the extent permitted by applicable law. You can redistribute it           *
* and/or modify it under the terms of the Do What The Fuck You Want         *
* To Public License, Version 2, as published by Sam Hocevar. See            *
* http://www.wtfpl.net/  and the COPYING file for more details.             *
****************************************************************************/

#include "binary_literals.hpp"
#include "Turbo/to_string.hpp"

#include <iostream>
#include <climits>


int main()
{
    auto a = 101_b;
    auto b = 101011010101_b;
    auto c = 10101011010101010101010101_b;
    auto d = 10101011100000000111101101110111011010101010000011100010101_b;
    
    std::cout << (unsigned int)a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    
    std::cout << tml::to_string( a ) << "(" << sizeof(a)*CHAR_BIT << " bits)" << std::endl;
    std::cout << tml::to_string( b ) << "(" << sizeof(b)*CHAR_BIT << " bits)" << std::endl;
    std::cout << tml::to_string( c ) << "(" << sizeof(c)*CHAR_BIT << " bits)" << std::endl;
    std::cout << tml::to_string( d ) << "(" << sizeof(d)*CHAR_BIT << " bits)" << std::endl;
}


