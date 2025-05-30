#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"

int main()
{
    Circle circle(5.0f);       
    RectAngle rect(4.0f, 3.0f);

    circle.Draw();
    circle.Size();

    rect.Draw();
    rect.Size();

    return 0;
}
