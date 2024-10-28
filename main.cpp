#include <stdio.h>

#include "CreditCardPayment.h"

/*
 *NOTE:	支払い方法がポリモーフィズムとして成立していると思たので、
 *		支払いクラスから派生させたクレジットカードクラスを作成しました
 */

int main()
{
	CreditCardPayment creditCardPayment;
	printf_s("ポリモーフィズムが成立している関係: 支払い\n");
	printf_s("\n/* 実例 */\n");
	creditCardPayment.Pay(1000);

	return 0;
}
