/*
 * main.cpp
 *
 *  Created on: Oct 10, 2017
 *      Author: cheyenne
 */

#include <iostream>
#include <algorithm>

class Rectangle
{
private:
    // coordinates of bottom left corner
    int leftX_;
    int bottomY_;

    // dimensions
    int width_;
    int height_;

public:
    Rectangle() :
        leftX_(0),
        bottomY_(0),
        width_(0),
        height_(0)
    {
    }

    Rectangle(int leftX, int bottomY, int width, int height) :
        leftX_(leftX),
        bottomY_(bottomY),
        width_(width),
        height_(height)
    {
    }

    int getLeftX() const
    {
        return  leftX_;
    }

    int getBottomY() const
    {
        return  bottomY_;
    }

    int getWidth() const
    {
        return  width_;
    }

    int getHeight() const
    {
        return  height_;
    }

    bool operator==(const Rectangle& other) const
    {
        return
            leftX_ == other.leftX_
            && bottomY_ == other.bottomY_
            && width_ == other.width_
            && height_ == other.height_;
    }

    bool operator!=(const Rectangle& other) const
    {
        return !(*this == other);
    }

    Rectangle& getLoveRectangle(Rectangle& p1, Rectangle& p2){

    		int leftX = std::max(p1.getLeftX(), p2.getLeftX());
    		if ((leftX >= (p1.getLeftX() + p1.getWidth())) | (leftX >= (p2.getLeftX() + p2.getWidth()))) {
    				std::cout << "Error: Rectangles don't overlap" << std::endl;
    				return p1;
    		}

    		int width = std::min(p1.getLeftX() + p1.getWidth() , p2.getLeftX() + p2.getWidth()) - leftX;

    		int bottomY = std::max(p1.getBottomY(), p2.getBottomY());
    		if (bottomY >= p1.getBottomY() + p1.getHeight() | bottomY >= p2.getBottomY() + p2.getHeight())  {
				std::cout << "Error: Rectangles don't overlap" << std::endl;
				return p1;
		}

    		int height = std::min(p1.getBottomY() + p1.getHeight(), p2.getBottomY() + p2.getHeight()) - bottomY;

    		Rectangle overlap(leftX, bottomY, width, height);

    		return overlap;
    }
};

int main (int argc, char ** argv){
	Rectangle person1(-1, 0, 2, 4);
	Rectangle person2(1, -1, 2, 2);

	Rectangle temp(0, 0, 0, 0);
	Rectangle love = temp.getLoveRectangle(person1, person2);

	std::cout << "Left X:   " << love.getLeftX() << std::endl;
	std::cout << "Bottom Y: " << love.getBottomY() << std::endl;
	std::cout << "Width:    " << love.getWidth() << std::endl;
	std::cout << "Height:   " <<love.getHeight() << std::endl;
}



