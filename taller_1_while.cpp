#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main ()
{	int opc;

			do {system("cls");
                cout<<"MENU WHILE\n";
  				cout<<endl<<endl;
  				cout<<"1. Imprimir en pantalla los numeros del 1 al 100.\n";
  				cout<<"2. Sumar los numeros del 1 al 100.\n";
  				cout<<"3. Sumar los numeros pares del 1 al 50.\n";
 			    cout<<"4. Sumar los numeros impares del 1 al 50\n";
                cout<<"0. SALIR ";
                cout<<endl<<endl;
                cout<<"\nElija una opcion: ";cin>>opc;



	switch (opc){
        case 0:
            opc=0;
            break;
        case 1:
            system ("cls");
            cout<<"NUMEROS DEL 1 AL 100.\n";
            int num;
            num=1;
            while (num<=100) {
                cout<<"\n"<<num<<" ";
                num++; }
            getch();
            break;
        case 2:
            system ("cls");
            cout<<" LA SUMA DE LOS NUMEROS DEL 1 AL 100.\n";
            int numero, suma;
            numero=1;
            suma=0;
            while (numero<=100) {
                suma=numero+suma;
                numero++;
                }
                cout<<"\nLa suma de los numeros del 1 al 100 es: "<<suma;
            getch;
            break;
        case 3:
            system ("cls");
            cout<<"SUMA DE LOS NUMEROS PARES DEL 1 AL 50.\n";
            int par, sum;
            par=1;
            sum=0;
            while (par<50) {
                if (par%2==0)
                {
                    sum=par+sum;
                }
                par++;
                }
                cout<<"\nLa suma de los pares del 1 al 50 es: "<<sum;
            getch ();
            break;
        case 4:
            system ("cls");
            cout<<"SUMA DE LOS NUMEROS IMPARES DEL 1 AL 50.\n";
            int impar, s;
            impar=1;
            s=0;
            while (impar<50) {
                if (impar%2==0){
                 }else{
                    s=impar+s;
                }
                impar++;
                }
                cout<<"\nLa suma de los impares del 1 al 50 es: "<<s;
            getch ();
            break;
        default:
            cout<<"\nEl valor ingresado no es valido. Debe ser 1, 2, 3, 4 o 0"<<endl;
				}
				getch();
			}
				while (opc>0);
				cout<<endl<<endl;

				system ("pause");
	return 0;
}
