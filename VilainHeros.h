#pragma once

class VilainHeros : public Vilain, Heros
{
public:
	VilainHeros() = default;

	VilainHeros(const shared_ptr<Heros> heros, const shared_ptr<Vilain> vilain) ://assign
		Personnage(vilain->getNom() + " - " + heros->getNom(), vilain->getTitre() + " - " + heros->getTitre()),
		Heros("", "", heros->getEnnemi(), heros->getAllies()),
		Vilain("", "", vilain->getObjectif()),
		missionSpeciale_(vilain->getObjectif() + " dans le monde de " + heros->getTitre())
	{}
	void afficher()
	{
		Personnage::afficher();
		cout << "Objectif ; " << getObjectif() << endl << "Ennemi :" << getEnnemi() << "allies : " << endl;
		printAllies(getAllies);
		cout << "Mission speciale : " << missionSpeciale_;
	}
	void changerCouleur(int couleur) 
	{
		Vilain::changerCouleur(couleur);
		Heros::changerCouleur(couleur);
	}
private:
	string missionSpeciale_;

};