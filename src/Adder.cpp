#include "src/Adder.h"

namespace sw {

Adder::Adder(int number)
    : _number { number }
{}


auto Adder::add(int number) -> int
{
    return _number + number;
}

}
