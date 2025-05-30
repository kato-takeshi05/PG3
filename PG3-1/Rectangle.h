#pragma once

// RectAngleクラス
class RectAngle : public IShape
{
public:
    //コンストラクタ
    RectAngle(float w, float h) : width(w), height(h) { name = "短径"; }
    //デストラクタ
    virtual ~RectAngle() {}
    ///面積の計算
    virtual void Size() override {
        float area = width * height;
        printf("%s 面積: %.2f\n", name, area);
    }
    //描画
    virtual void Draw() override {
        printf("幅 %.2f　高さ%.2fの%s\n", width, height, name);
    }

private:
    float width;
    float height;
};