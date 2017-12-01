#include <iostream>
int menu();
void menu(int tablero[][20],int tam);
void mostrar(int tablero[][20], int tam);
using namespace std;
int main() {
    int opc, tam=20;
    int tablero[20][20]={{0}};
    menu(tablero, tam);
    return 0;
}
void menu(int tablero[][20],int tam)
{
    int opc,pasos = 0,girarDerecha = 0,pluma=0,girarIzquierda=0;
    int posicionY=0,posicionX=0;
	cout<<"Que desea hacer?"<<endl;
    cout<<"1-Pluma hacia arriba"<<endl;
    cout<<"2-Pluma hacia abajo"<<endl;
    cout<<"3-Girar a la derecha"<<endl;
    cout<<"4-Girar a la izquierda"<<endl;
    cout<<"5-Avanzar espacios"<<endl;
    cout<<"6-Imprimir"<<endl;
    cout<<"7-Salir"<<endl;
    do {
        
        cin>>opc;
        if (opc==1)
        {
            pluma=0;
            cout<<" Pluma hacia arriba"<<endl;
        }
        else if (opc==2)
        {
            pluma=1;
            cout<<" Pluma hacia abajo"<<endl;
        }
        else if(opc==3){
            girarDerecha += 1;
            if(girarDerecha==4)
                girarDerecha=0;
            cout<<girarDerecha<<" Giraste a la derecha"<<endl;
        }
        else if(opc==4)
        {  girarDerecha -= 1;
        if(girarDerecha<0)
            girarDerecha=3;
        cout<<girarDerecha<<" Giraste a la izquierda"<<endl;
        }
         else if (opc==5) {
            cout<<"Numero de pasos: "<<endl;
            cin>>pasos;
            if (girarDerecha==0)//derecha
                for (int i=posicionY; i<=posicionY; i++) {
                    for (int j=posicionX, k=pasos; k>0; j++,k--) {
                        if (j>=tam-1){
                            k=0;
                            tablero[i][j]=pluma;
                        }
                        tablero[i][j]=pluma;
                        posicionX=j;
                    }
                }
            else if (girarDerecha==1)//abajo
                for (int k=pasos,i=posicionY; k>0; k--,i++) {
                    for (int j=posicionX; j<=posicionX; j++){
                        if (i>=tam-1){
                            k=0;
                            tablero[i][j]=pluma;
                        }
                        tablero[i][j]=pluma;
                    }
                    posicionY=i;
                }
            else if (girarDerecha==2)//izquierda
                for (int i=posicionY; i<=posicionY; i++) {
                    for (int k=posicionX, j=pasos; j>0; j--,k--) {
                        if (k==0){
                            j=0;
                            tablero[i][k]=pluma;
                        }
                        tablero[i][k]=pluma;
                        posicionX=k;
                        cout<<posicionX<<"x\n";
                    }
                }
            else if (girarDerecha==3)//arriba
                for (int k=posicionY, i=pasos; i>0; i--,k--) {
                    for (int j=posicionX; j<=posicionX; j++){
                        if (k==0){
                            i=0;
                            tablero[k][j]=pluma;
                        }
                        tablero[k][j]=pluma;
                    }
                    posicionY=k;
                }
        }
    	else if (opc==6)
    	{
    		mostrar(tablero, tam);
    	}

    } while (opc<7);
    
}
void mostrar(int tablero[][20], int tam)
{
        for (int i=0; i<tam; i++) {
          for (int j=0; j<tam; j++)
              cout<<" "<<tablero[i][j];
          cout<<endl;
          }
}

