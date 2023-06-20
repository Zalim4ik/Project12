#include <QApplication>
#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    // �������� �������� ����
    QWidget* window = new QWidget();
    window->setWindowTitle("������� ���");

    // �������� ����� ��� ���������� ��������� ����������
    QGridLayout* layout = new QGridLayout();

    // �������� ����� ��� ����������� �������� ����
    QLabel* playerLabel = new QLabel("���� ����:");
    QLabel* enemyLabel = new QLabel("���� ����������:");

    // �������� ������ ��� ����������� ��������
    QPushButton* ship1Button = new QPushButton("���������� ������� ������ 1 ������");
    QPushButton* ship2Button = new QPushButton("���������� ������� ������ 2 ������");
    QPushButton* ship3Button = new QPushButton("���������� ������� ������ 3 ������");
    QPushButton* ship4Button = new QPushButton("���������� ������� ������ 4 ������");

    // �������� ������ ��� ���������
    QPushButton* shootButton = new QPushButton("����������");

    // ���������� ��������� ���������� �� �����
    layout->addWidget(playerLabel, 0, 0);
    layout->addWidget(enemyLabel, 0, 1);
    layout->addWidget(ship1Button, 1, 0);
    layout->addWidget(ship2Button, 2, 0);
    layout->addWidget(ship3Button, 3, 0);
    layout->addWidget(ship4Button, 4, 0);
    layout->addWidget(shootButton, 5, 0, 1, 2);

    // ��������� ����� � �������� ������ ��� �������� ����
    window->setLayout(layout);

    // ����������� �������� ����
    window->show();

    return app.exec();
}