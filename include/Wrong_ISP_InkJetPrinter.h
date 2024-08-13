#pragma once

#include "Wrong_ISP_Printer.h"

class Wrong_ISP_InkJetPrinter: public Wrong_ISP_Printer
{
public:
    void print() override;
    void scan() override;
    void fax() override;
};