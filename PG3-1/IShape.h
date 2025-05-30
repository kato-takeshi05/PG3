#pragma once
#include <cstdio>
#include <cmath>


class IShape
{
public:
    //デストラクタ
    virtual ~IShape() = 0; 
    ///面積の計算
    virtual void Size() = 0;
    //描画
    virtual void Draw() = 0;

protected:
    const char* name;
};

inline IShape::~IShape() {}  
