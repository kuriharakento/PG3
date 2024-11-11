#pragma once
#include "IShape.h"
class Circle : public IShape
{
public:
	//オーバーライド
	void Initialize(Vector2 size) override;
	void Size() override;
	void Draw() override;
};

