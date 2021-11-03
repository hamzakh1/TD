#pragma once

class Heros : virtual public Personnage
{
public:
	Personnage getHero(Personnage hero) hero_(hero) {}
	string getEnnemi(string ennemi) ennemi_(ennemi) {}
	vector<Personnage> getAllies(vector<Personnage> allies) allies_(allies) {}
	void printAllies()
	{
		for (auto i : allies_) // maybe add && to auto (to be verified)
			cout << i.getNom() << endl;
	}
	void afficher()  //maybe add ostream& os if cout does not work
	{ 
		hero_.afficher();
		cout << "Ennemi : " << ennemi_ << endl << "Allies : ";
		printAllies();
		
	}
private:
	Personnage hero_;
	string ennemi_;
	vector<Personnage> allies_;

};