//Conversion de températures de degrés Celsius en degrés Fahrenheit :
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nUumberofArgs, char* pszArgs[])
{
    
    //saisie de la température en Celsius
    int celsius;
    cout <<"Entrez de la température en Celsius :" ;
    cin >> celsius;
    
    //calcul de facteur de conversion de Celsius 
    //en Fahrenheit 
    int factor;
    factor = 212 - 32;
    
    // applique le facteur  de conversion pour le passage 
    // de degrés Celsius en degrés Fahrenheit 
    int fahrenheit ;
    fahrenheit = factor * celsius/100 + 32;
    
    //affiche les résultats (suivis d'un saut de ligne)
    cout << "Valeur en degrés Fahrenheit : ";
    cout << fahrenheit << endl ;
    
    //avant de terminer le programme, attend le signal de 
    //l'utilisateur pour lui permettre de voir le résultat
    system ("pause");
    return 0 ;
}
