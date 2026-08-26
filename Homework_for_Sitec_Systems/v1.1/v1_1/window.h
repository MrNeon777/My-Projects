#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>

class QPushButton;
class Window : public QWidget
{
public:
    explicit Window(QWidget *parent = 0);

private:
    QPushButton *m_button1;
    QPushButton *m_button2;
    QPushButton *m_button3;
public slots:
    void button1Clicked();
    void button2Clicked();
    void button3Clicked();
};

#endif // WINDOW_H