# Успадкування


```cpp
class Shape
{
public:
    Shape() : mX{0.0}, mY{0.0} { }
    Shape(double x, double y) : mX{x}, mY{y} { }

    double x() const { return mX; }
    double y() const { return mY; }
private:
    double mX;
    double mY;
};
```


```cpp
class Rectangle : public Shape
{
public:
    Rectangle(double x, double y, double width, double height)
        : Shape(x, y), mWidth{width}, mHeight{height} {}

    double width() const { return mWidth; }
    double height() const { return mHeight; }

private:
    double mWidth;
    double mHeight;
};

class Circle : public Shape
{
public:
    Circle(double x, double y, double radius)
        : Shape(x, y), mRadius{radius} {}

    double radius() const { return mRadius; }
    
private:
    double mRadius;
};
```

```cpp
int main()
{
    Circle circle{0.0, 0.0, 3.0};
    std::cout << circle.x() << circle.y() << circle.radius() << std::endl;

    Rectangle rect{0.0, 0.0, 5.0, 6.0};
    std::cout << rect.x() << rect.y() << rect.width() << rect.height() << std::endl;
}
```