#ifndef UTILITY_H
#define UTILITY_H

#include <cmath>
#include <map>
#include <iterator>

#include "City.hpp"
#include "Tour.hpp"
#include "CityNode.hpp"

using std::map;
using std::iterator;
using std::make_pair;

double distance(City&, City&);

map<int, CityNode*> mapTour(Tour&); 

void DELETE_MAP_POINTERS();

#endif