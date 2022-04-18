#include "src/Adder.h"

namespace sw {

Adder::Adder(int number)
    : _number { number }
{}


auto Adder::add(const int number) const -> int
{
    return _number + number;
}

}
