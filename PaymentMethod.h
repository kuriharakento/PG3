#pragma once

//基底クラス
class PaymentMethod
{
public: //メンバ関数
	/**
	 * \brief コンストラクタ
	 */
	PaymentMethod();
	/**
	 * \brief デストラクタ
	 */
	~PaymentMethod();

	virtual void Pay(int amount) = 0;
	
};

