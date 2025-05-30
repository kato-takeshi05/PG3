#pragma once

// Circleクラス
class Circle : public IShape
{
public:
    //コンストラクタ
    Circle(float r) : radius(r) { name = "円"; }
    //デストラクタ
    virtual ~Circle() {}
    ///面積の計算
    virtual void Size() override {
        float area = 3.14159f * radius * radius;
        printf("%s 面積: %.2f\n", name, area);
    }
    //描画
    virtual void Draw() override {
        printf("半径%.2fの%s\n",  radius, name);
    }

private:
    //半径
    float radius;
};

