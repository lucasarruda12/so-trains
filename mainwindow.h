#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "trem.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


public slots:
    void updateInterface(int,int,int);

private slots:
    void on_trem1_scroll_sliderMoved(int position);
    void on_trem2_scroll_sliderMoved(int position);
    void on_trem3_scroll_sliderMoved(int position);
    void on_trem4_scroll_sliderMoved(int position);
    void on_trem5_scroll_sliderMoved(int position);


private:
    Ui::MainWindow *ui;

    //Cria os objetos TREM's
    Trem* trens[2];
    Track* tracks[2];
};

#endif // MAINWINDOW_H
