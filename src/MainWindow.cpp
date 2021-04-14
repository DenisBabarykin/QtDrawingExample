#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QPainter>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QPixmap *pix = new QPixmap(500, 500);
    QPainter paint(pix);
    paint.fillRect(0, 0, 500, 500, QBrush(QColor(Qt::GlobalColor::white)));
    paint.setPen(*(new QColor(255, 34, 255, 255)));
    paint.drawRect(15, 15, 100, 100);
    paint.setPen(QColor(Qt::GlobalColor::red));
    paint.drawLine(10, 10, 300, 300);
    paint.drawPoint(450, 450);
    paint.drawText(250, 200, "Red text");
    ui->label->setPixmap(*pix);
}
