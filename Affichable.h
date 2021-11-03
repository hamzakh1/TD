

class Affichable
{
public:
	//Créer une classe complètement abstraite(interface) nommée Affichable ayant deux méthodes virtuelles
	//	pures nommées afficher et changerCouleur
	virtual void afficher()=0; //pure virtual fct
	virtual void changerCouleur(int couleur)=0; 
	void setCouleur(int couleur) { couleur_ = couleur; }
	int getCouleur() { return couleur_; }
private:
	int couleur_;

};