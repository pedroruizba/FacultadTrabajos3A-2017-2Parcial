#include <iostream>

using namespace std;

void llenar(int m[][5],int rt);
void mostrar(int m[][5],int rt);
void mostrarDP(int m[][5],int rt);
void mostrarDS(int m[][5],int rt);
void mostrarAbDp(int m[][5],int rt);
void mostrarArrDp(int m[][5],int rt);
void mostrarAbDs(int m[][5],int rt);
void mostrarArrDps(int m[][5],int rt);
void girarDp(int m[][5],int rt);
void girarDs(int m[][5],int rt);
int main()
{	//rt--> fila
	int mat[5][5];
	llenar(mat,5);
	mostrar(mat,5);
	cout<<endl;
	cout<<endl<<"Diagonal principal"<<endl;
	mostrarDP(mat,5);
	cout<<endl<<"Diagonal secundaria"<<endl;
	mostrarDS(mat,5);
	cout<<endl<<"Elementos abajo de la diagonal principal"<<endl;
	mostrarAbDp(mat,5);
	cout<<endl<<"Elementos arriba de  la diagonal principal"<<endl;
	mostrarArrDp(mat,5);
	cout<<endl<<"Elementos abajo de la diagonal secundaria"<<endl;
	mostrarAbDs(mat,5);
	cout<<endl<<"Elementos arriba de  la diagonal secundaria"<<endl;
	mostrarArrDps(mat,5);
	cout<<endl<<"Girar diagonal principal"<<endl;
	girarDp(mat,5);
	mostrar(mat,5);
	cout<<endl<<endl<<"Girar diagonal secundaria"<<endl;
	girarDs(mat,5);
	mostrar(mat,5);
}
void llenar(int m[][5],int rt)
{
	int v=1;
	for(int r=0;r<rt;r++)
		for(int c=0;c<rt;c++)
		{
			m[r][c]=v;
			v++;
		}
}
void mostrar(int m[][5],int rt)
{
		
	for(int r=0;r<rt;r++)
	{
		cout<<endl;
		for(int c=0;c<rt;c++ )
		{
			cout<<m[r][c]<<" ";
		}
	}

}
void mostrarDP(int m[][5],int rt)
{
	for(int r=0;r<rt;r++)
	{
		cout<<m[r][r]<<" ";
	}
}
void mostrarDS(int m[][5],int rt)
{	int r,c;
	for(r=0,c=rt-1;r<rt;r++,c--)
	{
		cout<<m[r][c]<<" ";
	}
}
void mostrarAbDp(int m[][5],int rt)
{
	int r,c;
	for(r=1;r<rt;r++)
	{
		for(c=0;c<r;c++)
		{
			cout<<m[r][c]<<" ";
		}
	}
}
void mostrarArrDp(int m[][5],int rt)
{
	int r,c,a=1;
	for(r=0;r<rt;r++)
	{
		for(c=a;c<rt;c++)
		{
			cout<<m[r][c]<<" ";
		}
		a++;
	}
}
void mostrarAbDs(int m[][5],int rt)
{
	int r,c;
	for(r=1;r<rt;r++)
	{
		for(c=rt-r;c<rt;c++)
		{
			cout<<m[r][c]<<" ";
		}
	}
}
void mostrarArrDps(int m[][5],int rt)
{
	int r,c,a=rt;
	for(r=0;r<rt;r++)
	{
		for(c=0;c<a-1;c++)
		{
			cout<<m[r][c]<<" ";
		}
		a--;
	}
}
void girarDp(int m[][5],int rt)
{
	int r,c,aux;
	for(r=0;r<rt-1;r++)
	{
		for(c=r+1;c<rt;c++)
		{
			aux=m[c][r];
			m[c][r]=m[r][c];
			m[r][c]=aux;
		}
	}
}
void girarDs(int m[][5],int rt)
{	
	int r,c,x,y,xy;
	for(r=0,x=4;r<rt;r++,x--)
	{
		for(c=0,y=4;c<rt-1;y--)
		{
			xy=m[r][c];
			m[r][c]=m[y][x];
			m[y][x]=xy;
		}
	}
	
	
}


