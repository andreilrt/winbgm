#include <winbgim.h>
#include <iostream>
using namespace std;

void waitForLeftMouseClick();

int main()
{
    initwindow(400,300); //open a 400x300 graphics window
    
    // delete these lines and replace them with your own code:
    char mensaje[]="Esto se imprime sin problemas";
    outtextxy(10,10,mensaje);
    int var=15978;
    //char mensaje[10];

    //Tienes que convertir el valor a caracter para imprimirlo
    itoa(var, mensaje, 10);
    settextstyle(0,0,5);
    setcolor(4);
    outtextxy(100,100,mensaje);
                
    // while(!kbhit());     // wait for user to press a key
    waitForLeftMouseClick(); // use one or the other of these--not both


    closegraph();        //close graphics window
	return 0;
}

void waitForLeftMouseClick()
{
    clearmouseclick(WM_LBUTTONDOWN);
    const int DELAY = 50; // Milliseconds of delay between checks
    int x, y;
    while (!ismouseclick(WM_LBUTTONDOWN))
        delay(DELAY);
    getmouseclick(WM_LBUTTONDOWN, x, y);
}

