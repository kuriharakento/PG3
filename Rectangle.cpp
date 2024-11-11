#include "Rectangle.h"

#include <stdio.h>

void Rectangle::Initialize(Vector2 size)
{
	size_ = size;
	printf_s("Rectangle width: %.2f, height: %.2f\n",size_.x,size_.y);
}

void Rectangle::Size()
{
	area_ = size_.x * size_.y;
}

void Rectangle::Draw()
{
	printf_s("Rectangle area: %.2f\n", area_);
}
