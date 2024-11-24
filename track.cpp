#include "track.h"

Track::Track(int origin_x, int origin_y, int width, int height){
    this->origin_x = origin_x;
    this->origin_y = origin_y;
    this->width = width;
    this->height = height;
}

int Track::get_origin_x(){
    return this->origin_x;
}

int Track::get_origin_y(){
    return this->origin_y;
}

int Track::get_width () {
    return this->width;
}

int Track::get_height () {
    return this->height;
}
