/**
*Astro643
*PokemonTeamBuilder (PTB) :: PokemonT.h
*v0.2
*02.22.23
**/

#pragma once

//headers
#include <string>
#include "TypeT.h"
#include "NatureT.h"
#include "MoveT.h"

//global
const int MAX_IVs = 32;
const int MAX_EVs = 255;

//class
class PokemonT{
	//private
	private:
		std::string name;
		TypeT t1, t2;
		NatureT nature;
		int t_hp, t_atk, t_def, t_sAtk, t_sDef, t_spd; //total
		int b_hp, b_atk, b_def, b_sAtk, b_sDef, b_spd; //base
		int i_hp, i_atk, i_def, i_sAtk, i_sDef, s_spd; //IV's
		int e_hp, e_atk, e_def, e_sAtk, e_sDef, e_spd; //EV's
		int available_EVs = 510;
		MoveT m1, m2, m3, m4;

		//public
		public:
			//setters
				void SetName(std::string n);
				//types
				void SetTypeT1(TypeT t);
				void SetTypeT2(TypeT t);
				void SetTypeT1(std::string t);
				void SetTypeT2(std::string t);
				void SetTypes(void);
				//nature
				void SetNatureT(NatureT nt);
				void SetNatureT(std::string nt);
				//base stats
				void SetBHP(int h);
				void SetBAtk(int a);
				void SetBDef(int d);
				void SetBSAtk(int sA);
				void SetBSDef(int sD);
				void SetBSpd(int s);
				//IVs
				void SetIHP(int h);
				void SetIAtk(int a);
				void SetIDef(int d);
				void SetISAtk(int sA);
				void SetISDef(int sD);
				void SetISpd(int s);
				//EVs
				void SetEHP(int h);
				void SetEAtk(int a);
				void SetEDef(int d);
				void SetESAtk(int sA);
				void SetESDef(int sD);
				void SetESpd(int s);
				//moves
				void SetMove1(MoveT m);
				void SetMove2(MoveT m);
				void SetMove3(MoveT m);
				void SetMove4(MoveT m);
			//getters

};