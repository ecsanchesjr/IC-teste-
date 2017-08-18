#ifndef IMPORTDATA_H
#define IMPORTDATA_H

#include <fstream>
#include <iostream>
#include <sstream>
#include <regex>
#include <string>
#include <vector>
#include "City.h"

using std:: ifstream;
using std:: string;
using std:: cout;
using std:: regex;
using std:: vector;
class ImportData{
    public:
        ImportData(string);
        vector<City> getCitiesCoord();
    private:
        string tspName;
        string flag;
        string flagaux;
        ifstream myfile;
        vector<City> citiescoord;
        int dimension;
        void regexManager(string);
        bool findIgnoredWords(string);
        string gettspName();
        void reader(string, string);

};

#endif