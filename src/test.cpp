/*
 * The contnts of this file may be overwritten at any time!
 */

#include <iostream>
#include "utils/polygon.h"

using namespace cura;


/*!
 * Test whether polygon.inside(point) returns correct results.
 */
int test_poly_inside()
{
    Polygon poly;
    poly.add(Point(0,0));
    poly.add(Point(100,0));
    poly.add(Point(100,100));
    poly.add(Point(50,50));
    poly.add(Point(0,100));
    
    std::cerr << poly.inside(Point(76,75)) << std::endl;
}


int main(int argc, char **argv)
{
    test_poly_inside();
}