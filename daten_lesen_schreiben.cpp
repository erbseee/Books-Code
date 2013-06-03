// cppbuch/k2/datcopy.cpp kopiert eine Datei

#include <iostream>
#include <cstdlib> //für exit()
#include <fstream>
#include <string>
using namespace std;

int main() 
{
  ifstream quelle;
	string quelldateiname;
	cout << "Quelledatei?";
	getline(cin, quelldateiname); //hier kann man Leerzeichen enthalten
	quelle.open(quelldateiname, ios::binary|ios::in);
	if (!quelle) //Fehlerabfrage
	{
		cerr << quelldateiname << " kann nicht geöffnet werden!\n";
		exit(-1);
	}
	string zieldateiname;
	cout<<"Zieldatei?";
	getline(cin, zieldateiname);
	ofstream ziel(zieldateiname, ios::binary|ios::out);
	if (!ziel)
	{
		cerr << zieldateiname << " kann nicht geöffnet werden!\n";
		exit(-1);
	}
	char ch;
	while (quelle.get(ch))
		ziel.put(ch); //zeichenweise kopieren
} // Dateien werden am Programmende automatisch geschlossen.
