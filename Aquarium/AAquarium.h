#pragma once
#include "Predateur.h"
#include "Proie.h"

#define OUT
using TPredateur = std::vector<Predateur*>;
using TProie = std::vector<Proie*>;


class AAquarium
{
public:
	AAquarium();
	~AAquarium();
	/*
	void PasserTemps();
	void AjouterPredateur(Predateur* poisson);
	void AjouterProie(Proie* algue);
	void AfficherAquarium();
	int GetTPoissonSize();
private:
	void PoissonPasNourri(OUT TPredateur* T_);
	void Update();
	*/

	TPredateur T_Poisson; // TODO create a type of special array for 
	TProie T_Algue;     // both of these to vector
};

