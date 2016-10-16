#include <iostream>
#include <vector>
#include "employee.h"
#include "printable.h"
#include "office.h"


        void printList(const std::vector<Printable *> listToPrint)
        {
            for (auto item: listToPrint)
            {
                item->print();
                std::cout << std::endl;
            }
        }

        int main()
        {


            std::vector<Printable *> employeesToPrint;

            Employee a{"Oleh","0937410603","Kulchutskoi","700$","2016",};
            Employee c{"Vasa","0933452234","Vugovskogo","666$","2016",};

            a.print();
            c.print();

            printList(employeesToPrint);

            std::cout << std::endl;
            std::vector<Printable *> officesToPrint;

            Office k("NachKorp","Kavaleridze","70 m^2","8");
            Office l("KrosNet","Kolomoitsa","12 m^2","1");

            k.print();
            l.print();


            printList(officesToPrint);

            return 0;
        }
