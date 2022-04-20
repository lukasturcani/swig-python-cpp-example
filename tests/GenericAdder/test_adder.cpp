#include <string>
#include "gtest/gtest.h"
#include "src/GenericAdder/GenericAdder.h"


TEST(GenericAdder, AddingInts)
{
    sw::GenericAdder<int> adder { 12 };
    EXPECT_EQ(adder.add(13), 25);
}


TEST(GenericAdder, AddingStrings)
{
    sw::GenericAdder<std::string> adder { "prefix" };
    EXPECT_EQ(adder.add({"-suffix"}), std::string{"prefix-suffix"});
}


auto main(int argc, char* argv[]) -> int
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
