#include "fishcounter.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FishCounter w;
    w.show();

    return a.exec();
}
