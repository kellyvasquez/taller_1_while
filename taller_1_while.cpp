#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

void gotoxy(int x,int y)
 {
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y= y;
    SetConsoleCursorPosition(hcon,dwPos);
 }

int main ()
{	int opc;

			do {gotoxy(37,2); cout<<"MENU WHILE";
  				gotoxy(20,5); cout<<"Elija una opcion: ";
  				gotoxy(20,8); cout<<"1. Imprimir en pantalla los numeros del 1 al 100.";
  				gotoxy(20,10); cout<<"2. Sumar los numeros del 1 al 100.";
  				gotoxy(20,12); cout<<"3. Sumar los numeros pares del 1 al 50.";
 			    gotoxy(20,14); cout<<"4. Sumar los numeros impares del 1 al 50";
                gotoxy(20,16); cout<<"0. SALIR "; cin>>opc;



	switch (opc){
        case 0:
            opc=0;
            break;
        case 1:
            int num;
            num=1;
            while (num<=100) {
            cout<< num;cout<<" ";
            num++; }
            getch();
            break;

        default:
            cout<<"El valor ingresado no es valido. Debe ser 1, 2, 3, 4 o 0"<<endl;
				}
				getch();
			}
				while (opc>0);
				cout<<endl<<endl;

				system("pause");


	return 0;
}
