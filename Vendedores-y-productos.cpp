#include<iostream>
using namespace std;
void registro(int ventas[][5],int ven,int pro,int vent);
void mostrarRegistros(int ventas[][5]);
void SumaVendor(int ventas[][5]);
void SumaProductos(int ventas[][5]);
int main()
{
	int ventas[6][5]={{0}};
	char opc;
	int v,p,venta,seguir=0;
	do
	{
		cout<<"Vendedor: ";
		cin>>v;
		cout<<"Producto: ";
		cin>>p;
		if(v>4 || p>5)
		{
			cout<<"No se puede agregar en ese registro"<<endl;
			seguir=1;
		}
		else
		{
			cout<<"Venta: ";
			cin>>venta;
			cout<<"Quieres seguir agregado mas? s/n :";
			cin>>opc;
			registro(ventas,v,p,venta);
			seguir=1;
		}
	}while(opc=='s');
	if(seguir==1)
	{
		SumaVendor(ventas);
		SumaProductos(ventas);
		mostrarRegistros(ventas);	
	}
	
	return 0;
}

void registro(int ventas[][5],int v,int p,int vent)
{	
	ventas[p-1][v-1]+=vent;
}

void SumaVendor(int ventas[][5])
{
	int r,c;
	for(r=0;r<5;r++)
	{
		for(c=0;c<4;c++)
		{
			ventas[5][c]+=ventas[r][c];
		}
	}
}

void SumaProductos(int ventas[][5])
{
	int r,c;
	for(r=0;r<5;r++)
	{
		for(c=0;c<4;c++)
		{
			ventas[r][4]+=ventas[r][c];
		}
	}
}

void mostrarRegistros(int ventas[][5])
{
	int r,c;
	for(r=0;r<6;r++)
	{
		for(c=0;c<5;c++)
		{
			cout<<ventas[r][c]<<" ";
		}
		cout<<endl;
	}
}

