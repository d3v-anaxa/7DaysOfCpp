#include <iostream>
int main(void){
    std::cout 
        << "Comments : "
        << "A comment is text that the compiler ignores but that is useful for programmers. Comments are normally used to annotate code for future reference. The compiler treats them as white space.\n"
        // single line comment
        << "Escape sequence : "
        << "They are primarily used to put nonprintable characters in character and string literals. For example, you can use escape sequences to put such characters as tab, carriage return, and backspace into an output stream.\n";
        /*
         * Multi - line
         * comment
         */
    return 0;
}
