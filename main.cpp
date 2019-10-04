#include <iostream>

using namespace std;

/*int calcularFib (int n)
{
    int x =0;
    int y=1;
    int z=1;
    for (int i =1; 1<=n ;i++)
    {
        z=x+y;
        x=y;
        y=z;
    }
    return z;
}
int main()
{
    int n;
    cin >>n;
    cout<< calcularFib(n);
}
*/

/*
void imprimirArreglo (int *arr, int tam)
{
    for(int i=0; i<tam; i++)
    {
        cout <<*arr<<" ";
        arr++;
    }
    cout<<endl;
}

*/

/*
void invertirArreglo (int *arr, int tam)
{
    int i;
    for (i = tam;  i>=0; i--)
    {
        cout<<*arr+tam-1 <<" ";
        tam=tam-1;
    }
    cout << endl;
}

void invertirArreglo()

int main()
{
    int x[5]={2,3,4,5,6};
    int tam =5;
    //imprimirArreglo(x,tam);
    invertirArreglo(x,tam);
}
*/



int invertirre (int *arr, int tam ,int i=0)
{
    if (i==tam/2){
        return 0;
    }
    swap (*(arr+(i)), * (arr+(tam-i-1)));
    invetirre(arr,tam,i++);
}

int main()
{
    arr[]={1,2,3,4,5,6}
    tam =6;
    invertirre (arr,tam,i)
}



/*
void sumaArreglo (int *arr, int tam)
{
    int suma =0;
    for (int i=0; i<tam;i++)
    {
        suma += *arr;
        arr++;
    }
    cout<<suma;
}
int main()
{
    int y[6]={1,2,3,4,5};
    int tam = 5;
    sumaArreglo(y,tam);
}
*/

/*
void sumaRecursiva (int *arr, int tam)
{
    int suma=0;
    if (suma==0){
        return ;
        }
    else
        tam--;
        *arr+tam + sumaRecursiva(arr,tam);
}
int main()
{
    int z[4]={1,2,3,4};
    int tam = 4;
    sumaRecursiva(z,tam);
    cout << sumaRecursiva;
}
*/

/*
int sumaRecursiva(int *arr ,int tam)
{
    if(tam==1)
        return *arr;
    return *arr +sumaRecursiva( arr+1, tam-1);
}


int main()
{
    int z[4]={1,2,3,4};
    int tam =4;
    cout << sumaRecursiva(z,tam)<<endl;

}

*/




/*
int sumaRecursiva(int *arr ,int tam)
{
    if(tam==1)
        return *arr;
    return *arr +sumaRecursiva( ++arr, --tam);
}
//primero incrementa y despues arr, primero decrementa y despues tam

int main()
{
    int z[4]={1,2,3,4};
    int tam =4;
    cout << sumaRecursiva(z,tam)<<endl;

}


/*
int sumaRecursiva(int *arr ,int tam)
{
    if(tam==1)
        return *arr;
    return *arr +sumaRecursiva( arr++, tam--);
}
//primero arr y despues incrementa, primero tam y despues decrementa
int main()
{
    int z[4]={1,2,3,4};
    int tam =4;
    cout << sumaRecursiva(z,tam)<<endl;
}
*/

/*
void imprimirArreglo (int *arr, int tam)
{
    while (tam--)
    {
        cout <<*arr<<" ";
        arr++;
    }
    cout<<endl;
}
int main()
{
    int x[5]={2,3,4,5,6};
    int *ptr =x;
    int tam =5;
    int *fin = ptr + tam-1;
    imprimirArreglo(x,tam);
}
*/






//void swap (int /*referencia*/&x,int&y)
/*
{
    int tmp =x;
    x=y;
    y=tmp;
}
void swap (int *ptr1 , int *ptr2)
{
    int tmp =*ptr1;
    *ptr1 = *ptr2;
    *ptr2 = tmp;
}
int main()
{
    int a =5;
    int b=10;
    int *ptr1 = &a;
    int *ptr2 = &b;
    swap (ptr1 , ptr2);
    cout << a << " " << b << endl;
}
*/
