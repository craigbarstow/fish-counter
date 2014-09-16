#include "fishcounter.h"
#include "ui_fishcounter.h"

FishCounter::FishCounter(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FishCounter)
{
    ui->setupUi(this);
    _upCount = 0;
    _downCount = 0;
}

//testchange 

FishCounter::~FishCounter()
{
    delete ui;
}

void FishCounter::on_clearBtn_clicked()
{
    _upCount = 0;
    _downCount = 0;
    setUpstreamCount(_upCount);
    setDownstreamCount(_downCount);
}

void FishCounter::on_upBtn_clicked()
{
    _upCount+=1;
    setUpstreamCount(_upCount);
}

void FishCounter::on_downBtn_clicked()
{
    _downCount+=1;
    setDownstreamCount(_downCount);
}

void FishCounter::setUpstreamCount(int count){
    ui->upSpinBox->setValue(count);
}

void FishCounter::setDownstreamCount(int count){
    ui->downSpinBox->setValue(count);
}

void FishCounter::on_upSpinBox_valueChanged(int newValue)
{
    _upCount = newValue;
}



void FishCounter::on_downSpinBox_valueChanged(int newValue)
{
    _downCount = newValue;
}
