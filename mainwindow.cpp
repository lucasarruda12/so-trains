#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Cria referencias para os trilhos da GUI
    tracks[0] = new Track(ui->trilho1->x(), ui->trilho1->y(), ui->trilho1->width(), ui->trilho1->height());
    tracks[1] = new Track(ui->trilho2->x(), ui->trilho2->y(), ui->trilho2->width(), ui->trilho2->height());
    tracks[2] = new Track(ui->trilho3->x(), ui->trilho3->y(), ui->trilho3->width(), ui->trilho3->height());
    tracks[3] = new Track(ui->trilho4->x(), ui->trilho4->y(), ui->trilho4->width(), ui->trilho4->height());
    tracks[4] = new Track(ui->trilho5->x(), ui->trilho5->y(), ui->trilho5->width(), ui->trilho5->height());

    //Cria o trem com seu (ID, posição X, posição Y) e trilho!
    for (int i = 0; i < 5; i++){
        trens[i] = new Trem(i, tracks[i]);

        /*
         * Conecta o sinal UPDATEGUI à função UPDATEINTERFACE.
         * Ou seja, sempre que o sinal UPDATEGUI foi chamado, será executada a função UPDATEINTERFACE.
         * Os 3 parâmetros INT do sinal serão utilizados na função.
         * Trem1 e Trem2 são os objetos que podem chamar o sinal. Se um outro objeto chamar o
         * sinal UPDATEGUI, não haverá execução da função UPDATEINTERFACE
         */

        connect(trens[i],SIGNAL(updateGUI(int,int,int)),SLOT(updateInterface(int,int,int)));

        trens[i]->start();
    }
}

//Função que será executada quando o sinal UPDATEGUI for emitido
void MainWindow::updateInterface(int id, int x, int y){
    switch(id){
    case 0: //Atualiza a posição do objeto da tela (quadrado) que representa o trem1
        ui->trem1->setGeometry(x,y,20,20);
        break;
    case 1: //Atualiza a posição do objeto da tela (quadrado) que representa o trem2
        ui->trem2->setGeometry(x,y,20,20);
        break;
    case 2: //Atualiza a posição do objeto da tela (quadrado) que representa o trem2
        ui->trem3->setGeometry(x,y,20,20);
        break;
    case 3: //Atualiza a posição do objeto da tela (quadrado) que representa o trem2
        ui->trem4->setGeometry(x,y,20,20);
        break;
    case 4: //Atualiza a posição do objeto da tela (quadrado) que representa o trem2
        ui->trem5->setGeometry(x,y,20,20);
        break;
    default:
        break;
    }
}

MainWindow::~MainWindow()
{
    delete ui;

    for (int i = 0; i < 5; i++){
        delete trens[i];
        delete tracks[i];
    }
}

void MainWindow::on_trem1_scroll_sliderMoved(int position)
{
    trens[0]->setSpeed(position);
}

void MainWindow::on_trem2_scroll_sliderMoved(int position)
{
    trens[1]->setSpeed(position);
}

void MainWindow::on_trem3_scroll_sliderMoved(int position)
{
    trens[2]->setSpeed(position);
}

void MainWindow::on_trem4_scroll_sliderMoved(int position)
{
    trens[3]->setSpeed(position);
}

void MainWindow::on_trem5_scroll_sliderMoved(int position)
{
    trens[4]->setSpeed(position);
}

