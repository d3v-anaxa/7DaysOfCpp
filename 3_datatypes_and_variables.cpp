#include <iostream>
int main(void){
    std::cout
        << "There are 3 types of datatypes in c/c++: \n"
        << "\t1. Primitive/Built-in Datatypes\n"
        << "\t2. Derived Datatypes\n"
        << "\t3. Abstract/User-defined Datatypes"
        <<  "\n";

    std::cout
        << "List of primitive datatypes : \n"
        << "\t1. Integer \t| Size : " << sizeof(int) << " byte(s) \t| Range : " << (1 << 30) + ((1 << 30) - 1) << " to " << (1 << 31) << "\n" 
                                                                                /*this has been done to eliminate the overflow warning*/
        << "\t1. Char \t| Size : " << sizeof(char) << " byte(s) \t| Range : " << (char) 0 << " to " << (char)(1 << 8 - 1) << "\n";
    return 0;
}


