#ifndef GPX_H
#define GPX_H

#include <map>

#include "CityNode.hpp"

using std::map;

class GPX{
public:
    void joinGraphs(map<int, CityNode*>,map<int, CityNode*>);
private:
    map<int, CityNode*> unionGraph;
};

#endif