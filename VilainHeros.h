#pragma once

class VilainHeros : public Vilain, public Heros
{
public:
	VilainHeros((const Heros& heros, const Vilain& vilain)) //assign
	{
		vilainHeros_.setTitre(heros.getHeros().getTitre() + "-" + vilain.getVilain().getTItre());
		vilainHeros_.setNom(heros.getHeros().getNom() + "-" + vilain.getVilain().getNom());
		missionSpeciale_ = vilain.getObjectif() + " dans le monde de " + heros.getHeros().getTitre();
	}
	afficher()
	{
		cout << "Nom: " << vilainHeros_.getNom() << endl << "Parution: " << vilainHeros.getTitre() << endl;
		cout << "Objectif : " << objectif_.getObjectif() << endl;
		cout << "allies : " << allies_.printAllies)() << endl;
		cout << "Missions speciale : " << missionSpeciale_ << endl;
	}
private:
	string missionSpeciale_;

};