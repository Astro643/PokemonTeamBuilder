/**
*Astro643
*PokemonTeamBuilder (PTB) :: PokemonT.h
*v0.2.1
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
		int lvl;
		int b_hp, b_atk, b_def, b_sAtk, b_sDef, b_spd; //base
		int i_hp, i_atk, i_def, i_sAtk, i_sDef, i_spd; //IV's
		int e_hp, e_atk, e_def, e_sAtk, e_sDef, e_spd; //EV's
		int t_hp, t_atk, t_def, t_sAtk, t_sDef, t_spd; //total
		int available_EVs;
		MoveT m1, m2, m3, m4;

		//public
		public:
			//def ctor
			PokemonT(void);
			//param ctor
			PokemonT(std::string n, TypeT tO, TypeT tT, NatureT nt, int l, int b_h, int b_a, int b_d, int b_sA, int b_sD, int b_s);

			//setters
				//name
				void SetName(std::string n);
				//types
				void SetTypeT1(TypeT t);
				void SetTypeT2(TypeT t);
				void SetTypes(TypeT t);
				void SetTypes(TypeT t1, TypeT t2);
				//nature
				void SetNatureT(NatureT nt);
				//lvl
				void SetLvl(int l);
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
				void SetMoveT1(MoveT m);
				void SetMoveT2(MoveT m);
				void SetMoveT3(MoveT m);
				void SetMoveT4(MoveT m);

			//getters
				//name
				std::string GetName(void);
				//types
				TypeT GetType1(void);
				TypeT GetType2(void);
				//nature
				NatureT GetNatureT(void);
				//lvl
				int GetLvl(void);
				//base stats
				int GetB_HP(void);
				int GetB_Atk(void);
				int GetB_Def(void);
				int GetB_SAtk(void);
				int GetB_SDef(void);
				int GetB_Spd(void);
				//IVs
				int GetI_HP(void);
				int GetI_Atk(void);
				int GetI_Def(void);
				int GetI_SAtk(void);
				int GetI_SDef(void);
				int GetI_Spd(void);
				//EVs
				int GetE_HP(void);
				int GetE_Atk(void);
				int GetE_Def(void);
				int GetE_SAtk(void);
				int GetE_SDef(void);
				int GetE_Spd(void);
				//total stats
				int GetT_HP(void);
				int GetT_Atk(void);
				int GetT_Def(void);
				int GetT_SAtk(void);
				int GetT_SDef(void);
				int GetT_Spd(void);
				//moves
				MoveT GetMoveT1(void);
				MoveT GetMoveT2(void);
				MoveT GetMoveT3(void);
				MoveT GetMoveT4(void);

			//calculate total stats - done when base stats, IVs, and EVs change
			void CalcT_HP(void);
			void CalcT_Atk(void);
			void CalcT_Def(void);
			void CalcT_SAtk(void);
			void CalcT_SDef(void);
			void CalcT_Spd(void);
};