namespace sw {


/**
 * Adds two things.
 */
template<typename T>
class GenericAdder
{
public:
    /**
     * Construct a GenericAdder.
     * @param value is something that gets added.
     */
    explicit GenericAdder(const T& value);

    /**
     * Add a value.
     * @param value is also something that gets added.
     * @return The addition of two things.
     */
    auto add(const T& value) const -> T;

private:
    T _value;
};


template<typename T>
GenericAdder<T>::GenericAdder(const T& value)
    : _value { value }
{}


template<typename T>
auto GenericAdder<T>::add(const T& value) const -> T
{
    return _value + value;
}

}
