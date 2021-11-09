#pragma once
#include "Personnage.h"
class Vilain : virtual public Personnage
{
public:
	Vilain() = default;
	Vilain(const string nom, const string titre, const string objectif) :
		Personnage(nom, titre), objectif_(objectif) {}
	string getObjectif() { return objectif_; }

	void afficher(ostream& os)  //maybe add ostream& os if cout does not work
	{
		Personnage:: afficher(os);
		os << "objectif : " << objectif_ << endl ;
	}
private:
	string objectif_;
	
};
	 