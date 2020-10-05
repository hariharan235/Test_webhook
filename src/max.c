/** \file max.c
 *  Max source file
 */

// Includes
#include "max.h"

/*! \fn int max(int param1, int param2)
    \brief Return 0,1 based on greater of params
    \param param1
    \param param2
    \return 0 or 1
// cppcheck-suppress unusedFunction
 */
int max(int param1, int param2)
{
  
  int return_val = 0xDEADBEEF;
  if(param1 > param2)
    {
      return_val = 0;
    }
  else
    {
      return_val = 1;
    }

  return return_val;    
}
