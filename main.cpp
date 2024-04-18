#include <iostream>

using namespace std;

int main()
{
    //int hastadonde=5;
    /*for(int iterador = 0; iterador <= 10; iterador++)
    {
        cout<<"multiplicacion: "<<iterador*hastadonde<<endl;
    }*/
    /*
    while(iterador <= hastadonde)
    {
        /*
        iterador= iterador + 1;

       cout<<"me olvide el iterador"<<endl;
       iterador++;
    }
    */
    int num;

    cout<<"Ingrese un numero: "<<endl;
    cin>>num;

    for(int i=0; i<=num; i++)
    {
        if(i%2 == 0)
        {
            cout<<"Numeros pares: "<<i<<endl;
        }
    }
    return 0;
}
