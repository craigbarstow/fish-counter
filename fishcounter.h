#ifndef FISHCOUNTER_H
#define FISHCOUNTER_H

#include <QMainWindow>

namespace Ui {
class FishCounter;
}

class FishCounter : public QMainWindow
{
    Q_OBJECT

public:
    explicit FishCounter(QWidget *parent = 0);
    ~FishCounter();

private slots:
    void on_clearBtn_clicked();
    void on_upBtn_clicked();
    void on_downBtn_clicked();
    void on_upSpinBox_valueChanged(int newValue);
    void on_downSpinBox_valueChanged(int newValue);

private:
    Ui::FishCounter *ui;
    void setDownstreamCount(int count);
    void setUpstreamCount(int count);
    int _upCount;
    int _downCount;
};

#endif // FISHCOUNTER_H
