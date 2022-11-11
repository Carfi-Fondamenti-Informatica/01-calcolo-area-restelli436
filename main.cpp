#include <iostream>
using namespace std;

int main(){
//Qui vanno definite le variabili
float a, b, c;


cin >> a >> b >> c;

//Qui va scritto il codice per eseguire i calcoli richiesti
float Areatriangolo = (a+b) / 2;
float Areaquadrato = (a * a);
float Arearettangolo = (a * b);
float Areatrapezio = ((a+b) * c)/2;

cout << Areatriangolo << endl;
cout << Areaquadrato << endl;
cout << Arearettangolo << endl;
cout << Areatrapezio << endl;

return 0;

}
