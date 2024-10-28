#include "CreditCardPayment.h"

#include <stdio.h>

CreditCardPayment::CreditCardPayment()
{
}

CreditCardPayment::~CreditCardPayment()
{
}

void CreditCardPayment::Pay(int amount)
{
	printf_s("クレジットカードでの支払い金額: %d円\n", amount);
}
