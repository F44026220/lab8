#include <iostream> 
#include <cstdlib> 
#include <ctime> 
#include "genMino.h"
#include <new>
using namespace std; 

int main() 
{ 
 Mino* mino_ptr; 
 
 srandom(time(NULL)); 
 for(int i=0;i<50;++i) 
 {
  try { 
     mino_ptr = genMino();
    } catch (bad_alloc & Badalloc) {
          cout<<Badalloc.what()<<endl;
          cout<<"codes work!"<<endl;
          exit(1);
         } 
  //mino_ptr->paint(); 
  //delete mino_ptr; 
 }
 
 return 0; 
} 
