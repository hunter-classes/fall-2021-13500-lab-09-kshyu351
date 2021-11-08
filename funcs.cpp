#include <iostream>
#include "funcs.h"
#include <math.h>

// add functions here

//task A
double length(Coord3D *p) { 
    
    double len = ((p->x) * (p->x)) + ((p->y) * (p->y)) + ((p->z)*(p->z)); 
    len = sqrt(len);
    return len; 
}

//task B 
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2) { 

    double len1 = length(p1); 
    double len2 = length(p2); 
    if (len1 > len2) { 
        return p1;
    }
    else { 
        return p2; 
    }
}

//task C 
void move(Coord3D *ppos, Coord3D *pvel, double dt) { 
    ppos->x =  x + (pvel->x) * dt; 
    ppos->y =  y + (pvel->) * dt; 
    ppos->z =  z + (pvel->z) * dt; 

} 






