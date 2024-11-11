#include "Circle.h"

#include <stdio.h>

void Circle::Initialize(Vector2 size)
{
	size_ = size;
	printf_s("Circle width: %.2f, height: %.2f\n", size_.x, size_.y);
}

void Circle::Size()
{
	area_ = size_.x * size_.y * 3.14f;
}

void Circle::Draw()
{
	printf_s("Circle area: %.2f\n", area_);
}
