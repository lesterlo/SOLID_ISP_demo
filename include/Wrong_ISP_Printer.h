#pragma once



class Wrong_ISP_Printer
{
public:
    virtual void print() = 0;
    virtual void scan() = 0;
    virtual void fax() = 0;
};