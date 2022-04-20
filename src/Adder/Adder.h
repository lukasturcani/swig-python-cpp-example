namespace sw {


/**
 * Adds numbers.
 */
class Adder
{
public:
    /**
     * Construct an Adder.
     * @param number is a number which gets added.
     */
    explicit Adder(const int number);

    /**
     * Add a number.
     * @param number is a number which also gets added.
     * @return The sum of two numbers.
     */
    auto add(const int number) const -> int;

private:
    int _number;
};

}
