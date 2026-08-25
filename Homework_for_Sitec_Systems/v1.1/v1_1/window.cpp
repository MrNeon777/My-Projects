#include "window.h"
#include <QPushButton>
#include <QMessageBox>
#include <QDebug>

Window::Window(QWidget *parent) :
    QWidget(parent)
{
    // Create and set size of the window
    setFixedSize(450, 300);

    // Create and position buttons
    m_button1 = new QPushButton("Hello World", this);
    m_button1->setGeometry(10, 10, 80, 30);

    m_button2 = new QPushButton("Hello World", this);
    m_button2->setGeometry(110, 10, 80, 30);

    m_button3 = new QPushButton("Hello World", this);
    m_button3->setGeometry(210, 10, 80, 30);

    connect(m_button1, &QPushButton::clicked, this, &Window::button1Clicked );
}

void Window::button1Clicked() {
    void button1Clicked();
    QMessageBox msgBox(this);
    msgBox.setText("The document has been modified.");
    msgBox.exec();
}
