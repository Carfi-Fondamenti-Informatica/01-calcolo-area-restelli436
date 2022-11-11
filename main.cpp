#include <iostream>
using namespace std;

int main(){

float a, b, c;


cin >> a >> b >> c;


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
