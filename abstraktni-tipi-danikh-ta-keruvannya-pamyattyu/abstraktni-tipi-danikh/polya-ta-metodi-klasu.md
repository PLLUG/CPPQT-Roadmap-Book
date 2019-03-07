# Поля та методи класу

## Поля класу

```cpp
class Date
{
    char mDay;
    char mMounth;
    int mYear;
};
```

## Конструктор

```cpp
class Date
{
public:
    Date() : mDay{-1}, mMounth{-1}, mYear{-1} { }

    Date(char day, char mounth, char year)
        : mDay{day}, mMounth{mounth}, mYear{year} { }

private:
    char mDay;
    char mMounth;
    int mYear;
};
```

```cpp
class Date
{
public:
    Date() : mDay{-1}, mMounth{-1}, mYear{-1} { }

    Date(char day, char mounth, char year)
        : mDay{day}, mMounth{mounth}, mYear{year} { }

    char day() const;
    char month() const;
    char year() const;

    void setDay(char day);
    void setMounth(char mounth);
    void setYear(char year);

private:
    char mDay;
    char mMounth;
    int mYear;
};
```

```cpp
class Date
{
public:
    Date() : mDay{-1}, mMounth{-1}, mYear{-1} { }

    Date(char day, char mounth, char year)
        : mDay{day}, mMounth{mounth}, mYear{year} { }

    char day() const;
    char month() const;
    char year() const;

    void setDay(char day);
    void setMounth(char mounth);
    void setYear(char year);

private:
    char mDay;
    char mMounth;
    int mYear;
};
```

```cpp
void Date::setDay(char day)
{
    mDay = day;
}

void Date::setMounth(char mounth)
{
    mMounth = mounth;
}

void Date::setYear(char year)
{
    mYear = year;
}
```

```cpp
char Date::day() const 
{ 
    return mDay; 
}

char Date::month() const 
{ 
    return mMounth; 
}

char Date::year() const 
{ 
    return mYear; 
}
```

