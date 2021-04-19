#include <iostream>
using namespace std;
void insercao(int vet[], int tam);
int main()
{
	int x, vet[]={13,23,3,8,1};
	system("cls");
	cout<<"\nAntes da chamada da funcao - INSERCAO\n\t\t";
	for(x=0; x<5; x++)//x++ incremento
	cout<<vet[x]<<"\t";//move o cursor de tela para a próxima parada de tabulação
	cout<<"\n";//nova linha
	insercao(vet, 5);
	cout<<"\n\nDepois da chama da funcao - INSERCAO\n\t\t";
	for(x=0; x<5; x++)// incremento
		cout <<vet[x]<<"\t";
	cout<<"\n";
	system("pause");	
}
void insercao(int vet[], int tam)
{
	int j, i, aux,a;
	for (i=1;i<tam;i++) //se i for igual a 1, i menor que tam, i incroemto
{
	aux = vet[i];
	cout<<"\ni= "<<i<<"\tantes\t";
	for(a=0; a<5;a++)
		cout <<vet[a]<<"\t";
	for(j=i; j>0 && aux <vet[j-i]; j--)
{
	vet[j]=vet[j-i];
	cout<<"\n\tdurante\t";
	for(a=0; a<5;a++)
		cout<<vet[a]<<"\t";
	}
	vet[j]=aux;
	cout<<"\n\tdepois\t";
	for(int a=0; a<5;a++)
	cout<<vet[a]<<"\t";
}
}
