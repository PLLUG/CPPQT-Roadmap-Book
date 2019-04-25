# Очистка проекту

Звичайно, створені у процесі компіляції проміжні файли не є безпосередньою частиною проекту. Вони були згенеровані, та будуть перезаписуватися за потреби під час компіляції. Тому не варто додавати їх до .pro-файлу чи робити будь які зміни у них. Також не варто їх додавати до системи контролю версій, якщо її використовують під час розробки.

Іноді згенеровані файли, разом з об'єктними та make-файлами, буває необхідно видалити. Це необхідно робити перед тим як заархівувати проект для збереження \(якщо Shadow Build вимкнено\), оскільки згенеровані файли займають досить багато місця на диску у порівнянні з обсягом вихідного коду. Часом також можуть виникати проблеми з компіляцією, коли після значних змін у структурі програми проміжні файли не були досить добре заново згенеровані. У таких випадках виникає потреба очистити проект. Для цього, виберіть у головному меню _**Build-&gt; Clean Projec**_t \(_Побудова проекту-&gt;Очистити проект_\). Це дозволить видалити згенеровані файлі, крім скомпільованого виконуваного файлу та make-файлів.

Для того щоб очистити проект повністю, необхідно змінити деякі налаштування. Відкрийте розділ _**Projects**_ та у розділі _**Clean Steps**_ \(_Кроки для очистки_\) натисніть на кнопку _**Details**_ \(_Детал_і\) та змініть параметр _**Make arguments**_ \(_Аргументи make_\) з `clean` на `distclean`

Знову очистіть проект — усі згенеровані файли, включно з виконуваним файлом та make-файлами, будуть видалені.
