#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    int a=7;

       if (a==3)
       
       {
	       system("color D");
           printf("    *\n");
           printf("  //|\\\\ \n");
           printf(" ///|\\\\\\ \n");
           printf("////|\\\\\\\\ \n");
           printf("  IIIII \n\n");
           printf("3 niveles ");
       }
           else
               if (a==5)
               {
               	  system("color A");
                  printf("        *\n");
                  printf("      //|\\\\ \n");
                  printf("     ///|\\\\\\ \n");
                  printf("    ////|\\\\\\\\ \n");
                  printf("   /////|\\\\\\\\\\ \n");
                  printf("  //////|\\\\\\\\\\\\ \n");
                  printf("      IIIII \n\n");
                  printf("5 niveles ");
               }
                   else
                       if (a==7)
                       {
                          system("color B");
                          printf("        *\n");
                          printf("      //|\\\\ \n");
                          printf("     ///|\\\\\\ \n");
                          printf("    ////|\\\\\\\\ \n");
                          printf("   /////|\\\\\\\\\\ \n");
                          printf("  //////|\\\\\\\\\\\\ \n");
                          printf(" ///////|\\\\\\\\\\\\\\ \n");
                          printf("////////|\\\\\\\\\\\\\\\\ \n");
                          printf("      IIIII \n\n");
                          printf("7 niveles ");
                       }
                          else
                          {
                              printf("el arbol no es de 3, 5 o 7 niveles");
                          }
     return 0;
}


	  

