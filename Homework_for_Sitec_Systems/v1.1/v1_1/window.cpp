#include "window.h"
#include <QPushButton>

Window::Window(QWidget *parent) :
    QWidget(parent)
{
    // Create and set size of the window
    setFixedSize(450, 300);

    // Create and position buttons
    m_button = new QPushButton("Hello World", this);
    m_button->setGeometry(10, 10, 80, 30);

    m_button = new QPushButton("Hello World", this);
    m_button->setGeometry(110, 10, 80, 30);

    m_button = new QPushButton("Hello World", this);
    m_button->setGeometry(210, 10, 80, 30);
}