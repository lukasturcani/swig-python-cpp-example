import wrappedcpp


def add(first: int, second: int) -> int:
    return wrappedcpp.Adder.Adder(first).add(second)
