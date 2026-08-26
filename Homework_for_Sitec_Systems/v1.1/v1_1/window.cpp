#include "window.h"
#include <QPushButton>
#include <QMessageBox>
#include <QDebug>
#include <QImage>
#include <QtGui>
#include <QLabel>
#include <QPixmap>
#include <ctime>
using namespace std;

Window::Window(QWidget *parent) :
    QWidget(parent)
{
    // Create and set size of the window
    setFixedSize(450, 300);

    // Create and position buttons
    m_button1 = new QPushButton("Show a sentence", this);
    m_button1->setGeometry(50, 10, 110, 30);

    m_button2 = new QPushButton("Show a picture", this);
    m_button2->setGeometry(170, 10, 110, 30);

    m_button3 = new QPushButton("Close the app", this);
    m_button3->setGeometry(290, 10, 110, 30);

    m_button4 = new QPushButton("Hello!", this);
    m_button4->setGeometry(170, 60, 110, 30);

    connect(m_button1, &QPushButton::clicked, this, &Window::button1Clicked );
    connect(m_button2, &QPushButton::clicked, this, &Window::button2Clicked );
    connect(m_button3, &QPushButton::clicked, this, &Window::button3Clicked );
    connect(m_button4, &QPushButton::clicked, this, &Window::button4Clicked );
}

void Window::button1Clicked() {
    void button1Clicked();
    QMessageBox msgBox(this);
    msgBox.setText("Sam ate his breakfast");
    msgBox.exec();
}

void Window::button2Clicked() {
    void button2Clicked();
    QImage myImage;
    QLabel *myLabel = new QLabel();
    myLabel->setGeometry(50, 280, 600, 800);
    myImage.load("Mona_Lisa.jpg");


    myLabel->setPixmap(QPixmap::fromImage(myImage));

    myLabel->show();
}

void Window::button3Clicked() {
    void button3Clicked();
    close();
}

void Window::button4Clicked() {
    void button4Clicked();

    time_t timestamp;
    time(&timestamp);

    QLabel *label = new QLabel(this);
    label->move(10, 150);
    string time = ctime(&timestamp);
    QString sentence = "Hello\nI'm an app!\nCurrent time and date is ";
    label->setText(sentence.append(time));

    label->show();
}
