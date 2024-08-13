#pragma once

#include "Printer_Ability/IPrintable.h"
#include "Printer_Ability/IScannable.h"
#include "Printer_Ability/IFaxable.h"

/*!
 * @brief This Laser Printer have all features
 */
class LaserPrinter: public IPrintable, IScannable, IFaxable
{
public:
    void print() override;
    void scan() override;
    void fax() override;
};