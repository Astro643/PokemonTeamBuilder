/**
*Astro643
*PokemonTeamBuilder (PTB) :: TypeT.h
*v0.1
*02.22.23
**/

//headers
#include <string>

//enum
enum class TypeT{NORMAL, FIRE, WATER, GRASS, ELECTRIC, ICE, FIGHTING, POISON, GROUND, FLYING, PSYCHIC, BUG, ROCK, GHOST, DARK, DRAGON, STEEL, FAIRY};

//enum functions
TypeT StringToTypeT(std::string input);
std::string TypeTToString(TypeT input);