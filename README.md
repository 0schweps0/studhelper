# Проект "Управление статистикой общей оценки"

Этот проект представляет собой программу для управления и отображения общей статистики оценок студентов. Он разработан с использованием фреймворка Qt и предоставляет пользователю возможность просматривать статистику по различным предметам, а также вводить данные о студентах.

## Описание файлов проекта

### 1. `general_statistic_w.h` и `general_statistic_w.cpp`

Эти файлы содержат реализацию класса `general_statistic_w`, который является диалоговым окном для отображения общей статистики оценок. В этом окне пользователь может выбирать предмет из списка и просматривать соответствующую статистику. Для загрузки данных используются файлы CSV.

### 2. `GlobalConstants.h`

В этом файле определены глобальные константы и функции для хранения и доступа к общим данным, таким как имя, фамилия и группа студента.

### 3. `mainwindow.h` и `mainwindow.cpp`

Эти файлы содержат реализацию главного окна приложения. В главном окне пользователь может выбирать между различными действиями, такими как просмотр статистики и ввод данных о студенте.

### 4. `persona.h` и `persona.cpp`

Эти файлы содержат реализацию класса `persona`, который представляет собой диалоговое окно для ввода данных о студенте, таких как имя, фамилия и группа.

### 5. `window_data.h` и `window_data.cpp`

Эти файлы содержат реализацию класса `window_data`, который является диалоговым окном для ввода данных о студенте.

## Использование проекта

Для использования этого проекта выполните следующие шаги:

1. Запустите приложение.
2. В главном окне выберите действие: просмотр статистики или ввод данных о студенте.
3. При выборе просмотра статистики выберите предмет из списка и нажмите кнопку "Показать статистику".
4. При выборе ввода данных о студенте введите имя, фамилию и группу студента в соответствующие поля и нажмите кнопку "Сохранить".

## Зависимости

Этот проект зависит от фреймворка Qt. Убедитесь, что у вас установлен Qt для успешной сборки и запуска приложения.

## Замечания

- Перед запуском приложения убедитесь, что у вас есть соответствующие файлы CSV с данными оценок студентов.
- При вводе данных о студенте убедитесь, что вы вводите корректные значения во все поля.

## Авторы

Этот проект разработан [Попов Игорь](https://github.com/SecondYota) и [Глебов Глеб](https://github.com/0schweps0).