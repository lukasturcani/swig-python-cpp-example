#include <iostream>
#include "src/Adder.h"


auto main() -> int
{
    sw::Adder my_adder { 13 };
    std::cout << "I've added: "  << my_adder.add(32) << std::endl;
    return 0;
}
