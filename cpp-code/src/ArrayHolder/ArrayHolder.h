#include <cstddef>
#include <cstdint>
#include <vector>

namespace sw {


struct Array
{
public:
    std::byte* pointer { nullptr };
    std::size_t size { 0 };
};

/**
 * Provides some arrays to Python.
 */
class ArrayHolder
{
public:
    /**
     * Construct a ArrayHolder.
     */
    ArrayHolder(std::size_t array_size);


    /**
     * Get the data for an array.
     */
    auto get_array() -> Array;
    auto set_memory_to_int32() -> void;

private:

    std::vector<std::byte> _array;

};

}
