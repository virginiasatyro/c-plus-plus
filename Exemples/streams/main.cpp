#include <iostream>
#include <fstream>

// le um arquivo de entrada e reescreve um de saida
// nao escreve o arquivo de saida pulando linha - como no original

using namespace std;

int main(){

    ifstream in("entrada.txt", fstream::in);
    if(!in.is_open()){
        return 1;
    }

    ofstream out("saida.txt", fstream::out);
    if(!out.is_open()){
        return 1;
    }

    string line;
    while(getline(in, line)){
        out << line;
    }

    in.close();
    out.close();

    return 0;
}
