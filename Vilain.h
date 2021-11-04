#pragma once

class Vilain : virtual public Personnage
{
public:
	Vilain() = default;
	Vilain(const string nom, const string titre, const string objectif) :
		Personnage(nom, titre), objectif_(objectif) {}
	string getObjectif() { return objectif_; }

	void afficher()  //maybe add ostream& os if cout does not work
	{
		Personnage:: afficher();
		cout << "objectif : " << objectif_ << endl ;
	}
private:
	string objectif_;
	
};
	 