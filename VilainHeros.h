#pragma once
#include "Personnage.h"
#include "Vilain.h"
#include "Heros.h"

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
	void afficher(ostream& os)
	{
		Personnage::afficher(os);
		os << "Objectif ; " << getObjectif() << endl << "Ennemi :" << getEnnemi() << "allies : " << endl;
		printAllies(getAllies());
		os << "Mission speciale : " << missionSpeciale_;
	}
	void changerCouleur(ostream& os, int couleur)
	{
		Vilain::changerCouleur(os,couleur);
		Heros::changerCouleur(os,couleur);
	}
private:
	string missionSpeciale_;

};