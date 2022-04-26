#include <winbgim.h>
#include <iostream>
using namespace std;

void waitForLeftMouseClick();

int main()
{
    initwindow(400,300); //open a 400x300 graphics window
    /*
    // delete these lines and replace them with your own code:
    settextstyle(0,0,2);
    setcolor(RED);
    outtextxy(20,100,"Welcome to C++ graphics!");
    setcolor(GREEN);
    outtextxy(60,130,"Click this window");
    outtextxy(120,160,"to exit.");
    */
    /*float x;
    x = 45.6;
    char pal[10], t;
    //cin >> pal;
    t = toascii( 3 );
    pal[0] = t;
    
    outtextxy( 100, 100, pal[0] );
    */
    char numCadena[20];  // Vector donde se guarda el numero como cadena de texto
    int numEntero;
    //numEntero=12345;
    cout << "Escriba un numero entero: ";
    cin >> numEntero;
    
    itoa(numEntero,numCadena,10);  // Se convierte el numero a cadena y se guarda en el vector
                                   // mediante la funcion itoa()
    
    cout<<"El numero en formato de cadena es:"<< numCadena;     //Se muestra en modo gráfico
    settextstyle(0,0,2);
    outtextxy(100,100,numCadena);
    //system ( "pause");
    
    //while(!kbhit());     // wait for user to press a key
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

