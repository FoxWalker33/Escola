
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>

int main(void)
{
   int x,y;  /*vari�veis posi��o do centro do c�rculo */
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

   /*desenho de um c�rculo com raio 100 */
   for(x=0,y=0;x<=getmaxx() && y<=getmaxy();x=x+5,y=y+5)
 {  setcolor(RED); /*mudan�a de cor*/
   circle(x,y,100);
    delay(100); /*aguardar 100 milissegundos antes de continuar */
    setcolor(BLACK); /*mudan�a de cor para "apagar" o c�rculo */
   circle(x,y,100);

   }
   getch();
   closegraph();
   return 0;
}
