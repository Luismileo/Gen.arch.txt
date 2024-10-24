#include<iostream>
#include<fstream>

using namespace std;

struct personas{
    string nombre;
    int cedula;
    string correo;

}p;

int main(){
   int Npersonas;
    ofstream output("/Users/luismi/Documents/Uru/4to trimestre/Programacion2/GeneradorDeArchivoDeTXT/Data/data.txt");

    if(!output.is_open()){
        cout<<"No se puede abrir ni crear el archivo"<<endl;
        return 0;
    }

    cout<<"Cuantos datos de personas desea agregar"<< endl;
    cin >> Npersonas;
    for(int i=0; i<Npersonas; i++){
        cout << "Ingrese el noombre de la persona" << i+1 <<endl;
        cin >> p.nombre;
        cout << "Ingrese numero de cedula de la persona" << i+1 << endl;
        cin >> p.cedula;
        cout << "Ingrese el correo de la persona" << i+1 << endl;
        cin >> p.correo;
        output<<p.nombre<<" "<<p.cedula<< " "<<p.correo<<endl;

    }
    
}