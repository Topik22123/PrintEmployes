#include "employee.h"
#include <iostream>
#include <string>

Employee::Employee ( std::string n, std::string p, std::string h, std::string s, std::string y)
    : mName(n), mPhonenumber(p),mHomeaddres(h),mSalary(s),mYear(y){}


void Employee::print()
{
    std::cout <<"It`s information about employeer:" <<std::endl;
    std::cout <<"Enter name : " << mName <<std::endl;
    std::cout <<"Enter phone number - " << mPhonenumber <<std::endl;
    std::cout <<"Enter home addres : " << mHomeaddres <<std::endl;
    std::cout <<"Enter salary: " << mSalary <<std::endl;
    std::cout <<"Working since - " << mYear <<std::endl;
    std::cout <<std::endl;

}



void Employee::name()
{
        std::cout <<"Enter name: ";
        std::cin >> mName;
        std::cout <<std::endl;
}
void Employee::phone()
{
        std::cout <<"Enter phone number :";
        std::cin >>  mPhonenumber ;
        std::cout <<std::endl;
}
void Employee::home()
{
        std::cout <<"Enter home addres: ";
        std::cin >> mHomeaddres ;
        std::cout <<std::endl;
}
void Employee::salary()
{
        std::cout <<"Enter salary: ";
        std::cin >> mSalary ;
        std::cout <<std::endl;
}
void Employee::year()
{
        std::cout <<"Enter year since you work: ";
        std::cin >> mYear ;
        std::cout <<std::endl;
}
