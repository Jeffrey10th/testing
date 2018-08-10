#include <iostream>

/*  
 * Program to test references, pointers and variables.
 * Copyright (C) 2018 Jeff Tan Han Wei
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.

*/

int main() {

    //reassigning references (how error-prone!) and pointers 

    int twenty = 20;
    int fifty = 50;
    int &reference_twenty = twenty;

    //instead of a_reference = 10; we TRY it the smart way: using the address-of operator as we did when declaring a reference 
    //&reference_twenty = fifty; 
    
    //all objects that is to-be defined to the pointer must include the & operator (address-of)
    int *pointer = &twenty;
    *pointer = fifty;  

    std::cout << pointer << std::endl;  

}