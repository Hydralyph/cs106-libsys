#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    QScrollArea *scrollField = ui->scrollArea;
    QVBoxLayout *scrollAlign = new QVBoxLayout();
    QFrame *inner = new QFrame();
    inner->setLayout(scrollAlign);
    scrollField->setWidget(inner);


//    scrollAlign->addLayout(ui->Entry_1);
//    scrollAlign->addLayout(ui->Entry_2);


for (int i = 0; i < 10; i++) {
    QGridLayout *Template = new QGridLayout();
    QLabel *Image = new QLabel();
    QLabel *Title = new QLabel();
    QLabel *Author = new QLabel();
    QLabel *Desc = new QLabel();
    Image->setText("lol");
    Title->setText("lol");
    Author->setText("lol");
    Desc->setText("lol");

    Template->addWidget(Image,0,0);
    Template->addWidget(Title,0,1);
    Template->addWidget(Author,1,1);
    Template->addWidget(Desc,2,1);
    scrollAlign->addLayout(Template);





};





}

MainWindow::~MainWindow()
{
    delete ui;
}


