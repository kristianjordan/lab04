#include "../header/rectangle.hpp"

// implementing constructor with no
// parameters
Rectangle::Rectangle()
{
	this->width = 0;
	this->height = 0;
}

// implementing constructor that takes
// height and width as parameters 
Rectangle::Rectangle(int w, int h)
{
	this->width = w;
	this->height = h;
}

int Rectangle::perimeter()
{
	return 2*(height + width);
}

int Rectangle::area()
{
	return (width * height);
}

void Rectangle::set_width(int w) {
        this->width = w;
}

void Rectangle::set_height(int h) {
        this->height = h;
}


