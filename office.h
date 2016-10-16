#ifndef OFFICE_H
#define OFFICE_H

#include <iostream>
#include <string>
#include "printable.h"

class Office : public Printable
{
public:
    Office(std::string ,std::string ,std::string ,std::string);


    void print();


private:
    std::string oName;
    std::string oAddres;
    std::string oSpace;
    std::string oWorker;


};

#endif // OFFICE_H
