#pragma once
/// <summary>
/// 基底クラス　男
/// </summary>
class Man
{
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	Man();
	/// <summary>
	/// デストラクタ
	/// </summary>
	virtual ~Man();


	
protected:
	const char* name;
};