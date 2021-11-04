
#include "Personnage.h"

class Heros : virtual public Personnage
{
public:
	Heros() = default;
	Heros(const string nom, const string titre, const string ennemi, vector<string> allies) : 
		Personnage(nom, titre), ennemi_(ennemi), allies_(allies) {}
	string getEnnemi() { return ennemi_; }
	vector<string> getAllies() { return allies_; }
	void printAllies(vector<string> allies_)
	{
		for (auto i : allies_) // maybe add && to auto (to be verified)
			cout << i << endl;
	}
	void afficher()  //maybe add ostream& os if cout does not work
	{ 
		Personnage :: afficher();
		cout << "Ennemi : " << ennemi_ << endl << "Allies : ";
		printAllies(allies_);
		
	}
	void addAllies(string ally)
	{
		allies_.push_back(ally);
	}
private:
	string ennemi_;
	vector<string> allies_;

};