#pragma once
#include <cstdint>

struct Vector2
{
	float x;
	float y;
};

class IShape
{
public:
	/**
	 * \brief 初期化
	 * \param size サイズ
	 */
	virtual  void Initialize(Vector2 size) = 0;

	/**
	 * \brief 面積を求める
	 */
	virtual void Size() = 0;

	/**
	 * \brief 値を表示する
	 */
	virtual void Draw() = 0;
protected:
	//サイズ
	Vector2 size_ = {};

	//面積
	float area_ = 0.0f;
};

