#include "office.h"
#include <iostream>
#include <string>



Office::Office(std::string n,std::string a,std::string s,std::string w)
    : oName(n), oAddres(a), oSpace(s), oWorker(w) {}

void Office::print()
{
    std::cout <<"It`s information about offices:" <<std::endl;
    std::cout <<"Name - " << oName <<std::endl;
    std::cout <<"Addres - " << oAddres <<std::endl;
    std::cout <<"Space of our office - " << oSpace <<std::endl;
    std::cout <<"Workers - " << oWorker <<std::endl;
    std::cout <<std::endl;

}
