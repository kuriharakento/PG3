#pragma once
class Enemy
{
public: // メンバ関数
	/**
	 * \brief フェーズ
	 */
	enum class Phase
	{
		Approach,
		Shoot,
		Leave,
	};

	/**
	 * \brief 初期化
	 */
	void Initialize();

	/**
	 * \brief 更新
	 */
	void Update();

	/**
	 * \brief 接近行動
	 */
	void Approach();

	/**
	 * \brief 攻撃行動
	 */
	void Shoot();

	/**
	 * \brief 離脱行動
	 */
	void Leave();

public: //アクセッサ

	bool IsAlive() const
	{
		return isAlive;
	}

private: // メンバ変数
	//現在のフェーズ
	Phase phase;

	/**
	 * \brief フェーズごとの関数テーブル
	 */
	static void (Enemy::* spFuncTable[])();

	bool isAlive = true;

};

