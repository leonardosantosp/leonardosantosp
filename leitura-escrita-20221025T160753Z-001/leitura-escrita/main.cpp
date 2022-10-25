#include <cstdlib>
#include <fstream>
#include <iostream>
using namespace std;

typedef struct{ 

        string modelo;
        string marca;
        string tipo;
        string combustivel;
        string cambio;
        string direcao;
        string cor;
        string placa;
        int ano;
        int km;
        int portas;
        float potencia;
}lista;

lista * p[50]; 

lista  * busca(lista *bd[], string placa){
    int k = 0;
    while( bd[k] != NULL){
       if(placa == bd[k]->placa ){
           cout << "placa encontrada " << endl;
           cout <<  " " <<  bd[k]->marca;
           cout << bd[k]->modelo << endl;
           return * bd;
       }else{
           k++;
       }
    }
    cout << "placa não encontrada " << endl;
    return NULL;
}
   
int main(int argc, char** argv) {
    /*ofstream myfile;
    myfile.open ("example.txt");
    if(myfile.is_open()){
        myfile << "This is a line.\n";
        myfile << "This is another line.\n";
        myfile.close();
    }
    else
        cout << "Unable to open file";
    */
    /*
    string line;
    ifstream myfile("example.txt");
    if (myfile.is_open()){
        while (!myfile.eof()){
            myfile >> line;
            cout << "string: " << line << endl;
        }
        myfile.close();
    }
    else
        cout << "Unable to open file";
    */
    
   ifstream myfile;
   int i = 0;
   myfile.open("BD_veiculos.txt");
    
    if (myfile.is_open()){
        while (!myfile.eof()){
            p[i] = new lista;
            myfile >> p[i]->modelo;
            myfile >> p[i]->marca;
            myfile >> p[i]->tipo;
            myfile >> p[i]->ano;
            myfile >> p[i]->km;
            myfile >> p[i]->potencia;
            myfile >> p[i]->combustivel;
            myfile >> p[i]->cambio;
            myfile >> p[i]->direcao;
            myfile >> p[i]->cor;
            myfile >> p[i]->portas;
            myfile >> p[i]->placa;
            i++;
        }
        myfile.close();
        /*for(int j = 0; j < i - 1; j++){
            cout << p[j]->modelo << " ";
            cout << p[j]->marca << " ";
            cout << p[j]->tipo << " ";
            cout << p[j]->ano << " ";
            cout << p[j]->km << " ";
            cout << p[j]->potencia << " ";
            cout << p[j]->combustivel << " ";
            cout << p[j]->cambio << " ";
            cout << p[j]->direcao << " ";
            cout << p[j]->cor << " ";
            cout << p[j]->portas << " ";
            cout << p[j]->placa << " " << endl;
            
        }*/
         lista *x = busca(p, "PWE4815");
         
        for(int j = i; j < 51; i++){
            p[j] = NULL;
        }
        for(int j = 0; j < 50; j++){
            delete (p[j]);
        }
   }
    else
        cout << "Unable to open file";
    
   return 0;
}

