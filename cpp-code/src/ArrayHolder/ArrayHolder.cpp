#include "src/ArrayHolder/ArrayHolder.h"

namespace sw {


ArrayHolder::ArrayHolder(
    std::size_t array_size
)
    : _pointer { std::make_unique<std::byte[]>(array_size) }
    , _size { array_size }
{}


auto ArrayHolder::get_array() const -> Array
{
    return Array{ _pointer.get(), _size };
}


auto ArrayHolder::set_memory_to_int32() -> void
{
    std::size_t array_size { _size / sizeof(int32_t) };
    int32_t* int_array { reinterpret_cast<int32_t*>(_pointer.get()) };
    for (std::size_t i { 0 }; i < array_size; ++i)
    {
        int_array[i] = i;
    }
}

}
