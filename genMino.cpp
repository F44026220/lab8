#include <cstdlib> 
#include "genMino.h" 
#define NUM_MINO 4 
#define MINO_S 0 
#define MINO_I 1 
#define MINO_L 2 
#define MINO_T 3 

Mino* genMino() 
{ 
 int mino_type; 
 Mino* ptr; 
 
 mino_type = random() % NUM_MINO; 
 
 switch(mino_type) { 
    case MINO_S: 
       ptr = new MinoS[50000000]; 
       break; 
    case MINO_I: 
       ptr = new MinoI[50000000]; 
       break; 
    case MINO_L: 
       ptr = new MinoL[50000000]; 
       break; 
    case MINO_T: 
       ptr = new MinoT[50000000]; 
       break; 
 } 
 return ptr; 
} 
