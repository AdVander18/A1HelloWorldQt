#include "MainWindow.h"
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // Центральный виджет
    QWidget *central = new QWidget(this);
    setCentralWidget(central);

    QVBoxLayout *layout = new QVBoxLayout(central);

    // Надпись
    m_label = new QLabel("Hello World?!", this);
    m_label -> setAlignment(Qt::AlignCenter);
    layout->addWidget(m_label);
    // Кнопка
        m_button = new QPushButton("Click to me!!", this);
    layout->addWidget(m_button);
    // Сигнал нажатия кнопок со слотом(?)
    connect(m_button, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
    // Заголовок окна
    setWindowTitle("Hello World");
}

MainWindow::~MainWindow(){

}

void MainWindow::onButtonClicked(){
    m_label->setText("The Button is clicked!");
}
