/******
*ohjelman nimi: harjoitus 14
*tekij� Markus Malm
*Lyhyt kuvaus:
Tee ohjelma, joka kysyy henkilötietosi seuraavasti:
Anna (kaikki) etunimesi (merkkijono):
Anna kengannumero (kokonaisluku):
Anna sukunimi (merkkijono):
Anna koulumatka (reaaliluku):
Anna osoitteesi:
Anna postinumero:

Ohjelma tulostaa tiedot seuraavasti:
sukunimi etunimet
osoite
postinumero
kengannumero ja koulumatka

Käytä C++:n cin- ja cout-olioita ohjelman toteuttamiseen.

*versio 1.0
*pvm: 22.10.2014
*/
#include <iostream>
using namespace std;
int main(int)
{
	char etunimet[100];
	char sukunimi[100];
	char osoite[100];
	int kenka;
	float matka;
	int pstnr;

	cout << "Anna kaikki etunimesi: ";
	cin.get(etunimet, 100);
	cout << "Anna kengannumerosi kokonaislukuna: ";
	cin >> kenka;
	cin.get();
	cout << "Anna sukunimesi: ";
	cin >> sukunimi;
	cout << "Anna koulumatka kilometreina: ";
	cin >> matka;
	cin.get();
	cout << "Anna osoitteesi: ";
	cin.get(osoite, 100);
	cout << "Anna postinumerosi: ";
	cin >> pstnr;
	system("cls");

	cout << sukunimi << " " << etunimet;
	cout << "\n" << osoite;
	cout << "\n" << pstnr;
	cout << "\nKengannumero: " << kenka <<" ja koulumatka "<< matka << "km";
}