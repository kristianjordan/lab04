#include "../header/rectangle.hpp"
#include "gtest/gtest.h"

TEST(Constructors, EmptyConstructor) {
	Rectangle rectangle;
	EXPECT_EQ(0, rectangle.area()); // expect area to be equal to 0
					// since constructor sets height
					// and width to 0
}

TEST(Constructors, ConstructorWithParams) {
        Rectangle rectangle(2, 4);

        EXPECT_EQ(8, rectangle.area()); // expect area to be equal to 8
                                        // since constructor sets width and
                                        // height to 2 and 4 respectively
}
                                        
TEST(Perimeter, PerimeterTest) {
        Rectangle rectangle;
	rectangle.set_width(3);
	rectangle.set_height(6);
        EXPECT_EQ(18, rectangle.perimeter()); // set height to 6 and width to 3
					      // expect perimeter to be 18
					      // since perimeter = 2(l + w)
}

TEST(Area, AreaTest) {
        Rectangle rectangle;
	rectangle.set_width(7);
	rectangle.set_height(7);
        EXPECT_EQ(49, rectangle.area()); // set height and width to 7, area should
					 // be 49. area = l*w or, in this case 7*7
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
