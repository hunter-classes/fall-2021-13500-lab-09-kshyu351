#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here


TEST_CASE("task A"){
    Coord3D point = {9, 10, 11};
    CHECK(length(point) == 17.378147196982766); 
}