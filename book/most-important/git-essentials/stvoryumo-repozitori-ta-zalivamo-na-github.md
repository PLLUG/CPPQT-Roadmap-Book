# Створюємо репозиторій та заливаємо на GitHub

## Створюємо репозиторій

Для того щоб створити власний репозиторій — зареєструйтеся на GitHub: [https://github.com/](https://github.com/)

1. Залогінтеся, та зайдіть на головну сторінку GitHub.
2. Натисніть на конпку створення нового репозиторію. 
![](https://media.githubusercontent.com/media/PLLUG/CPPQT-Roadmap/master/storage/book/development_basics/working_with_git/github-new-repo.png)
3. Оберіть ім’я для репозиторію (*Repository name*).
![](https://media.githubusercontent.com/media/PLLUG/CPPQT-Roadmap/master/storage/book/development_basics/working_with_git/github-new-repo2.png)


## Сценарій 1: створюємо репозиторій на GitHub та клонуємо його

4. При створенні нового репозиторію оберіть *“Initialize this repository with a README”*. Це ініціалізує репозиторій та дасть змогу одразу ж клонувати його.
5. Скопіюйте адресу вашого нового репозаторію (наприклад: ```https://github.com/user/test-project.git```).             
![](https://media.githubusercontent.com/media/PLLUG/CPPQT-Roadmap/master/storage/book/development_basics/working_with_git/github-clone-repo.png)
6. Відкрийте консоль. Перейдіть у директорію де буде знаходитись ваш проект.
7. Виконайте команду git clone адреса репозиторію.
8. Перейдіть у теку репозиторія. Тепер можна розпочинати роботу.

```sh
% pwd
/home/user

% mkdir projects

% cd projects

% pwd
/home/user/projects

% git clone https://github.com/user/test-project.git
Cloning into 'test-project'...
remote: Counting objects: 3, done.
remote: Total 3 (delta 0), reused 0 (delta 0), pack-reused 0
Unpacking objects: 100% (3/3), done.
Checking connectivity... done.

% ls
test-project

% cd test-project 

% ls
README.md
```
У наведеному вище прикладі ми:
* Вивели поточну директорію
* Створили у поточній директорії нову теку з назвою projects
* Перейшли у теку projects
* Вивели поточну директорію ще раз для перевірки де ми знаходимось
* Клонували наш репозиторій Git
* Переглянули список директорій, щоб побачити, як називається директорія нашого Git  репозиторію
* Перейшли в теку репозиторію 
* Вивели список файлів у теці репозиторію

## Сценарій 2: створюємо репозиторій локально та зв'язуємо з віддаленим на GitHub

## Створюємо програму, "комітимо"(_commit_) зміни

Тепер відкриємо консоль та перевіримо статус репозиторію за допомогою команди ```git status```:

```sh
% git status
On branch master
Your branch is up-to-date with 'origin/master'.
Untracked files:
  (use "git add <file>..." to include in what will be committed)

        main.cpp
        test-project.pro

nothing added to commit but untracked files present (use "git add" to track)
```

Ми бачимо, що ми маємо кілька файлів, які не є під контролем Git (*Untracked files*).  Додамо ці файли до наступного коміту з допомогою команди ```git add```:

```sh
% git add main.cpp test-project.pro 
% git status
On branch master
Your branch is up-to-date with 'origin/master'.
Changes to be committed:
  (use "git reset HEAD <file>..." to unstage)

        new file:   main.cpp
        new file:   test-project.pro
```

Тепер ми бачимо, що файли з нашого проекту будуть додані до наступного коміту (*Changes to be committed*). 

Тепер ми зробити коміт з допомогою команди  ```git commit -m “коментар”```.

```sh
% git commit -m "Added project files."
[master 275127f] Added project files.
 3 files changed, 90 insertions(+)
 create mode 100644 main.cpp
 create mode 100644 test-project.pro
 ```
 
Для того, щоб завантажити (“залити”) зміни на GitHub (на віддалений репозиторій), виконаємо команду ```git push```. Під час виконання цієї команди вам необхідно буде ввести свій логін та пароль до GitHub.

```sh
% git push
Username for 'https://github.com': user
Password for 'https://user@github.com': 
Counting objects: 5, done.
Delta compression using up to 8 threads.
Compressing objects: 100% (5/5), done.
Writing objects: 100% (5/5), 913 bytes | 0 bytes/s, done.
Total 5 (delta 0), reused 0 (delta 0)
To https://github.com/user/test-project.git
   fef3301..275127f  master -> master
```

> **Для викладача: Візуальне демо для розуміння того що відбулося**
> [https://learngitbranching.js.org/?NODEMO](https://learngitbranching.js.org/?NODEMO)
> Сценарій демо:
> ```reset
> git clone
> git commit
> git commit
> git push
> git commit
> git commit
> git fakeTeamwork
> git fakeTeamwork
> git push
> git pull
> git push```
