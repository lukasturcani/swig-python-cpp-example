#include <iostream>


auto add_two_numbers(const int a, const int b) -> int
{
    return a + b;
}


auto main() -> int
{
    std::cout
        << "Hello, world! Sum is "
        << add_two_numbers(1, 2)
        << std::endl;
    return 0;
}
