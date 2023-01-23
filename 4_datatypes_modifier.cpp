#include <iostream>
int main(void)
{
    std::cout
        << "short : " << sizeof(short) << " byte(s)\n"
        << "signed : " << sizeof(signed) << " byte(s)\n"
        << "long : " << sizeof(long) << " byte(s)\n"
        << "long long : " << sizeof(long long) << " byte(s)\n"
        << "unsigned short : " << sizeof(unsigned short) << " byte(s)\n"
        << "unsigned : " << sizeof(unsigned) << " byte(s)\n"
        << "unsigned long : " << sizeof(unsigned long) << " byte(s)\n"
        << "unsigned long long : " << sizeof(unsigned long long) << " byte(s)\n"
        << "\n";
}