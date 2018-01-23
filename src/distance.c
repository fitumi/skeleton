#include "distance.h"

#include <math.h>

static double sqr(double x) {
    return x * x;
}

double get_distance(Point a, Point b) {
    const double sq_sub_x = sqr(b.x - a.x);
    const double sq_sub_y = sqr(b.y - a.y);

    return sqrt(sq_sub_x + sq_sub_y);
}
