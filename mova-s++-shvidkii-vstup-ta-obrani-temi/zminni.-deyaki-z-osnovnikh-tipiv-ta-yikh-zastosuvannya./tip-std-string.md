# Тип std::string

Для збереження текстових рядків можна використати тип `std::string`. Наприклад:

```cpp
std::string theMainQuestion{"To be or not to be?"};
```

Як ми бачимо, текстові рядки у С++ пишуться у **подвійних лапках**.

Не забуваймо, що для того щоб використовувати цей тип нам необхідно підключити бібілотеку `string`:

```cpp
#include <string>
```

Напишемо програму, яка питає пароль, а потім - перевіряє його і виводить результат:

```cpp
#include <iostream>
#include <string>

const std::string cMySecretPassword{"qwerty"};

int main()
{
    std::cout << "Please, enter your password:" << std::endl;

    std::string password;
    std::cin >> password;

    if (cMySecretPassword == password) 
    {
        std::cout << "The password is correct!!!" << std::endl;
    }
    else
    {
        std::cout << "The password is wrong!!!" << std::endl;
    }
}
```

