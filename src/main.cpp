#include <iostream>

#include "Wrong_ISP_InkJetPrinter.h"
#include "InkJetPrinter.h"
#include "LaserPrinter.h"


int main()
{
    std::cout << "-----------  A Wrong ISP InkJetPrinter -------------" << std::endl;
    std::cout << "You need to override all of the virtual function in 'Wrong_ISP_Printer.h' " << std::endl;
    {
        Wrong_ISP_InkJetPrinter p;
        p.print();
        p.scan();
        p.fax();
    }


    std::cout << std::endl << "What if this InkJetPrinter doesn't have a fax feature?" << std::endl;

    std::cout << std::endl << "-----------  A Correct ISP InkJetPrinter  -----------" << std::endl;
    {
        InkJetPrinter p;
        p.print();
        p.scan();
        // p.fax(); //This InkJetPrinter doesn't have a fax feature
    }

    std::cout<< std::endl  << "-----------  A Correct ISP Laser Printer  -----------" << std::endl;
    {
        LaserPrinter p;
        p.print();
        p.scan();
        p.fax();
    }


    return 0;
}