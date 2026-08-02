#include <iostream>
using namespace std;

class Box
{
    int width;
    Box(int _w) : width(_w) {};

public:
    int getWidth() const
    {
        return width;
    }
    void setWidth(int _val)
    {
        width = _val;
    }
};

class BoxFactory
{
    int count;
}
public : {
               Box getABox(int _w){
                   ++cout;
return Box(_w);
}
};

int main()
{
    // Box b(5);
    // cout << b.getWidth() << endl;

    return 0;
}