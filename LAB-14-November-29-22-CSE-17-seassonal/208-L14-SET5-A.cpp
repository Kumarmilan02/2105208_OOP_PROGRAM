#include<iostream>
using namespace std;

class Triangle
{
private:
    float base;
    float height;

public:
    // Getter methods
    float getBase()
    {
        return base;
    }
    float getHeight()
    {
        return height;
    }

    // Setter methods
    void setBase(float b)
    {
        base = b;
    }
    void setHeight(float h)
    {
        height = h;
    }

    // Method to calculate area of triangle
    float areaTri()
    {
        return (base * height) / 2;
    }
};

int main()
{
    Triangle t;

    t.setBase(10);
    t.setHeight(15);

    cout << "Base of triangle is: " << t.getBase() << endl;
    cout << "Height of triangle is: " << t.getHeight() << endl;
    cout << "Area of triangle is: " << t.areaTri() << endl;

    return 0;
}