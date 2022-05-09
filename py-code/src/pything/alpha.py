import wrappedcpp
import ctypes
import numpy as np


def add(first: int, second: int) -> int:
    return wrappedcpp.Adder.Adder(first).add(second)


def get_numpy_array(size: int) -> np.ndarray:
    num_int32_bytes = 4
    array_holder = wrappedcpp.ArrayHolder.ArrayHolder(
        size * num_int32_bytes,
    )
    array_holder.set_memory_to_int32()
    array = array_holder.get_array()
    ptr = ctypes.cast(
        int(array.pointer),
        ctypes.POINTER(ctypes.c_char),
    )
    numpy_array = np.ctypeslib.as_array(ptr, [array.size])
    numpy_array.dtype = np.int32
    return np.array(numpy_array)
