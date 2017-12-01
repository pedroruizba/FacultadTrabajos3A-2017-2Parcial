#include <iostream>
#include <string.h>

int palindromo(char c[],int ini, int fin);
using namespace std;
int main()
{
	
	char frase[100];
	cout<<"Escribe la frase: "<<endl;
	cin.getline(frase,100,'\n');
	if(palindromo(frase,0,strlen(frase)-1)==0)
		cout<<"No palindromo";
	else
		cout<<"Es palindromo";
}
int palindromo(char c[],int ini, int fin)
{
	
	
	if (ini<fin)
	{
		if(c[ini]==' ')
			return palindromo(c,++ini,fin);
		if(c[fin]==' ')
			return palindromo(c,ini,--fin);
		if (c[ini]!=c[fin])
			return 0;
		else
		{
			ini++;
			fin--;
			return palindromo(c,ini,fin);
		}
	}
	else
		return 1;
	
}
