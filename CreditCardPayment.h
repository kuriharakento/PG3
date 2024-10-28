#pragma once
#include "PaymentMethod.h"

class CreditCardPayment : public PaymentMethod
{
public:
	/**
	 * \brief コンストラクタ
	 */
	CreditCardPayment();
	/**
	 * \brief デストラクタ
	 */
	~CreditCardPayment();

	void Pay(int amount) override;
};

