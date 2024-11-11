#pragma once
#include "IShape.h"
class Rectangle : public IShape
{
public:
	//オーバーライド
	void Initialize(Vector2 size) override;
	void Size() override;
	void Draw() override;
};

