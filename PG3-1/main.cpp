#include <stdio.h>

template <typename T1, typename T2>
class Comparator {
public:
    T1 a;
    T2 b;

    Comparator(T1 a, T2 b) : a(a), b(b) {}

    auto Min() -> decltype((a < b) ? a : b) {
        return (a < b) ? a : b;
    }
};

int main() {
    Comparator<int, int> num1(30, 20);
    Comparator<int, float> num2(20, 20.5f);
    Comparator<int, double> num3(10,50.4 );
    Comparator<float, float> num4(23.f, 30.7f);
    Comparator<float, double> num5(60.4f, 30.5);
    Comparator<double, double> num6(10.9, 27.9);

    printf("（int + int）: %d\n", num1.Min());
    printf("（int + float）: %.2f\n", num2.Min());
    printf("（int + double）: %.2f\n", num3.Min());
    printf("（float + float ）: %.2f\n", num4.Min());
    printf("（float + double）: %.2f\n", num5.Min());
    printf("（double + double）: %.2f\n", num6.Min());

    return 0;
}