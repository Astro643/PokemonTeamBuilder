/**
*Astro643
*PokemonTeamBuilder (PTB) :: NatureT.cpp
*v0.2
*02.22.23
**/

//headers
#include "NatureT.h"
//namespace
using namespace std;

//enum functions
NatureT StringToNatureT(string input){
	//variables
	NatureT result = NatureT::NA;
	string up_input = "";

	//set to uppercase
	for (int x = 0; x < input.size(); x++) {
		up_input += toupper(input[x]);
	}

	//check if up_input matches a nature
	if(up_input == "HARDY"){
		result = NatureT::HARDY;
	}else if(up_input == "LONELY"){
		result = NatureT::LONELY;
	}else if(up_input == "BRAVE"){
		result = NatureT::BRAVE;
	}else if(up_input == "ADAMANT"){
		result = NatureT::ADAMANT;
	}else if(up_input == "NAUGHTY"){
		result = NatureT::NAUGHTY;
	}else if(up_input == "BOLD"){
		result = NatureT::BOLD;
	}else if(up_input == "DOCILE"){
		result = NatureT::DOCILE;
	}else if(up_input == "RELAXED"){
		result = NatureT::RELAXED;
	}else if(up_input == "IMPISH"){
		result = NatureT::IMPISH;
	}else if(up_input == "LAX"){
		result = NatureT::LAX;
	}else if(up_input == "TIMID"){
		result = NatureT::TIMID;
	}else if(up_input == "HASTY"){
		result = NatureT::HASTY;
	}else if(up_input == "SERIOUS"){
		result = NatureT::SERIOUS;
	}else if(up_input == "JOLLY"){
		result = NatureT::JOLLY;
	}else if(up_input == "NAIVE"){
		result = NatureT::NAIVE;
	}else if(up_input == "MODEST"){
		result = NatureT::MODEST;
	}else if(up_input == "MILD"){
		result = NatureT::MILD;
	}else if(up_input == "QUIET"){
		result = NatureT::QUIET;
	}else if(up_input == "BASHFUL"){
		result = NatureT::BASHFUL;
	}else if(up_input == "RASH"){
		result = NatureT::RASH;
	}else if(up_input == "CALM"){
		result = NatureT::CALM;
	}else if(up_input == "GENTLE"){
		result = NatureT::GENTLE;
	}else if(up_input == "SASSY"){
		result = NatureT::SASSY;
	}else if(up_input == "CAREFUL"){
		result = NatureT::CAREFUL;
	}else if(up_input == "QUIRKY"){
		result = NatureT::QUIRKY;
	}else{
		result = NatureT::NA;
	}

	//exit
	return result;
}

string NatureTToString(NatureT input){
	//variables
	string result = "";

	//check if input matches a nature
	switch (input){
		case NatureT::HARDY:
			result = "HARDY";
			break;
		case NatureT::LONELY:
			result = "LONELY";
			break;
		case NatureT::BRAVE:
			result = "BRAVE";
			break;
		case NatureT::ADAMANT:
			result = "ADAMANT";
			break;
		case NatureT::NAUGHTY:
			result = "NAUGHTY";
			break;
		case NatureT::BOLD:
			result = "BOLD";
			break;
		case NatureT::DOCILE:
			result = "DOCILE";
			break;
		case NatureT::RELAXED:
			result = "RELAXED";
			break;
		case NatureT::IMPISH:
			result = "IMPISH";
			break;
		case NatureT::LAX:
			result = "LAX";
			break;
		case NatureT::TIMID:
			result = "TIMID";
			break;
		case NatureT::HASTY:
			result = "HASTY";
			break;
		case NatureT::SERIOUS:
			result = "SERIOUS";
			break;
		case NatureT::JOLLY:
			result = "JOLLY";
			break;
		case NatureT::NAIVE:
			result = "NAIVE";
			break;
		case NatureT::MODEST:
			result = "MODEST";
			break;
		case NatureT::MILD:
			result = "MILD";
			break;
		case NatureT::QUIET:
			result = "QUIET";
			break;
		case NatureT::BASHFUL:
			result = "BASHFUL";
			break;
		case NatureT::RASH:
			result = "RASH";
			break;
		case NatureT::CALM:
			result = "CALM";
			break;
		case NatureT::GENTLE:
			result = "GENTLE";
			break;
		case NatureT::SASSY:
			result = "SASSY";
			break;
		case NatureT::CAREFUL:
			result = "CAREFUL";
			break;
		case NatureT::QUIRKY:
			result = "QUIRKY";
			break;
		default:
			//sets as default value if a nature is not found
			result = "NA";
	}

	//exit
	return result;
}

/**
*checks which nature and assignes a double value to each stat
*0.9 - debuf
*1.0 - neutral
*1.1 - buff
**/
double NaturePercentAtk(NatureT nature){
	//variables
	double percent = 0.0;

	//finds which nature, sets stats accordingly
	switch(nature){
		case NatureT::HARDY:
			percent = 1.0;
			break;
		case NatureT::LONELY:
			percent = 1.1;
			break;
		case NatureT::BRAVE:
			percent = 1.1;
			break;
		case NatureT::ADAMANT:
			percent = 1.1;
			break;
		case NatureT::NAUGHTY:
			percent = 1.1;
			break;
		case NatureT::BOLD:
			percent = 0.9;
			break;
		case NatureT::DOCILE:
			percent = 1.0;
			break;
		case NatureT::RELAXED:
			percent = 1.0;
			break;
		case NatureT::IMPISH:
			percent = 1.0;
			break;
		case NatureT::LAX:
			percent = 1.0;
			break;
		case NatureT::TIMID:
			percent = 0.9;
			break;
		case NatureT::HASTY:
			percent = 1.0;
			break;
		case NatureT::SERIOUS:
			percent = 1.0;
			break;
		case NatureT::JOLLY:
			percent = 1.0;
			break;
		case NatureT::NAIVE:
			percent = 1.0;
			break;
		case NatureT::MODEST:
			percent = 0.9;
			break;
		case NatureT::MILD:
			percent = 1.0;
			break;
		case NatureT::QUIET:
			percent = 1.0;
			break;
		case NatureT::BASHFUL:
			percent = 1.0;
			break;
		case NatureT::RASH:
			percent = 1.0;
			break;
		case NatureT::CALM:
			percent = 0.9;
			break;
		case NatureT::GENTLE:
			percent = 1.0;
			break;
		case NatureT::SASSY:
			percent = 1.0;
			break;
		case NatureT::CAREFUL:
			percent = 1.0;
			break;
		case NatureT::QUIRKY:
			percent = 1.0;
			break;
		default:
			percent = 1.0;
	}

	//exit
	return percent;
}

double NaturePercentDef(NatureT nature) {
	//variables
	double percent = 0.0;

	//finds which nature, sets stats accordingly
	switch (nature) {
	case NatureT::HARDY:
		percent = 1.0;
		break;
	case NatureT::LONELY:
		percent = 0.9;
		break;
	case NatureT::BRAVE:
		percent = 1.0;
		break;
	case NatureT::ADAMANT:
		percent = 1.0;
		break;
	case NatureT::NAUGHTY:
		percent = 1.0;
		break;
	case NatureT::BOLD:
		percent = 1.1;
		break;
	case NatureT::DOCILE:
		percent = 1.0;
		break;
	case NatureT::RELAXED:
		percent = 1.1;
		break;
	case NatureT::IMPISH:
		percent = 1.1;
		break;
	case NatureT::LAX:
		percent = 1.1;
		break;
	case NatureT::TIMID:
		percent = 1.0;
		break;
	case NatureT::HASTY:
		percent = 0.9;
		break;
	case NatureT::SERIOUS:
		percent = 1.0;
		break;
	case NatureT::JOLLY:
		percent = 1.0;
		break;
	case NatureT::NAIVE:
		percent = 1.0;
		break;
	case NatureT::MODEST:
		percent = 1.0;
		break;
	case NatureT::MILD:
		percent = 0.9;
		break;
	case NatureT::QUIET:
		percent = 1.0;
		break;
	case NatureT::BASHFUL:
		percent = 1.0;
		break;
	case NatureT::RASH:
		percent = 1.0;
		break;
	case NatureT::CALM:
		percent = 1.0;
		break;
	case NatureT::GENTLE:
		percent = 0.9;
		break;
	case NatureT::SASSY:
		percent = 1.0;
		break;
	case NatureT::CAREFUL:
		percent = 1.0;
		break;
	case NatureT::QUIRKY:
		percent = 1.0;
		break;
	default:
		percent = 1.0;
	}

	//exit
	return percent;
}

double NaturePercentSAtk(NatureT nature) {
	//variables
	double percent = 0.0;

	//finds which nature, sets stats accordingly
	switch (nature) {
	case NatureT::HARDY:
		percent = 1.0;
		break;
	case NatureT::LONELY:
		percent = 1.0;
		break;
	case NatureT::BRAVE:
		percent = 1.0;
		break;
	case NatureT::ADAMANT:
		percent = 0.9;
		break;
	case NatureT::NAUGHTY:
		percent = 1.0;
		break;
	case NatureT::BOLD:
		percent = 1.0;
		break;
	case NatureT::DOCILE:
		percent = 1.0;
		break;
	case NatureT::RELAXED:
		percent = 1.0;
		break;
	case NatureT::IMPISH:
		percent = 0.9;
		break;
	case NatureT::LAX:
		percent = 1.0;
		break;
	case NatureT::TIMID:
		percent = 1.0;
		break;
	case NatureT::HASTY:
		percent = 1.0;
		break;
	case NatureT::SERIOUS:
		percent = 1.0;
		break;
	case NatureT::JOLLY:
		percent = 0.9;
		break;
	case NatureT::NAIVE:
		percent = 1.0;
		break;
	case NatureT::MODEST:
		percent = 1.1;
		break;
	case NatureT::MILD:
		percent = 1.1;
		break;
	case NatureT::QUIET:
		percent = 1.1;
		break;
	case NatureT::BASHFUL:
		percent = 1.0;
		break;
	case NatureT::RASH:
		percent = 1.1;
		break;
	case NatureT::CALM:
		percent = 1.0;
		break;
	case NatureT::GENTLE:
		percent = 1.0;
		break;
	case NatureT::SASSY:
		percent = 1.0;
		break;
	case NatureT::CAREFUL:
		percent = 0.9;
		break;
	case NatureT::QUIRKY:
		percent = 1.0;
		break;
	default:
		percent = 1.0;
	}

	//exit
	return percent;
}

double NaturePercentSDef(NatureT nature) {
	//variables
	double percent = 0.0;

	//finds which nature, sets stats accordingly
	switch (nature) {
	case NatureT::HARDY:
		percent = 1.0;
		break;
	case NatureT::LONELY:
		percent = 1.0;
		break;
	case NatureT::BRAVE:
		percent = 1.0;
		break;
	case NatureT::ADAMANT:
		percent = 1.0;
		break;
	case NatureT::NAUGHTY:
		percent = 0.9;
		break;
	case NatureT::BOLD:
		percent = 1.0;
		break;
	case NatureT::DOCILE:
		percent = 1.0;
		break;
	case NatureT::RELAXED:
		percent = 1.0;
		break;
	case NatureT::IMPISH:
		percent = 1.0;
		break;
	case NatureT::LAX:
		percent = 0.9;
		break;
	case NatureT::TIMID:
		percent = 1.0;
		break;
	case NatureT::HASTY:
		percent = 1.0;
		break;
	case NatureT::SERIOUS:
		percent = 1.0;
		break;
	case NatureT::JOLLY:
		percent = 1.0;
		break;
	case NatureT::NAIVE:
		percent = 0.9;
		break;
	case NatureT::MODEST:
		percent = 1.0;
		break;
	case NatureT::MILD:
		percent = 1.0;
		break;
	case NatureT::QUIET:
		percent = 1.0;
		break;
	case NatureT::BASHFUL:
		percent = 1.0;
		break;
	case NatureT::RASH:
		percent = 0.9;
		break;
	case NatureT::CALM:
		percent = 1.1;
		break;
	case NatureT::GENTLE:
		percent = 1.1;
		break;
	case NatureT::SASSY:
		percent = 1.1;
		break;
	case NatureT::CAREFUL:
		percent = 1.1;
		break;
	case NatureT::QUIRKY:
		percent = 1.0;
		break;
	default:
		percent = 1.0;
	}

	//exit
	return percent;
}

double NaturePercentSpd(NatureT nature) {
	//variables
	double percent = 0.0;

	//finds which nature, sets stats accordingly
	switch (nature) {
	case NatureT::HARDY:
		percent = 1.0;
		break;
	case NatureT::LONELY:
		percent = 1.0;
		break;
	case NatureT::BRAVE:
		percent = 0.9;
		break;
	case NatureT::ADAMANT:
		percent = 1.0;
		break;
	case NatureT::NAUGHTY:
		percent = 1.0;
		break;
	case NatureT::BOLD:
		percent = 1.0;
		break;
	case NatureT::DOCILE:
		percent = 1.0;
		break;
	case NatureT::RELAXED:
		percent = 0.9;
		break;
	case NatureT::IMPISH:
		percent = 1.0;
		break;
	case NatureT::LAX:
		percent = 1.0;
		break;
	case NatureT::TIMID:
		percent = 1.1;
		break;
	case NatureT::HASTY:
		percent = 1.1;
		break;
	case NatureT::SERIOUS:
		percent = 1.0;
		break;
	case NatureT::JOLLY:
		percent = 1.1;
		break;
	case NatureT::NAIVE:
		percent = 1.1;
		break;
	case NatureT::MODEST:
		percent = 1.0;
		break;
	case NatureT::MILD:
		percent = 1.0;
		break;
	case NatureT::QUIET:
		percent = 0.9;
		break;
	case NatureT::BASHFUL:
		percent = 1.0;
		break;
	case NatureT::RASH:
		percent = 1.0;
		break;
	case NatureT::CALM:
		percent = 1.0;
		break;
	case NatureT::GENTLE:
		percent = 1.0;
		break;
	case NatureT::SASSY:
		percent = 0.9;
		break;
	case NatureT::CAREFUL:
		percent = 1.0;
		break;
	case NatureT::QUIRKY:
		percent = 1.0;
		break;
	default:
		percent = 1.0;
	}

	//exit
	return percent;
}