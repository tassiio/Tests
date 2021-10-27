//
// Created by tassiio on 11.10.2021.
//

#include "Rectangles.h"

Rectangles::Rectangles(double x_LL, double y_LL, double x_RU, double y_RU)
        : R_X_left_lower(x_LL), R_Y_left_lower(y_LL), R_X_right_upper(x_RU), R_Y_right_upper(y_RU) {
}

void Rectangles::Intersection(const Rectangles &Sec) const {
    bool flag = false;

    if ((Sec.R_X_left_lower <= R_X_left_lower) && (R_X_left_lower <= Sec.R_X_right_upper) &&
        ((Sec.R_Y_left_lower <= R_Y_right_upper) && (R_Y_right_upper <= Sec.R_Y_right_upper)))
        flag = true;

    if (((Sec.R_X_left_lower <= R_X_left_lower) && (R_X_left_lower <= Sec.R_X_right_upper)) &&
        ((Sec.R_Y_left_lower <= R_Y_left_lower) && (R_Y_left_lower <= Sec.R_Y_right_upper)))
        flag = true;

    if (((Sec.R_X_left_lower <= R_X_left_lower) && (R_X_left_lower <= Sec.R_X_right_upper)) &&
        ((Sec.R_Y_left_lower <= R_Y_right_upper) && (R_Y_right_upper <= Sec.R_Y_right_upper)))
        flag = true;

    if (((Sec.R_X_left_lower <= R_X_right_upper) && (R_X_right_upper <= Sec.R_X_right_upper)) &&
        ((Sec.R_Y_left_lower <= R_Y_left_lower) && (R_Y_left_lower <= Sec.R_Y_right_upper)))
        flag = true;

    if (flag)
        cout << "Rectangles intersect." << endl;
    else
        cout << "Rectangles don't intersect." << endl;
}

