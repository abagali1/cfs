#pragma once

#include <Cfs/Submodule.hpp>

class AntennaDeployer: public Submodule{
    public:
        AntennaDeployer(string name, string address);
        virtual void start();

    private:
        string name;
        string address;
        
    
};