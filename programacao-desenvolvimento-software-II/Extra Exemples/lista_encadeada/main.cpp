#include <iostream>

using namespace std;

// Classe Nó
class No{
private:
    int elemento;
    No* prox;

public:
    No(int elemento){ // Construtor
        this -> elemento = elemento;
        this -> prox = NULL;
    }

    int get_valor(){ // obtem elemento
        return elemento;
    }

    No* get_proximo(){ // obtem próximo nó
        return prox;
    }

    void set_proximo(No* p){
        prox = p;
    }
};

// Classe Lista
class Lista{
private:
    No* primeiro; // primeiro elemento
    No* ultimo;   // último elemento

public:
    Lista(){
        primeiro = NULL;
        ultimo   = NULL;
    }

    Lista(int elemento){
        primeiro = new No(elemento);
        ultimo = primeiro;
    }

    virtual ~Lista(){ // Destrutor
        delete primeiro;
    }

    void imprime(){ // Imprime elementos da lista
        cout << "Imprimindo elementos...\n";
        No* pri = primeiro;

        if(vazia()){
            cout << "A lista esta vazia!\n";
        }else{
            while(pri){
                cout << pri -> get_valor() << "\t";
                pri = pri -> get_proximo();
            }
            cout << endl;
        }
    }

    bool vazia(){// verifica se a lista está vazia
        return (primeiro == NULL);
    }

    void insere_inicio(int elemento){
        No* novo_no = new No(elemento);

        if(vazia()){
            primeiro = novo_no;
            ultimo   = novo_no;
        }else{
            novo_no -> set_proximo(primeiro);
            primeiro = novo_no;
        }
    }

    void insere_final(int elemento){
        No* novo_no = new No(elemento);

        if(vazia()){
            primeiro = novo_no;
            ultimo = novo_no;
        }else{
            ultimo -> set_proximo(novo_no);
            ultimo = novo_no;
        }
    }

    int tamanho(){
        if(vazia()){
            return 0;
        }
        No* pri = primeiro;
        int tam = 0;

        do{
            pri = pri -> get_proximo();
            tam++;
        }while(pri);

        return tam;
    }

    bool existe(int elemento){
        No* pri = primeiro;

        while(pri){
            if(pri -> get_valor() == elemento){
                return true;
            }
            pri = pri -> get_proximo();
        }
        return false;
    }

    void remover(){ // remoção no final da lista
        if(!vazia()){
            if(primeiro -> get_proximo() == NULL){
                primeiro = NULL;
            }else if(primeiro -> get_proximo() == NULL){
                primeiro -> set_proximo(NULL);
            }else{
                No* ant_ant = primeiro;
                No* ant = primeiro -> get_proximo();
                No* corrente = primeiro -> get_proximo() -> get_proximo();

                while(corrente){
                    No* aux = ant;
                    ant = corrente;
                    ant_ant = aux;
                    corrente = corrente -> get_proximo();
                }

                delete ant_ant -> get_proximo();
                ant_ant -> set_proximo(NULL);
                ultimo = ant_ant;
            }
        }
    }
};

int main(){
Lista l;

	if(l.vazia())
		cout << "Lista vazia!!\n";
	else
		cout << "Lista NAO vazia!!\n";

	l.imprime();

	if(l.existe(10))
		cout << "\nO elemento 10 existe na lista!!\n";
	else
		cout << "\nO elemento 10 NAO existe na lista!!\n";

	l.insere_final(10);
	l.insere_final(20);
	l.insere_final(30);
	l.insere_final(40);
	l.insere_inicio(50);

	l.imprime();

	if(l.vazia())
		cout << "Lista vazia!!\n";
	else
		cout << "Lista NAO vazia!!\n";

	if(l.existe(10))
		cout << "\nO elemento 10 existe na lista!!\n";
	else
		cout << "\nO elemento 10 NAO existe na lista!!\n";

	l.remover();

	l.imprime();

	cout << "Tamanho da lista: " << l.tamanho() << endl;



    return 0;
}
