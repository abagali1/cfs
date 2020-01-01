#include <Logger/logger_util.h>

#include <Cfs/Core.hpp>
#include <Cfs/modules/AntennaDeployer.hpp>

Core::Core(string name){
    log("INFO: Creating Core: " + name);
    
    this->name = name;
    this->state = LOW_POWER;
    this->submodules.insert({"AntennaDeployer", new AntennaDeployer("AntennaDeployer")});
};


void Core::start() {
    for(auto const& submodule : submodules){
        submodule.second->start();
    }
};