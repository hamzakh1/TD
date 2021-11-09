#include "Affichable.h"
#include <string>

class Personnage : public Affichable
{
public:
	Personnage() = default;
    virtual ~Personnage();
	Personnage(const string nom, const string titre) : nom_(nom), titre_(titre) {}
	string getNom() { return nom_; }
	string getTitre() { return titre_; }
	void afficher(ostream& os) override {os <<  "Nom: " << nom_ << endl << "Parution: " << titre_ << endl;}
    void changerCouleur(ostream& os, int couleur) override {
        switch (couleur)
        {
        case 1:
            os << "\033[34m";
            break;
        case 2:
            os << "\033[91m";
            break;
        case 3:
            os << "\033[35m";
            break;
        default:
            os << "\033[92m";
            break;
        }
    }

private:
	string nom_;
	string titre_;
};