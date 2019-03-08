# Тип bool

Цей тип зберігає результат деякого твердження \(істинність чи хибність\). Наприклад:

```cpp
#include <iostream>

int main()
{
    std::cout << std::boolalpha; // Необхідно, щоб значення bool виводилися словами.
    
    bool isThreeIsGreaterThanFive{3 > 5};
    std::cout << "Is 3 > 5 : " << isThreeIsGreaterThanFive << std::endl;
    
    bool isThreeIsLessThanFive{3 < 5};
    std::cout << "Is 3 < 5 : " << isThreeIsLessThanFive << std::endl;
    
    bool isThreeEqualFive{3 == 5};
    std::cout << "Is 3 == 5 : " << isThreeEqualFive << std::endl;
    
    bool isThreeEqualThree{3 == 3};
    std::cout << "Is 3 == 3 : " << isThreeEqualThree << std::endl;
    
    bool isThreeNotEqualFive{3 != 5};
    std::cout << "Is 3 != 5 : " << isThreeNotEqualFive << std::endl;
}
```

Як ми бачимо, результатом порівняння \(оператори більше `>`, більше або дорівнює `>=`, меньше`<`, меньше або дорівнює `<=`, дорівнює `==`, не рівно `!=`\) є значення типу `bool`.

Також до двох значень типу `bool` можна застосовувати оператори: заперечення `!` \(яке перетворює `true` у `false` та `false` у `true`\), логічне "АБО" `||` \(результатом якого є `true` якщо хоча б один з операндів містить `true`\), лоігчне "І" `&&` \(результатом якого є `true` якщо усі операнди містять `true`\). Наприклад:

| Вираз | Результат |
| :---: | :--- |
| `!true` | `false` |
| `!false` | `true` |
| `false || false` | `false` |
| `true || false` | `true` |
| `true && false` | `false` |
| `true && true` | `true` |
| `true && !false` | `true` |
| `(true && !false) || false` | `true` |

