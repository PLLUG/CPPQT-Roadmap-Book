# Підготовка до роботи

## Перевіряємо чи встановлено Git

Для встановлення Git:

* **Windows** —  завантажте та розпакуйте на диск С: нашу спеціальну суперконсоль **MSYS2\_Cmder** \(читайте про встановлення[ у відповідному розділі](../pidgotovka-do-roboti.-komandnii-ryadok./robota-z-git-ta-komandnim-ryadkom.md#vstanovlennya)\) 
* **Mac OS X** — достатньо скачати   інсталяційний   пакет   на   офіційному   сайті: [https://git-scm.com/downloads](https://git-scm.com/downloads).   
* **Linux** — скористайтеся пакетним менеджером: [https://git-scm.com/download/linux](https://git-scm.com/download/linux).

Після встановлення відкрийте консоль \(Linux та Mac OS\). У Windows запустіть консоль виконавши `c:\MSYS2_Cmder\cmder.exe` або з допомогою іконки **GitBash** у головному меню \(якщо встановлювали [Git for Windows](https://git-scm.com/downloads) окремо самостійно\). Виконайте команду `git --version`. Якщо встановлення пройшло успішно — ви побачите вивід з версією Git.

```bash
~ git --version
git version 2.16.2
```

Звичайно, ваша версія Git може відрізнятися. Але це не впливатиме на нашу роботу, оскільки інструкції наведені тут працюватимуть зі всіма останніми версіями.

## Налаштування інформації про користувача

Після встановлення, нам необхідно вказати власне ім'я та поштову скриньку, які Git буде використовувати в історії версій. Для цього виконайте наступні команди замінивши `User Name` та `user@mail.com` на власні ім'я та поштову адресу.

```bash
 git config --global user.name "User Name"
 git config --global user.email "user@mail.com"
```

{% hint style="info" %}
**Корисні посилання**

* Git Magic \(укр. переклад\) \(перші 3 розділи рекомендовані до ознайомлення\) [http://www-cs-students.stanford.edu/~blynn/gitmagic/intl/uk/](http://www-cs-students.stanford.edu/~blynn/gitmagic/intl/uk/)
* Visual Guide to Version Control [http://betterexplained.com/articles/a-visual-guide-to-version-control/](http://betterexplained.com/articles/a-visual-guide-to-version-control/)
{% endhint %}

