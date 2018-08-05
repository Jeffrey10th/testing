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

    //two definitions to start it all!
    int i = 100, &r1 = i;
    double d1 = r1;
    d1 += 0.5;

    r1 = 101; //equivalent to i = 101

    int &r2 = r1; //test if pointers can be assigned to another pointer

    std::cout << i << " " << d1 << " " << r2 << std::endl; 

    return 0;

}