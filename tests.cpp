#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

//compare Coord3D objects function 
   bool compare(Coord3D* a, Coord3D* b) { 
       bool test=false;
        if((a->x == b->x) && (a->y == b->y) && (a->z == b->z)) { 
            test= true;
        }
    return test;
    }

TEST_CASE("task A"){

    Coord3D point = {9, 10, 11};
    CHECK(length(&point) == 17.378147196982766); 
}

TEST_CASE("task B"){

    Coord3D pointP = {10, 20, 30};
    Coord3D pointQ = {-20, 21, -22};
    Coord3D *p = &pointP; 
    Coord3D *q = &pointQ;
    CHECK(fartherFromOrigin(p, q) == p); 

}

TEST_CASE("task C"){

 

    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};

    move(&pos, &vel, 2.0);
    Coord3D sol = {2, -10, 100.4};
    Coord3D* s = &sol; 
    Coord3D* p = &pos; 

    CHECK(p->x == s->x);
    CHECK(p->y == s->y);
    CHECK(p->z == s->z);
    
    
    CHECK(compare(s, p) == true);

    Coord3D pos2 = {10, 20, 30};
    Coord3D vel2 = {5.5, -1.4, 7.77};

    move(&pos2, &vel2, 10);

    Coord3D sol2 = {65, 6, 107.7};

    Coord3D* s2 = &sol2; 
    Coord3D* p2 = &pos2; 
    
    CHECK(p2->x == s2->x);
    CHECK(p2->y == s2->y);
    CHECK(p2->z == s2->z);

    CHECK(compare(s2, p2) == true);


}
