#include "Affichable.h"
#include <string>

class Personnage : public Affichable
{
public:
	Personnage() = default;
	Personnage(const string nom, const string titre) : nom_(nom), titre_(titre) {}
	string getNom() { return nom_; }
	string getTitre() { return titre_; }
	void afficher() override{cout << getCouleur() << "Nom: " << nom_ << endl << "Parution: " << titre_ << endl;}
	void changerCouleur(int couleur) override { cout << "\033[" << couleur << "m"; }

private:
	string nom_;
	string titre_;
};