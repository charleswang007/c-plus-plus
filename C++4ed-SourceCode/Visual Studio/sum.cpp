//=============================================
// C++ Programming in easy steps 4ed. [8:149]
//=============================================

#include "C:/Users/Mike/Desktop/ops.h" // Adjust path to suit.
#include <iostream> // Added for system("PAUSE"); only.

// Client

int main()
{
  Calculator* pCalc = new Calculator ;

  pCalc -> launch() ;

  while ( pCalc -> run() )
  {
    pCalc -> readInput() ;
    pCalc -> writeOutput() ;
  }
  system("PAUSE");
  return 0 ;
}
