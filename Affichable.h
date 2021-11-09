#include <ostream>

class Affichable
{
public:
	//Créer une classe complètement abstraite(interface) nommée Affichable ayant deux méthodes virtuelles
	//	pures nommées afficher et changerCouleur
	virtual void afficher(ostream& os)=0; //pure virtual fct
	virtual void changerCouleur(ostream& os, int couleur)=0;


};