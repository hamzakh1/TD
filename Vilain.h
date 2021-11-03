#pragma once

class Vilain : virtual public Personnage
{
public:
	getPersonnage getVilain(Personnage vilain) vilain_(vilain) {}
	string getObjectif(string objectif) objectif_(objectif) {}

	void afficher()  //maybe add ostream& os if cout does not work
	{
		vilain_.afficher();
		cout << "objectif : " << objectif_ << endl ;
	}
private:
	string objectif_;
	Personnage vilain_;
};
	 