#include <iostream>
using namespace std;

class Shape
{

public:
    void draw()
    {
        cout << "Generaic Drawing" << endl;
    }
};

class Circle : public Shape
{

public:
    void draw()
    {
        cout << "circle Drawing" << endl;
    }
};

class Rec : public Shape
{

public:
    void draw()
    {
        cout << "rectangle Drawing" << endl;
    }
};

void ShapeDrawing(Shape *s)
{
    s->draw();
}
int main()
{

    Circle c;
    Rec r;
    // Rectangle r;
    ShapeDrawing(&c);
    ShapeDrawing(&r);
    // c.draw();
    return 0;
}