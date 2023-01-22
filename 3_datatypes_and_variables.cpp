#include <iostream>
#include <bitset>
void function();
void display();

int main(void){
    std::cout
        << "There are 3 types of datatypes in c/c++: \n"
        << "\t1. Primitive/Built-in Datatypes\n"
        << "\t2. Derived Datatypes\n"
        << "\t3. Abstract/User-defined Datatypes\n"
        <<  "\n";

    std::cout
        << "List of primitive datatypes : \n"
        << "\t1. Integer \t| Size : " << sizeof(int)   << " byte(s) \t| Range : "  << (1 << 30) + ((1 << 30) - 1) /*this has been done to eliminate the overflow warning*/ << " to " << (1 << 31) << "\n" 
        << "\t2. Char    \t| Size : " << sizeof(char)  << " byte(s) \t| Range : "  << (char) 0 << " to " << (char)(1 << 8 - 1) << "\n"
        << "\t3. Boolean \t| Size : " << sizeof(bool)  << " byte(s) \t| Values : " << std::boolalpha << true << " and " << false << "\n"
        << "\t4. Float   \t| Size : " << sizeof(float) << " byte(s) \t| Range : "  << (float) (1 << 30) + ((1 << 30) - 1) << " to " << (float)(1 << 31) << "\n"
        << "\t5. Double   \t| Size : " << sizeof(double) << " byte(s) \t| Range : "  << (double) (1 << 30) + ((1 << 30) - 1) << " to " << (double)(1 << 31) << "\n"
        << "\n";

    std::cout
        << "List of derived datatypes : \n"
        << "\t1. Function : " 
        << "A function is a block of code or program-segment that is defined to perform a specific well-defined task." << "\n"
        << "\t2. Array : " 
        << "An array is a collection of items stored at continuous memory locations." << "\n"
        << "\t3. Pointer : " 
        << "Pointers are symbolic representation of addresses. They enable programs to simulate call-by-reference as well as to create and manipulate dynamic data structures. " << "\n"
        << "\t4. Reference : " 
        << "When a variable is declared as reference, it becomes an alternative name for an existing variable. A variable can be declared as reference by putting ‘&’ in the declaration." << "\n"
        << "\n";

    std::cout
        << "List of abstract datatypes : \n"
        << "\t1. Class : "
        << "The building block of C++ that leads to Object-Oriented programming is a Class. It is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class."
        << "\n"
        << "\t2. Structure : "
        << "A structure is a user defined data type in C/C++. A structure creates a data type that can be used to group items of possibly different types into a single type."
        << "\n"
        << "\t3. Union : "
        << "Like Structures, union is a user defined data type. In union, all members share the same memory location. For example in the following C program, both x and y share the same location. If we change x, we can see the changes being reflected in y."
        << "\n"
        << "\t4. Enumeration : "
        << "Enumeration (or enum) is a user defined data type in C. It is mainly used to assign names to integral constants, the names make a program easy to read and maintain."
        << "\n"
        << "\t5. Typedef : "
        << "C++ allows you to define explicitly new data type names by using the keyword typedef. Using typedef does not actually create a new data class, rather it defines a name for an existing type. This can increase the portability(the ability of a program to be used across different types of machines; i.e., mini, mainframe, micro, etc; without much changes into the code)of a program as only the typedef statements would have to be changed. Using typedef one can also aid in self-documenting code by allowing descriptive names for the standard data types."
        << "\n"
        << "\n";


    function();
    display();
    return 0;
}

// function
void function(){std::cout << "This is a function" << "\n";}

// array
int arr[] = {1, 2, 3, 4, 5};

// pointer
int *ptr = &arr[0];

// reference
int var = 10;
int &ref = var;

// class
class newClass {
        int val = 0b1011;
    public:
        void display(){ std::cout << "This is a class with priv. value : " << this->val << "\n"; };
};

// structure
struct newStruct{
    int n;
    std::string str;
};

// union
union newUnion {
    long long unsigned int x, y;
};

// enumeration
enum newEnum { n1 = 0x1ff1, n2 = 01771};


void display(){
    std::cout 
        << "Pointer : " << ptr << "\n"
        << "Length fo array : " << sizeof(arr)/sizeof(arr[0]) << "\n"
        << "Reference : " << &ref << "\n"
        << "\n";

    newClass abc;
    abc.display();

    newStruct mno;
    mno.n = 0b1010101010;
    mno.str = "This is a structure";
    std::cout 
        << mno.str << "\n"
        << "Number stored inside newStruct : " << mno.n << "\n";

    newUnion efg = {0xab21ba};
    std::cout << std::hex << "[Before union value] : " << efg.y << "\n";
    efg.y = {0b10100};
    std::cout << "[After union value] : " << std::bitset<8>{efg.x} << "\n";

    enum newEnum xyz;
    xyz = n2;
    std::cout << std::oct << "Enum prev val : " << xyz << "\n";
    xyz = n1;
    std::cout << std::hex << "Enum after val : " << xyz << "\n";
}
