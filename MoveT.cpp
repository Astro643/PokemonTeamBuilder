/**
*Astro643
*PokemonTeamBuilder (PTB) :: MoveT.cpp
*v0.1.1
*02.28.23
**/

//headers
#include "MoveT.h"
//namespace
using namespace std;

//functions
//def ctor
MoveT::MoveT(void){
	name = "";
	atk_type = "";
	power = 0;
	accuracy = 0;
}

//param ctor
MoveT::MoveT(string n, string a_t, int p, int a) : name(n), atk_type(a_t), power(p), accuracy(a){

}

//setters
void MoveT::SetName(string n){
	name = n;
}

void MoveT::SetAtk_Type(string a_t) {
	atk_type = a_t;
}

void MoveT::SetPower(int p){
	power = p;
}

void MoveT::SetAccuracy(int a){
	accuracy = a;
}

//getters
string MoveT::GetName(void){
	return name;
}

string MoveT::GetAtk_Type(void){
	return atk_type;
}

int MoveT::GetPower(void){
	return power;
}

int MoveT::GetAccuracy(void){
	return accuracy;
}