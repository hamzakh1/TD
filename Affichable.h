

class Affichable
{
public:
	//Cr�er une classe compl�tement abstraite(interface) nomm�e Affichable ayant deux m�thodes virtuelles
	//	pures nomm�es afficher et changerCouleur
	virtual void afficher()=0; //pure virtual fct
	virtual void changerCouleur(int couleur)=0; 
	void setCouleur(int couleur) { couleur_ = couleur; }
	int getCouleur() { return couleur_; }
private:
	int couleur_;

};