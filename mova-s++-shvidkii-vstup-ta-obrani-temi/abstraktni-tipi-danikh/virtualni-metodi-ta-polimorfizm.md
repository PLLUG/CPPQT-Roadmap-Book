# Віртуальні методи та поліморфізм

## Віртуальні методи

Розглянемо клас Shape з методом name\(\) оголошений та визначений наступним чином:

```cpp
class Shape
{
public:
    virtual std::string name() const;
};

std::string Shape::name() const
{
    return "Shape";
}
```

У цьому випадку, метод `Shape::name()` оголошено з ключовим словом `virtual`. Метод `Shape::name()` є **віртуальним методом**. Зверніть увагу, що ключове слово `virtual` використовують тільки при оголошенні методу класу \(а не при визначенні реалізації методу\). Для того, щоб продемонструвати, що дає віртуальний метод, успадкуємо від нього клас Circle:

```text
class Circle : public Shape
{
public:
    Circle(double radius)
        : mRadius{radius} {}

    virtual std::string name() const override
    {
        return "Circle";
    }

private:
    double mRadius;
};
```

Зверніть увагу: метод Circle::name\(\) - віртуальний та перевизначений у класі Circle. Це означає, що коли ми створимо об'єкти відповідних класів, та викличемо метод name\(\) - те, який з методів name\(\) буде викликано \(класу-батька чи класу-нащадка\) буде визначено в процесі роботи програми в залежності від того, об'єкт якого класу це є.

Для того щоб пояснити сказане вище розглянемо приклад:

```cpp
int main()
{  
  Circle c1{10.0};
  Shape &circleRef = c1;
  std::cout << circleRef.name() << std::endl;

  Shape s1;
  Shape &shapeRef = s1;
  std::cout << shapeRef.name() << std::endl;
}
```

Якщо запустити цю програму, то ми побачимо наспупний вивід:

```text
Circle
Shape
```

Тобто незважаючи на те, що circleRef це посилання на Shape, у процесі роботи програми було викликано саме метод Circle::name\(\), а не Shape::name\(\).

Якщо би метод Shape::name\(\) не був би віртуальним, то при виклику shapeRef.name\(\) викликався би метод Shape::name\(\) і ми би отримали вивід:

```text
Shape
Shape
```

Таким чином: Виклик віртуального методу визначається динамічно в залежності від класу об'єкту. Клас який містить віртуальні методи називають поліморфним класом.

Навіщо нам потрібні віртуальні методи ми побачимо в кінці цього розділу. А зараз підсумуємо те, як можна створити віртуальний метод:

## Абстрактні класи та чисто віртуальні методи

```text
#include <math.h> // Include header for doing math

class Shape
{
public:
    virtual std::string name() const
    {
        return "Shape";
    }

    virtual double area() const = 0; // Pure virtual method
};
```

```text
double Rectangle::area() const
{
    return mWidth * mHeight;
}

double Circle::area() const
{
    return M_PI * mRadius * mRadius;
}
```

## Поліморфізм

```text
void printArea(const Shape& shape)
{
    std::cout << "Area of " << shape.name()
        << " is " << shape.area() << std::endl;
}
```

```text
int main()
{
    Circle circle{3.0};
    Rectangle rect{5.0, 6.0};

    // Функція printArea  може працювати як з об'єктом Circle так і з об'єктом Rectangle
    printArea(circle);
    printArea(rect);
}
```

## Корисні посилання

[http://isblog.com.ua/2012-12\_virtual\_functions\_in\_cpp](http://isblog.com.ua/2012-12_virtual_functions_in_cpp)

