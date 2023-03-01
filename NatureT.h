/**
*Astro643
*PokemonTeamBuilder (PTB) :: NatureT.h
*v0.1.1
*02.22.23
**/

#pragma once

//headers
#include <string>

//enum
enum class NatureT{NA, HARDY, LONELY, BRAVE, ADAMANT, NAUGHTY, BOLD, DOCILE, RELAXED, IMPISH, LAX, TIMID, HASTY, SERIOUS, JOLLY, NAIVE, MODEST, MILD, QUIET, BASHFUL, RASH, CALM, GENTLE, SASSY, CAREFUL, QUIRKY};

//enum functions
NatureT StringToNatureT(std::string input);
std::string NatureTToString(NatureT input);