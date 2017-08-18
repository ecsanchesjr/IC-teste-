#include "City.h"

City::City(){
    this->x = 0;
    this->y = 0;
}

City::City(const double x, const double y):x(x),y(y){}

double City::getX() const{return(x);}

double City::getY() const{return(y);}

void City::setX(const double x){this->x = x;}

void City::setY(const double y){this->y = y;}

bool City::operator==(const City &c) const{
    if((c.getX() == this->x) && (c.getY() == this->y) ){
        return(true);
    }else{
        return(false);
    }
}

ostream& operator<<(ostream &output,const City &c){
    output<<setfill('0')<<"x: "<<setw(3)<<c.getX()<<" y: "<<setw(3)<<c.getY();
    return(output);
}

const City& City::operator=(const City &c){
    this->x = c.getX();
    this->y = c.getY();
}