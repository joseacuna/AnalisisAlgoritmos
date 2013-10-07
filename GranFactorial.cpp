#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;

typedef struct BIGNUM{
int *vect;
int num;
}BIGNUM;

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

            int produc= factor1.vect[i] * factor2.vect[j] +v [i+j];
            int aux1= produc / 10;
            int aux2= produc % 10;

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

BIGNUM grandec(BIGNUM )
int main(){

string numero;

cout<<"ingrese numero; ";

cin >> numero;

BIGNUM num;

num.num= numero.size();

num.vect= new int [num.num];

// ingresar datos a la  estructura

    for(int i =0; i< num.num;i++)
    {
        num.vect[i]= (int) numero[num.num-1-i]-48
    }
}
