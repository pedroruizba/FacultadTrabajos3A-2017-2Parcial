#include <iostream>
//#include <string.h>

using namespace std;
int Cuentapalabras(char c1[]);
int aTitulo(char c1[]);
int ConvMayus(char c1[]);
int ConvMin(char c1[]);
int CopiarCad(char c1[]);
int ConcatenarCad(char c1[]);
int CompararCad(char c1[]);
int main()
{
	char c1[100];
	cout<<"Escribe la frase: "<<endl;
	cin.getline(c1,100,'\n');
	cout<<endl<<"Tiene "<<Cuentapalabras(c1)<<" palabras"<<endl;
	cout<<endl<<"Formato Titulo"<<endl;
	aTitulo(c1);
	cout<<endl<<endl<<"Formato Mayusculas"<<endl;
	ConvMayus(c1);
	cout<<endl<<endl<<"Formato Minusculas"<<endl;
	ConvMin(c1);
	cout<<endl<<endl<<"Copiar cadena"<<endl;
	CopiarCad(c1);	
	cout<<endl<<endl<<"Concatenar cadena"<<endl;
	ConcatenarCad(c1);
	cout<<endl<<endl<<"Comparar cadena"<<endl;
	CompararCad(c1);
	
}
int aTitulo(char c1[])
{
	int desp=32;
	for(int i=0;c1[i];i++)
	{
		if(c1[i]>='a'&&c1[i]<='z')
		{
			if(i==0)
				c1[i]-=desp;

		}
		else
		{
			if(c1[i]==desp)	
				c1[i+1]-=desp;
		}	
	}
	cout<<c1;	
}
int Cuentapalabras(char c1[])
{
	int desp=32,contador=0;
	for(int i=0;c1[i];i++)
		if(c1[i]==desp)
			if(c1[i+1]>='a'&&c1[i+1]<='z')
				contador++;
	return contador+1;
}
int ConvMayus(char c1[])
{
	int desp=32;
	for(int i=0;c1[i];i++)
		if(c1[i]>='a'&&c1[i]<='z')
				c1[i]-=desp;
			cout<<c1;	
}
int ConvMin(char c1[])
{
	int desp=32;
	for(int i=0;c1[i];i++)
		if(c1[i]>='A'&&c1[i]<='Z')
				c1[i]+=desp;
			cout<<c1;
}
int CopiarCad(char c1[])
{ //strcpy( destino,fuente)
	char copia[100]=" ";
	for(int i=0;c1[i];i++)
		copia[i]=c1[i];
	cout<<copia;	
}
int ConcatenarCad(char c1[])
{ //strcat(cadena_destino,cadena_fuente)
	int c=0,f1=0,desp=32;
	char concatenado[100]=" ";
	char msj[10]="hola ";
	for(f1=0;msj[f1];f1++)
		concatenado[f1]=msj[f1];
	concatenado[f1+1]=desp;
	for(int i=0;c1[i];i++)
	{
		concatenado[f1+i]=c1[i];
	}
    cout<<concatenado<<endl;
    //cout<<strcat(msj,c1);
}
int CompararCad(char c1[])
{
	//strcmp (cadena1, cadena2);
	int a,b,mayor=0,menor=0,igual=0;
	char palabra[10]="hola";
	
	cout<<endl<<"Cadena 1: "<<c1;
	cout<<endl<<"Cadena 2: "<<palabra<<endl;
	
	for(a=0;c1[a];a++)
	{
		for(int b=a;palabra[b];b++)
		{
			if(c1[a]>palabra[b])
			{
				mayor+=1;
			}
			else
			{
				if(c1[a]<palabra[b])
				{
					menor+=1;
				}
				else
				{
					igual+=1;
				}
			}
		}
		
	}

		if(igual>mayor||igual>menor)
		{
			cout<<"0) las cadenas son iguales ";	
		}
		else
		{
			if(mayor<menor)
				cout<<"-1) la cadena 2 es mayor que la 1";
			else
				cout<<"1) la cadena 1 es mayor que la 2";
		}
	
}

//contar caracteres    for(contador=0;concatenado[contador]!= '\0';contador++)
