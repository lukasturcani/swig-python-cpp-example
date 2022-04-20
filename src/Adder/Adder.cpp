#include "src/Adder/Adder.h"

namespace sw {

Adder::Adder(const int number)
    : _number { number }
{}


auto Adder::add(const int number) const -> int
{
    return _number + number;
}

}
