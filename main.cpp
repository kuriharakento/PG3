#include <stdio.h>

#include "Circle.h"
#include "Rectangle.h"

int main()
{
	/*------------------[ 円 ]--------------------*/

	//生成
	Circle circle;
	circle.Initialize({ 10.0f, 10.0f });
	//面積の計算
	circle.Size();
	//描画
	circle.Draw();

	/*------------------[ 矩形 ]--------------------*/

	//生成
	Rectangle rectangle;
	rectangle.Initialize({ 15.0f, 7.0f });
	//面積の計算
	rectangle.Size();
	//描画
	rectangle.Draw();

	return 0;
}
