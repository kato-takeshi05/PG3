#include<stdio.h>
template <typename T>

class Min {
private:
    T a, b;

public:
    
    Min(T x, T y) : a(x), b(y) {}

    
    T Min() {
        return (a < b) ? a : b;
    }
};

int main() {

   

    return 0;
}