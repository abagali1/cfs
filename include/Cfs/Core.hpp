#pragma once

#include <iostream>
#include <map>

#include <Cfs/Submodule.hpp>
#include <Cfs/modules/AntennaDeployer.hpp>
#include <Cfs/helpers/mode.hpp>

class Core{
    private:
        string name;
        Mode state;
        map<string, Submodule*> submodules;

    public:
        Core(string name);
        void start();
        void enterNormalMode(string reason = "");
        void enterLowPowerMode(string reason = "");
        Submodule* request(string moduleName);
        Mode getState();
        
};


