/**
*Astro643
*PokemonTeamBuilder (PTB) :: PokemonT.cpp
*v0.2
*02.22.23
**/

//headers
#include <iostream>
#include <cmath>
#include "PokemonT.h"
//namespace
using namespace std;

//class functions
//def ctor
PokemonT::PokemonT(void){
	name = "";
	t1 = TypeT::NA, t2 = TypeT::NA;
	nature = NatureT::NA;
	lvl = 0;
	//base
	b_hp = 0, b_atk = 0, b_def = 0, b_sAtk = 0, b_sDef = 0, b_spd = 0;
	//IV's
	i_hp = 0, i_atk = 0, i_def = 0, i_sAtk = 0, i_sDef = 0, i_spd = 0;
	//EV's
	e_hp = 0, e_atk = 0, e_def = 0, e_sAtk = 0, e_sDef = 0, e_spd = 0;
	available_EVs = 510;
	//total
	t_hp = 0, t_atk = 0, t_def = 0, t_sAtk = 0, t_sDef = 0, t_spd = 0;
}

//param ctor
PokemonT::PokemonT(string n, TypeT tO, TypeT tT, NatureT nt, int l, int b_h, int b_a, int b_d, int b_sA, int b_sD, int b_s){
	name = n;
	t1 = tO, t2 = tT;
	nature = nt;
	lvl = l;
	//base
	b_hp = 0, b_atk = 0, b_def = 0, b_sAtk = 0, b_sDef = 0, b_spd = 0;
	//IV's
	i_hp = 0, i_atk = 0, i_def = 0, i_sAtk = 0, i_sDef = 0, i_spd = 0;
	//EV's
	e_hp = 0, e_atk = 0, e_def = 0, e_sAtk = 0, e_sDef = 0, e_spd = 0;
	available_EVs = 510;
	//total
	CalcT_HP();
	CalcT_Atk();
	CalcT_Def();
	CalcT_SAtk();
	CalcT_SDef();
	CalcT_Spd();
}

/**
*formulas to calculate the total of each stat
*hp is different than rest of stats
*occurs when there is a change in base stat, stat IV's, or stat EV's
**/
void PokemonT::CalcT_HP(void){
	t_hp = floor(0.01 * (2 * b_hp + i_hp + floor(0.25 * e_hp)) * lvl) + lvl + 10;
}

void PokemonT::CalcT_Atk(void){
	t_atk = (floor(0.01 * (2 * b_atk + i_atk + floor(0.25 * e_atk)) * lvl) + lvl + 5) * NaturePercentAtk(nature);
}

void PokemonT::CalcT_Def(void) {
	t_def = (floor(0.01 * (2 * b_def + i_def + floor(0.25 * e_def)) * lvl) + lvl + 5) * NaturePercentDef(nature);
}

void PokemonT::CalcT_SAtk(void) {
	t_sAtk = (floor(0.01 * (2 * b_sAtk + i_sAtk + floor(0.25 * e_sAtk)) * lvl) + lvl + 5) * NaturePercentSAtk(nature);
}

void PokemonT::CalcT_SDef(void) {
	t_sDef = (floor(0.01 * (2 * b_sDef + i_sDef + floor(0.25 * e_sDef)) * lvl) + lvl + 5) * NaturePercentSDef(nature);
}

void PokemonT::CalcT_Spd(void) {
	t_spd = (floor(0.01 * (2 * b_spd + i_spd + floor(0.25 * e_spd)) * lvl) + lvl + 5) * NaturePercentSpd(nature);
}