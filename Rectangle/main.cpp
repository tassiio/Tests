//
// Created by tassiio on 11.10.2021.
//
#include "Rectangles.h"
using namespace std;

int main(){
    double XLL_First, YLL_First, XRU_First, YRU_First;
    double XLL_Sec, YLL_Sec, XRU_Sec, YRU_Sec;
    ifstream f("coordinates.txt");

    assert(f.is_open());

    f >> XLL_First >> YLL_First >> XRU_First >> YRU_First >> XLL_Sec >> YLL_Sec >> XRU_Sec >> YRU_Sec;


    Rectangles First_Rect(XLL_First, YLL_First, XRU_First, YRU_First);
    Rectangles Second_Rect(XLL_Sec, YLL_Sec, XRU_Sec, YRU_Sec);

    First_Rect.Intersection(Second_Rect);

    return 0;
}

