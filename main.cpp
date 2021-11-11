#include <iostream>

#include "funcs.h"

int main() {

   //running task A
   std::cout << "Running task A:" << std::endl; 
    Coord3D P = {10, 20, 30};
    std::cout << length(&P) << std::endl << std::endl; // would print 37.4166 

    //run task B
    std::cout << "Running task B:" << std::endl; 
    Coord3D pointP = {10, 20, 30};
    Coord3D pointQ = {-20, 21, -22};

    std::cout << "Address of P: " << &pointP << std::endl;
    std::cout << "Address of Q: " << &pointQ << std::endl << std::endl;

    Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
   
    std::cout << "ans = " << ans << std::endl << std::endl; // should output address of pointP 

    //run task C
    std::cout << "Running task C:" << std::endl;
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};

    move(&pos, &vel, 2.0); 
    std::cout << pos.x << " " << pos.y << " " << pos.z << std::endl << std::endl;
    // prints: 2 -10 100.4
    
    //task E 
    std::cout << "Running task E: " << std::endl;
     //double x, y, z;

    Coord3D ppos = {10, 20, 30};
    
    std::cout << "Position Coordinate: " << (ppos).x << " " << (ppos).y << " " << (ppos).z << std::endl;
    
  
    Coord3D pvel = {5.5, -1.4, 7.77}; 
      std::cout << "Velocity Coordinate: " << (pvel).x << " " << (pvel).y << " " << (pvel).z << std::endl;

   // std::cout << (*pvel).x << " " << (*pvel).y << " " << (*pvel).z << std::endl;

    move(&ppos, &pvel, 10.0);

    std::cout << "Coordinates after 10 seconds: " 
         << (ppos).x << " " << (ppos).y << " " << (ppos).z << std::endl;

    deleteCoord3D(&ppos); // release memory
    deleteCoord3D(&pvel);


}
