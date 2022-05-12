#include "src/ArrayHolder/ArrayHolder.h"

namespace sw {


ArrayHolder::ArrayHolder(
    std::size_t array_size
)
    : _array(array_size)
{}


auto ArrayHolder::get_array() -> Array
{
    return Array{ _array.data(), _array.size() };
}


auto ArrayHolder::set_memory_to_int32() -> void
{
    std::size_t array_size { _array.size() / sizeof(std::int32_t) };
    int32_t* int_array { reinterpret_cast<std::int32_t*>(_array.data()) };
    for (std::size_t i { 0 }; i < array_size; ++i)
    {
        int_array[i] = i;
    }
}

}
