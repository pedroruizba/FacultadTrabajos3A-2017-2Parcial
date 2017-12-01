#include <iostream>
#include <stdlib.h>
#include <time.h>

void llenar(int v[], int t);
void jugar(int v[], int t);
int dado();

using namespace std;
int main() {
	srand(int(time(NULL)));
    int v[100]={0}, t=100;
	cout<<"Juego de serpientes y escaleras"<<endl<<endl;
    llenar(v, t);
    jugar(v, t);
    return 0;
}
void llenar(int v[], int t)
{
    v[5] = +5;
    v[15]= +6;
    v[10]= +10;
    v[23]= +24;
    v[73]= +23;
    v[15]= +7;
    v[36]= +20;
    v[78] = +5;
    v[43]= +25;
    v[4]= +20;
    
    v[6]= -5;
    v[34]= -7;
    v[89]= -8;
    v[96]= -10;
    v[53] = -29;
    v[34]= -30;
    v[94]= -9;
    v[9]= -23;
    v[23]= -5;
    v[48]= -6;
}
void jugar(int v[], int t)
{
    int j1 = 0, j2=0;
    while(j1<t && j2<t)
    {
        j1 += dado();
        if (j1<t)
		{
            if (v[j1]>0)//si es positivo es escalera
            	cout<<" J1 cayo en escalera"<<endl;
            else if (v[j1]<0)// si es negativo es serpiente
                cout<<" J1 cayo en serpiente"<<endl;
            j1 += v[j1];
            cout<<"J1 esta en la posicion:"<<j1<<endl;
        }
        j2 += dado();
        if (j2<t) 
		{
            if (v[j2]>0)
                cout<<" J2 cayo en escalera\n";
            else if (v[j2]<0)
                cout<<" J2 cayo en serpiente"<<endl;
            j2 += v[j2];
            cout<<"J2 esta en la posicion:"<<j2<<endl;
        }
    }
    
    if (j1>j2)
        cout<<endl<<"El jugador 1 gano"<<endl;
    else
        cout<<endl<<"El jugador 2 gano"<<endl;
}
int dado()
{
    int tirada;
    tirada=1+rand()%6;
    return tirada;
}
