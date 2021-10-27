//
// Created by tassiio on 11.10.2021.
//

#ifndef RECTANGLE_RECTANGLES_H
#define RECTANGLE_RECTANGLES_H

#include <iostream>
#include <fstream>
#include <cassert>

using namespace std;

class Rectangles {
private:
    double R_X_left_lower;
    double R_Y_left_lower;
    double R_X_right_upper;
    double R_Y_right_upper;

public:
    Rectangles(double x_LL, double y_LL, double x_RU, double y_RU);
    void Intersection(const Rectangles &Sec) const;
};


#endif //RECTANGLE_RECTANGLES_H
