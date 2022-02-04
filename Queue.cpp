#include <iostream>
using namespace std;

struct q {
    int info;
    struct q *prox;
};

typedef struct q * qPtr;
qPtr final = NULL;
qPtr inicio = NULL;

void enqueue ();
void dequeue ();
void consultar ();

int main ()
{
    int n;

    do
    {

    cout<<"MENU\n\n";
    cout<<"0: Sair do programa\n"
    "1: Adicionar numero a fila\n"
    "2: Tirar o primeiro numero da fila\n"
    "3: Consultar a fila\n\n";
    cin>>n;

    system ("cls");

    switch (n)
    {
    case 1: enqueue(); break;
    case 2: dequeue(); break;
    case 3: consultar(); break;
    }
    } while (n!=0);

    return 0;
}

void enqueue () {

    qPtr aux, p = new q;

    cout<<"\nDigite o numero que deseja adicionar ";
    cin>> p->info;

    p->prox = NULL;

    if (!final)
    {
        final = p;
        inicio = p;
    }
    
    else
    {
        aux = inicio;
        inicio = p;
        aux->prox = p; 
    }

    cout<<"\nNumero "<<p->info<<" adicionado a fila\n ";
}

void dequeue () {
    qPtr p;
    int a;
    
    if (!final)
    {
        cout<<"\nLista vazia!";
    }
    
    else
    {
        p = final;
        a = p->info;
        final = p->prox;
        delete p;
        cout<<"\nO primeiro elemento "<<a<<" foi retirado\n";
    }
}

void consultar (){

    if (!final)
    {
        cout<<"\nLista vazia!\n";
    }
    
    else
    {
        qPtr p = final;

        while (p != NULL)
        {
            cout<<p->info<<" ";
            p = p->prox;
        }
        cout<<"\nfim\n";
    }

}
