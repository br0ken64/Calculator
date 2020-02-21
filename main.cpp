//Calculator
//by br0ke64
//21022020
//sucksZ
#include <iostream>
#include <string>

using namespace std;


int main(){




double zahl1;
double zahl2;
double ergebnis;
char rechenzeichen;

//eingaben
cout << "Zahl1: " << endl;
cin >> zahl1;
cout << "rechenzeichen" << endl;
cin >> rechenzeichen;
cout << "zahl2: " << endl;
cin >> zahl2;

//zeichenabfrage
switch(rechenzeichen) {
  case '+':
  ergebnis = zahl1 + zahl2;
  break;

  case '-':
  ergebnis = zahl1 - zahl2;
  break;

  case '/':
  ergebnis = zahl1 / zahl2;
  break;

  case '*':
  ergebnis = zahl1 * zahl2;
  break;

  default: cout << "Kein gültiges rechenzeichen..." << endl;
  return 0;
 }
//endausgabe
 cout << "Ergenis von:"<< endl;
 cout << zahl1 << rechenzeichen << zahl2 << "=  " << ergebnis << endl;
}
