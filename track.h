#ifndef TRACK_H
#define TRACK_H

class Track {
public:
    Track(int, int, int, int);
    int get_origin_x();
    int get_origin_y();
    int get_width();
    int get_height();

private:
    int origin_x;
    int origin_y;
    int width;
    int height;
};

#endif // TRACK_H
