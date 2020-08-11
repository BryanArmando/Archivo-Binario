#include <iostream>
#include<fstream>
using namespace std;

int main() {
  int b,i,j,k,t;
  int a[100]; //{1,2,3,4,5,6,7,8,9};
  i=0;


    ofstream archivoPrueba;
    archivoPrueba.open("binario.txt", ios::app);
    cout<<"Ingrese tamaño del arreglo: ";
    cin>>t;
    j=t-1;
    for(int p=1;p<=t;p++){
        cout<<"Ingrese el elemento numero "<<p<<" ";
        cin>>a[p];
    }
    cout<<"Ingrese el elemento que desea buscar: ";
    cin>>k;
   do{
    k=(i+j)/2;
    if(a[k]<=b)
    {
      i=k+1;
    }
    if(a[k]>=b)
    {
      j=k-1;
    }
  }while(i<=j);

  if(a[k]==0)
  cout<<"ELEMENTO NO ENCONTRADO \n";
  else
  cout<<"Elemento encontrado en la posicion "<<a[k]-1<<endl;

    archivoPrueba.close();


    return 0;
}
