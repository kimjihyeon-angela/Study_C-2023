#pragma once
#ifndef __RECTANGL_H_
#define __RECTANGLE_H_

#include "49_Point.h"

class Rectangle
{
private:
	Point upLeft;
	Point lowRight;

public:
	bool InitMembers(const Point& ul, const Point& lr);
	void ShowRecInfo() const;
};
#endif // !__RECTANGL_H_

