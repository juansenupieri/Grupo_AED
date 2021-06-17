#include<iostream>
#include<cassert>
using namespace std;

int diasDelMes(int,int);

bool esAnioBisiesto(int);

int main() 
{
	int anio,bisi,mes;
	
    cout << "Este programa le permite saber si un anio es bisiesto y cuanto dias tiene el mes" << endl;
	
    do {
        cout<<"------------------------------------"<<endl;
        cout << "Ingrese a continuacion el anio:";
		cin >> anio;
		while (anio<1582 ||anio>3021) 
        {
			cout << "Ingrese un anio valido";
			cin >> anio;
		}
		if (esAnioBisiesto) 
        {
			cout << "el anio es bisiesto" << endl;
		} 
        else 
        {
			cout << "el anio no es bisiesto" << endl;
		}
        
        cout <<"--------------------------------"<<endl;
		cout << "Ingrese a continuacion el mes:";
		cin >> mes;
		while (mes<0 || mes>12) 
        {
			cout << "Ingrese un mes valido" << endl;
			cin >> mes;
		}
        int dias = diasDelMes(mes,anio);
        cout<<"Tiene "<<dias<<" dias :)"<<endl;
	}
    while (!(anio==1582 && mes==0));

    assert(29 == diasDelMes(01,2021));
	return 0;
}

int diasDelMes(int mes,int anio)
{
    // en principio son 31 dias 
    int dias=31;
    // si es uno de los meses de 30 dias
    if( mes==4 || mes==6 || mes==9 || mes==11 )
        {
            dias=30;
        }
    else
        {
            if( mes==2 ) // es febrero???
                {
                    // si el anio es bisiesto entonces son 29 dias
                    if( esAnioBisiesto(anio) )
                        {
                            dias=29;
                        }
                    else
                        {
                            dias=28;
                        }
                }
        }
    return dias;
}


bool esAnioBisiesto(int anio)
{
    bool esBisiesto = false;

    // es divisible por 4?
    if( anio%4==0 )
        {
            esBisiesto=true;
        } 
    else
        {
            if( anio%400==0 && anio%100!=0 )
                {
                    esBisiesto=true;
                }
        } 
    return esBisiesto;
}
