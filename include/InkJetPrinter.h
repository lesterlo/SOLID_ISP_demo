#pragma once
#include "Printer_Ability/IPrintable.h"
#include "Printer_Ability/IScannable.h"

/*!
 * @brief This class can only print and scan
 */
class InkJetPrinter: public IPrintable, IScannable
{
public:
    void print() override;
    void scan() override;
};