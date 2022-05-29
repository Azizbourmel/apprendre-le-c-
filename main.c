#include <stdio.h>
#include <stdlib.h>

int main()
{
  int tab [2][3]={{1,2,3},{4,5,6} };
  for(int ligne=0;ligne<2;ligne++)
  {
      int* p_ligne = *(tab+ligne);
      for(int colone=0;colone<3;colone++)
      {
          printf("tab[%d][%d]=%d\n",ligne,colone,*(p_ligne+colone));
      }
  }

    return 0;
}
