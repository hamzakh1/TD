#pragma once
#include <iostream>
#include <memory>
#include <cassert>
#include "gsl/span"
#include "cppitertools/range.hpp"

using namespace iter;
using namespace std;

template <typename T>
class Liste
{
public:
	//TODO: Constructeurs et surcharges d'op�rateurs
	Liste(int capacite)
	{
		nElements_ = 0;
		capacite_ = capacite;
		element_ = make_unique<shared_ptr<T>[]>(capacite);
	}

	Liste<T>& operator=(const Liste<T>& autre)
	{
		if(this != &autre) 
		{
			capacite_ = autre.capacite_;
			nElements_ = autre.nElements_;
			element_ = make_unique<shared_ptr<T>[]>(capacite_);
			for (int i : iter:: range(capacite_))
				element_[i] = autre.element_[i];
		}
		return *this;
	}
	shared_ptr<T[]> getElement() const
	{
		return element_;
	}
	int getNElement() const
	{
		return nElements_;
	}

	//TODO: M�thode pour ajouter un �l�ment � la liste
	Liste(const Liste<T>& liste) // a revoir !
	{
		*this = liste;
	}
	// Pour size, on utilise le m�me nom que les accesseurs de la biblioth�que standard, qui permet d'utiliser certaines fonctions de la bibliotheque sur cette classe.
	unsigned size() const         { return nElements_; }
	unsigned getCapacite() const  { return capacite_; }

	//TODO: M�thode pour changer la capacit� de la liste
	void ajouterElement(shared_ptr<T[]> element)
	{
		if (capacite_ <= 0) // capacite invalide
		{
			capacite_ = 1;
			nElements_ = 0;
			element_ = make_unique<shared_ptr<T>[]>(1);
		}
		else if (capacite_ <= nElements_) // capacite insuffisante
		{
			capacite_ *= 2;
			unique_ptr<shared_ptr<T>[]> newElements = make_unique<shared_ptr<T>[]>(capacite_);
		}
	}
	//TODO: M�thode pour trouver une �l�ment selon un crit�re (lambda).

private:

	int nElements_;
	int capacite_;
	//TODO: Attribut contenant les �l�ments de la liste.
	unique_ptr<shared_ptr<T>[]> elements_;
};
