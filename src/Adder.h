namespace sw {

class Adder
{
public:
    explicit Adder(const int number);
    auto add(const int number) const -> int;

private:
    int _number;
};

}
