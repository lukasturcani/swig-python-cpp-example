#include "gtest/gtest.h"
#include "src/Adder/Adder.h"


TEST(Adder, Adding)
{
    sw::Adder adder { 12 };
    EXPECT_EQ(adder.add(13), 25);
}


auto main(int argc, char* argv[]) -> int
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
