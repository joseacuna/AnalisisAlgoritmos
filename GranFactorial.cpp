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

        }
    }
}

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
