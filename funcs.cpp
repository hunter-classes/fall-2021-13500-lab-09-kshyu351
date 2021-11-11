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
void move(Coord3D *ppos, Coord3D *pvel, double dt) {   //3,4,5 //6,7,8 /21, 25, 29

    ppos->x =  ppos->x + pvel->x * dt; 
    ppos->y =  ppos->y + pvel->y * dt; 
    ppos->z =  ppos->z + pvel->z * dt; 

} 
//task E 

Coord3D* createCoord3D(double x, double y, double z) { 
   
   // Coord3D* pointer = new Coord3D;
    Coord3D* pointer = new Coord3D{x,y,z};
    
    return pointer;

}


void deleteCoord3D(Coord3D *p) { 
    if(p != nullptr) { 
        delete p;
    }  
}








