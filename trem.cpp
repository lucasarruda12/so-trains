#include "trem.h"
#include <QtCore>

//Construtor
Trem::Trem(int ID, int x, int y, Track* track){
    this->ID = ID;
    this->x = x;
    this->y = y;
    this->track = track;
    velocidade = 100;
}

Trem::Trem(int ID, Track* track){
    this->ID = ID;
    this->x = track->get_origin_x();
    this->y = track->get_origin_y();
    this->track = track;
    this->velocidade = 25;
}

void Trem::setSpeed(int speed){
    this->velocidade = speed;
}

//Função a ser executada após executar trem->START
void Trem::run(){
    // menos 5 ou 15 para compensar o tamanho do trem
    int min_x = track->get_origin_x() - 5;
    int min_y = track->get_origin_y() - 5;
    int max_x = track->get_origin_x() + track->get_width() - 15;
    int max_y = track->get_origin_y() + track->get_height() - 15;

    while(true){
        if (velocidade == 0) continue;

        if (y == min_y && x < max_x)
            x+=10;
        else if (x == max_x && y < max_y)
            y+=10;
        else if (x > min_x && y == max_y)
            x-=10;
        else
            y-=10;

        if (x > max_x) x = max_x;
        if (x < min_x) x = min_x;
        if (y > max_y) y = max_y;
        if (y < min_y) y = min_y;

        emit updateGUI(ID, x,y);    //Emite um sinal
        msleep(60 - velocidade);
    }
}




