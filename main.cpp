#include <iostream>
#include <fstream>
void Ingresar(int Origi[], int Orde[], int m);
void ordenamiento(int orde[], int m,int j);


using namespace std;

int main() {
 int m;
 int Origi[m];
 int Orde[m];

 Ingresar(Origi,Orde,m);
 //Imprimir(Origi,Orde,m);
}

void Ingresar(int Origi[], int Orde[], int m)
{
  ofstream Archivodata;
  int pos,aux;
  cout  << "Ingrese el Tamaño del arreglo: ";
  do{
  cin >> m;
  if(m<0)
  {
    cout << "Tamaño no valido\nVuelva a ingresar\n";
  }
  }while(m<0);

  Archivodata.open("Ordenamiento",ios::out);

  Archivodata << "Original: {";
  for (int i=0;i<m;i++)
  {
    cout << "Ingrese el elemento en la posicion " << i+1 <<": ";

    cin >> Origi[i];

    Archivodata << Origi[i] << ",";

    Orde[i]=Origi[i];

    ordenamiento(Orde,m,i);

  }

  Archivodata << "}\n";

  Archivodata<< "Ordenado: {";

  for(int i=0;i<m;i++)
  {
    Archivodata << Orde[i] ;
    if(i<(m-1))
    {
      Archivodata << ",";
    }

  }
  Archivodata << "}\n";

  Archivodata.close();
}

void ordenamiento(int Orde[], int m, int j)
{ 
  
  int aux,pos;
  for(int i=0;i<m;i++)
  {
    pos=i;
    aux=Orde[i];
    while((pos>0)&&(Orde[pos-1]>aux))
    {
      Orde[pos]=Orde[pos-1];
      pos--;
    }
    Orde[pos]=aux;
  }

 


}