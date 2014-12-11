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


void MainWindow::on_pbAddS_clicked()
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

//    ScienceService.addScientist(additionalScientist);

    ui->txtNameS->clear();
    ui->edtDobS->clear();
    ui->edtDodS->clear();
}

void MainWindow::on_pbAddC_clicked()
{
    Computer additionalComputer = Computer();

    std::string BRAND = "";
    BRAND = ui->edtBrand->text().toStdString();
    additionalComputer.brand = BRAND;

    std::string TYPE = "";
    TYPE = ui->edtType->text().toStdString();
    additionalComputer.type = TYPE;

    std::string YEAR = "";
    YEAR = ui->edtYear->text().toStdString();
    additionalComputer.year = YEAR;

    std::string BUILT;

    if(ui->checkBox_2){
        BUILT = "Yes";
    }else BUILT = "No";
    additionalComputer.built = BUILT;

    //scienceService.addComputer(additionalComputer);

    ui->edtBrand->clear();
    ui->edtType->clear();
    ui->edtYear->clear();
}







