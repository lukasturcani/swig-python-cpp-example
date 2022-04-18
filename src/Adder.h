namespace sw {

class Adder
{
public:
    explicit Adder(int number);
    auto add(int number) -> int;

private:
    int _number;
};

}
