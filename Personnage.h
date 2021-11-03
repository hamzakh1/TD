#pragma once

using namespace std

class Personnage : public Affichable
{
public:
	string getNom() { return nom_; }
	string setNom(string nom) nom_(nom) {};
	string getTitre() { return titre_; }
	string setTitre(string titre) titre_(titre){};
	void afficher() override{cout << "\033[" << getCouleur() << "Nom: " << nom_ << endl << "Parution: " << titre_ << endl;}

private:
	string nom_;
	string titre_;
};