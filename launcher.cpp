
#include <iostream>
#include "DLA.h"
using std::cout;


int main(int argc, char **argv){
  DLA A(5);
  
  for(int k = 0; k< 5; k++){
    for(int j = 0; j<5; j++){
      cout << A.tab()[k][j] << "\n";
    }
  }
  
}
