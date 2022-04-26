#include <winbgim.h>

#pragma comment(lib,"WinBGI.lib")

main(){
initwindow(400,400);

outtextxy(150,50,"Hola mundo xD");

outtextxy(60,70,"Presione una tecla para continuar...");


getch();
closegraph();

return 0;
}
