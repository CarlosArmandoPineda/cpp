#include <iostream>

using namespace std;

string arregloJuegos[10][2] = {
	{ "J001", "The Crew 2"},
	{ "J002", "Jurassic Worl Evolution"},
	{ "J003", "God of War"},
	{ "J004", "Monster Hunter"},
	{ "J005", "Far Cry 5"},	
	{ "J006", "Call of Duty WWII"},
	{ "J007", "Fifa 2018"},
	{ "J008", "Destiny 2"},
	{ "J009", "Horizon Hero"},
	{ "J020", "Rocket League"}
};

void mostrarJuegos() {
	system("cls");
	cout << "C�digo, Descripci�n" <<endl;
	cout << "........................" <<endl <<endl;
	for (int i = 0; i < 5; i++)
    {
    	cout << arregloJuegos[i][0] <<" | ";
        cout << arregloJuegos[i][1] <<" | ";
        cout <<endl;
	}
	
	cout <<endl;
	cout <<endl;
	system("pause");
	
}
