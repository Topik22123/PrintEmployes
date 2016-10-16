#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
#include "printable.h"


class Employee : public Printable
{
public:



    void name();
    void home();
    void phone();
    void salary();
    void year();

    Employee(std::string ,std::string ,std::string ,std::string ,std::string );

    void print();

    private:
    std::string mName;
    std::string mPhonenumber;
    std::string mHomeaddres;
    std::string mSalary;
    std::string mYear;


};
#endif // EMPLOYEE_H
