#include <stdio.h>

//NOTE:今回はメインでクラスを作成する。
template <typename T>
class Comparator
{
public:
	//メンバ変数
	T a_, b_;

	//コンストラクタ
	Comparator(T a, T b) : a_(a), b_(b) {}

	//メンバ関数
	T Min()
	{
		return a_ < b_ ? a_ : b_;
	}

};

int main()
{
	/*-------[ 変数の宣言 ]-------*/

	Comparator<int> intComp(10, 20);
	Comparator<float> floatComp(20.5f, 10.5f);
	Comparator<double> doubleComp(33.333, 1.111);

	/*-------[ 出力 ]-------*/

	printf("int型の最小値は%d\n", intComp.Min());
	printf("float型の最小値は%f\n", floatComp.Min());
	printf("double型の最小値は%f\n", doubleComp.Min());

	return 0;
}