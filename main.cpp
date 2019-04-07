#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>

using namespace std;
string url1;
string url2;


int main(){
    string pesquisa;
    string selecao;
    string chave="a0fe0e1";
    int quant;
    float valor;

    while(1){
        system("cls");
        cout<<"bem vindo ao aplicativo de filmes, por Eduardo de Paula Xavier"<< endl;
        cout<<"INFORME A OPCAO DESEJADA: ";
        cout<<"\n DIGITE h->para ajuda";
        cout<<"\n DIGITE k->para trocar a chave:(ORIGINAL=a0fe0e1)";
        cout<<"\n DIGITE s->para procurar";
        cout<<"\n DIGITE t->para sinopse";
        cout<<"\n::ATENCAO COM A TECLA ESPACO, SUBSTITUIR POR (+)::"<< endl;
        cin >> selecao;

        if(selecao=="h"){
             cout<<"  -Aperte 's' para digitar um filme a ser buscado,\n   voce sera levado a uma pagina com as opcoes de filmes disponiveis"<<endl;
             cout<<"  -Aperte 't' para procurar a sinopse de um filme,\n   voce sera levado a uma pagina com as informacoes do filme desejado"<<endl;
             cout<<"  -ATENCAO:: PARA FILMES COM MAIS DE UM NOME:: O 'ESPACO' DEVE SER SUBSTITUIDO POR '+':\n   EXEMPLO: 'Batman Begins' deve ser escrito como 'Batman+Begins'."<<endl;
             cout<<"  -E necessario uma chave para ter acesso ao OMDb, a original utilizada e 'a0fe0e1',\n   caso seja necessario aperte 'k' para trocar a chave:"<<endl;
             system("pause");
        }else if(selecao=="s"){
            cout<<"-Digite o nome do filme a ser pesquisado:"<<endl;
            cin>>pesquisa;
            url1="http://www.omdbapi.com/?apikey="+chave+"&s="+pesquisa;
            ShellExecute(NULL,"open",url1.c_str(),NULL,NULL,SW_SHOWNORMAL);
        }else if( selecao=="t"){
            cout<<"-Digite o nome do filme para a sinopse:"<<endl;
            cin>>pesquisa;
            url2="http://www.omdbapi.com/?apikey="+chave+"&t="+pesquisa;
            ShellExecute(NULL,"open",url2.c_str(),NULL,NULL,SW_SHOWNORMAL);
        }else if(selecao=="k"){
            cout<<"-Digite a nova chave:"<<endl;
            cin>>chave;
        }

    }
    return 0;
}




