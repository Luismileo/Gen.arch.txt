#include<iostream>
#include<fstream>

using namespace std;

int main(){
    int cedula;
    string nombre, correo;
    ifstream input("/Users/luismi/Documents/Uru/4to trimestre/Programacion2/GeneradorDeArchivoDeTXT/Data/data.txt");

    if(!input.is_open()){
        cout<<"No se puede abrir"<<endl;
        return 0;
    }
    
    int count =0;
        while(input>>nombre>>cedula>>correo){
            cout<<"Mi nombre es "<< nombre << ","<< " numero de cedula: "<< cedula <<" mi correo es "<<correo<<endl;
        }
        
        input.close();
        return 0;
}