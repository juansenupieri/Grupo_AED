#include<iostream>
#include<cassert>
using namespace std;

int ingresarAnio();

int ingresarMes();

int diasDelMes(int,int);

bool esAnioBisiesto(int);

int main() 
{
    cout << "< Este programa le permite saber si un anio es bisiesto y cuanto dias tiene el mes. >" << endl;

    int anio,mes;
    anio = ingresarAnio();

    cout<<endl;
    esAnioBisiesto(anio)==true? cout<<"El anio es bisiesto."<<endl : cout<<"El anio NO es bisiesto."<<endl;
    
    mes = ingresarMes();

    int dias = diasDelMes(mes,anio);

    cout<<endl;
    cout<<"Tiene "<<dias<<" dias :)"<<endl;

    assert (29 == diasDelMes (2,2000));
    assert (31 == diasDelMes (3,2000));
    assert (30 == diasDelMes (6,2005));
    assert (30 == diasDelMes (6,2021));

    assert (true == esAnioBisiesto(2020));
    assert (false == esAnioBisiesto(2021));
    assert (false == esAnioBisiesto(3021));
    assert (true == esAnioBisiesto(2000));
    
	return 0;
}

int ingresarAnio()
{
    //funcion para ingresar anios
    int anio;
    cout<<"------------------------------------"<<endl;
    cout << "Ingrese a continuacion el anio: ";
	cin >> anio;
    if(anio<1582 or anio>3021)
    {
        cout<<endl;
        cout<<"El anio no cumple los parametros."<<endl;
        cout<<"Ingrese un anio con formato de 1582 al 3021."<<endl;
        ingresarAnio();
    }

    return anio;
}

int ingresarMes()
{
    //función para ingresar meses
    int mes;
    cout <<"--------------------------------"<<endl;
	cout << "Ingrese a continuacion el mes:";
	cin >> mes;
    if(mes<1 or mes>12)
    {
        cout<<endl;
        cout<<"El mes no cumple los parametros."<<endl;
        cout<<"Ingrese un mes con formato de 1 al 12."<<endl;
        ingresarMes();
    }
    return mes;
}

int diasDelMes(int mes,int anio)
{
    //cuantos días tiene el mes?
    int dias=31;
    mes==4 || mes==6 || mes==9 || mes==11? dias=30: 
    (mes==2? (esAnioBisiesto(anio)? dias=29 : dias=28):
    dias=31);
    return dias;
}


bool esAnioBisiesto(int anio)
{
    // es divisible por 4?
    bool esBisiesto;
    anio%4!=0? esBisiesto=false:esBisiesto=true;
    return esBisiesto;
}
