#pragma once
#include <iostream>
#include <vector>
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
	void AfficherAquarium();
	void PasserTemps();
	/*
	void AjouterPredateur(Predateur* poisson);
	void AjouterProie(Proie* algue);
	int GetTPoissonSize();
private:
	void PoissonPasNourri(OUT TPredateur* T_);
	void Update();
	*/

	TPredateur T_Poisson; // TODO create a type of special array for 
	TProie T_Algue;     // both of these to vector
};

