#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_rbFemaleS_clicked()
{
    ui->pbAddS->setEnabled(true);
}

void MainWindow::on_rbMaleS_clicked()
{
    ui->pbAddS->setEnabled(true);
}

void MainWindow::on_rbBothS_clicked()
{
  ui->pbAddS->setEnabled(false);
}

void MainWindow::on_pbAddC_clicked()
{
    Scientist additionalScientist = Scientist();

    std::string NAME = "";
    NAME = ui->txtNameS->text().toStdString();
    additionalScientist.name = NAME;

    std::string DOB = "";
    DOB = ui->edtDobS->text().toStdString();
    additionalScientist.dateOfBirth = DOB;

    std::string DOD = "";
    DOD = ui->edtDodS->text().toStdString();
    additionalScientist.dateOfDeath = DOD;

    std::string GENDER;
    if(ui->rbFemaleS){
        GENDER = "Female";
    }else GENDER = "Male";

    if(ui->rbMaleS){
        GENDER = "Male";
    }else GENDER = "Female";

    additionalScientist.gender=GENDER;

    ui->txtNameS->clear();
    ui->edtDobS->clear();
    ui->edtDodS->clear();
}








