/**
*Astro643
*PokemonTeamBuilder :: TypeT.cpp
*v0.1
*02.22.23
**/

//headers
#include "TypeT.h"
//namespace
using namespace std;

//enum functions
TypeT StringToTypeT(string input){
	//variables
	TypeT result;
	string up_input;

	//set to uppercase
	for (int x = 0; x < input.size(); x++){
		up_input += toupper(input[x]);
	}

	//check if up_input matches a type
	if(up_input == "NORMAL"){
		result = TypeT::NORMAL;
	}else if(up_input == "FIRE"){
		result = TypeT::FIRE;
	}else if(up_input == "WATER") {
		result = TypeT::WATER;
	}else if(up_input == "GRASS"){
		result = TypeT::GRASS;
	}else if(up_input == "ELECTRIC"){
		result = TypeT::ELECTRIC;
	}else if(up_input == "ICE"){
		result = TypeT::ICE;
	}else if(up_input == "FIGHTING"){
		result = TypeT::FIGHTING;
	}else if(up_input == "POISON"){
		result = TypeT::POISON;
	}else if(up_input == "GROUND"){
		result = TypeT::GROUND;
	}else if(up_input == "FLYING"){
		result = TypeT::FLYING;
	}if (up_input == "PSYCHIC"){
		result = TypeT::PSYCHIC;
	}else if(up_input == "BUG"){
		result = TypeT::BUG;
	}else if(up_input == "ROCK"){
		result = TypeT::ROCK;
	}else if(up_input == "GHOST"){
		result = TypeT::GHOST;
	}else if(up_input == "DARK"){
		result = TypeT::DARK;
	}else if(up_input == "DRAGON"){
		result = TypeT::DRAGON;
	}else if(up_input == "STEEL"){
		result = TypeT::STEEL;
	}else if(up_input == "FAIRY"){
		result = TypeT::FAIRY;
	}else{
		//sets as default value if a type is not found
		result = TypeT::NA;
	}

	//exit
	return result;
}

string TypeTToString(TypeT input){
	//variables
	string result;

	//check if input matches a type
	switch(input){
		case TypeT::NORMAL:
			result = "NORMAL";
			break;
		case TypeT::FIRE:
			result = "FIRE";
			break;
		case TypeT::WATER:
			result = "WATER";
			break;
		case TypeT::GRASS:
			result = "GRASS";
			break;
		case TypeT::ELECTRIC:
			result = "ELECTRIC";
			break;
		case TypeT::ICE:
			result = "ICE";
			break;
		case TypeT::FIGHTING:
			result = "FIGHTING";
			break;
		case TypeT::POISON:
			result = "POISON";
			break;
		case TypeT::GROUND:
			result = "GROUND";
			break;
		case TypeT::FLYING:
			result = "FLYING";
			break;
		case TypeT::PSYCHIC:
			result = "PSYCHIC";
			break;
		case TypeT::BUG:
			result = "BUG";
			break;
		case TypeT::ROCK:
			result = "ROCK";
			break;
		case TypeT::GHOST:
			result = "GHOST";
			break;
		case TypeT::DARK:
			result = "DARK";
			break;
		case TypeT::DRAGON:
			result = "DRAGON";
			break;
		case TypeT::STEEL:
			result = "STEEL";
			break;
		case TypeT::FAIRY:
			result = "FAIRY";
			break;
		default:
			//sets as default value if a type is not found
			result = "NA";
	}

	//exit
	return result;
}