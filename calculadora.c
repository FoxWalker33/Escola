
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>

int main(void)
{
   int x,y;  /*variáveis posição do centro do círculo */
   int gdriver = DETECT, gmode, errorcode;
   initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
   errorcode = graphresult();
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);          
   }

   /*desenho de um círculo com raio 100 */
   for(x=0,y=0;x<=getmaxx() && y<=getmaxy();x=x+5,y=y+5)
 {  setcolor(RED); /*mudança de cor*/
   circle(x,y,100);
    delay(100); /*aguardar 100 milissegundos antes de continuar */
    setcolor(BLACK); /*mudança de cor para "apagar" o círculo */
   circle(x,y,100);

   }
   getch();
   closegraph();
   return 0;
}
