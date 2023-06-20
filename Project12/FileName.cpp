#include <QApplication>
#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    // Создание главного окна
    QWidget* window = new QWidget();
    window->setWindowTitle("Морской бой");

    // Создание сетки для размещения элементов управления
    QGridLayout* layout = new QGridLayout();

    // Создание меток для отображения игрового поля
    QLabel* playerLabel = new QLabel("Ваше поле:");
    QLabel* enemyLabel = new QLabel("Поле противника:");

    // Создание кнопок для расстановки кораблей
    QPushButton* ship1Button = new QPushButton("Разместить корабль длиной 1 клетку");
    QPushButton* ship2Button = new QPushButton("Разместить корабль длиной 2 клетки");
    QPushButton* ship3Button = new QPushButton("Разместить корабль длиной 3 клетки");
    QPushButton* ship4Button = new QPushButton("Разместить корабль длиной 4 клетки");

    // Создание кнопок для выстрелов
    QPushButton* shootButton = new QPushButton("Выстрелить");

    // Добавление элементов управления на сетку
    layout->addWidget(playerLabel, 0, 0);
    layout->addWidget(enemyLabel, 0, 1);
    layout->addWidget(ship1Button, 1, 0);
    layout->addWidget(ship2Button, 2, 0);
    layout->addWidget(ship3Button, 3, 0);
    layout->addWidget(ship4Button, 4, 0);
    layout->addWidget(shootButton, 5, 0, 1, 2);

    // Установка сетки в качестве макета для главного окна
    window->setLayout(layout);

    // Отображение главного окна
    window->show();

    return app.exec();
}