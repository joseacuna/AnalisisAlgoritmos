#include <iostream>
#include <string.h>
#include <cstdlib>
#include <cstdio>
using namespace std;

typedef struct BIGNUM{
int *vect;
int num;
}BIGNUM;
string a;

BIGNUM producto(BIGNUM factor1,BIGNUM factor2){ // calcula el producto de dos numeros de tipo BIGNUM
int n; int *v;

if (factor1.num > factor2.num){
            n= 2* factor1.num;

        }else{
            n= 2* factor2.num;
        }
    v= new int[n];

    for(int i=0; i<n;i++)
        v[i]=0;

    for(int i =0; i<factor1.num;i++){

        for(int j=0;j<factor2.num;j++){

            int produc= factor1.vect[i] * factor2.vect[j] + v [i+j];
            int aux1= produc % 10;
            int aux2= produc / 10;

            v[i+j]= aux1;
            v[i+j+1] += aux2;

        }
    }

    BIGNUM grande;

    grande.num= 0;
    grande.vect= v;

    for(int i= n-1;i >=0;i--){

        if(v[i]!=0){
            grande.num= i+1;
            break;
        }

    }
    return grande;
}


BIGNUM decendente (BIGNUM nume){ // disminulle el valor de bignum
    int *v = new int [nume.num];
    for(int i =0; i< nume.num; i++)
        v[i]=nume.vect[i];

    if(nume.num ==0){
    return nume;
    }
    else{
        for(int i=0; i<nume.num;i++){
        if(v[i]==0){
        v[i]=9;
        }else{
        v[i]--;
        break;
        }
      }
    }

    BIGNUM deci;
    deci.num=0;
    deci.vect=v;
    for(int i= nume.num-1 ;i>=0;i--){
        if (v[i]!=0){
                deci.num=i+1;
                break;
        }
    }
    return deci;
}

BIGNUM factorial(BIGNUM numero){
if (numero.num == 0){
    BIGNUM uno;
    uno.num=1;
    uno.vect=new int [1];
    uno.vect[0]=1;
    return uno;
}else{
    return producto(numero,factorial(decendente(numero)));
}

}
int main() {
string entrada;

 printf("Ingresar N: ");
 cin >> entrada;

 BIGNUM numero;

 numero.num = entrada.size();
 numero.vect= new int[numero.num];

 for(int i=0; i<numero.num; i++)
     numero.vect[i] = (int)entrada[numero.num-1-i] - 48; //convierte caracter en cifra

 BIGNUM calculo = factorial(numero);

for(int i=calculo.num-1; i>=0; i--) {

  cout<< calculo.vect[i];
}



 return 0;
}
