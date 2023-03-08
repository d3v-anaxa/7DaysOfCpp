#include <iostream>
int main(void){
    // constants : creates a read-only variable
    const int n{0b100101};

    // Manipulators
    std::cout 
        << "Manipilators without arguments : "
        <<  "endl, ws, ends, flush, hex, dec, oct\n";

    std::cout 
        << "Manipulators with arguments : "
        << "setw(<width-length>), setfill(<char>), setprecision(<value>), setbase(<radix>), setiosflags(<flags>), resetiosflags(<flags>)\n";

    std::cout 
        << "Other important manipulators : "
        << "showpos, noshowpos, showbase, uppercase, nouppercase, fixed, scientific, left, right\n";
}
