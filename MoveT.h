/**
*Astro643
*PokemonTeamBuilder (PTB) :: MoveT.h
*v0.1.1
*02.28.23
*/

#pragma once

//headers
#include <string>

//class
class MoveT{
	//private
	private:
		std::string name;
		std::string atk_type; //physical, special, status
		int power;
		int accuracy;

	//public
	public:
		//def ctor
		MoveT(void);
		//param ctor
		MoveT(std::string n, std::string a_t, int p, int a);

		//setters
		void SetName(std::string n);
		void SetAtk_Type(std::string a_t);
		void SetPower(int p);
		void SetAccuracy(int a);

		//getters
		std::string GetName(void);
		std::string GetAtk_Type(void);
		int GetPower(void);
		int GetAccuracy(void);
};