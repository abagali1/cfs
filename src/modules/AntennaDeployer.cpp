#include <iostream>

#include <Cfs/helpers/log.hpp>
#include <Cfs/modules/AntennaDeployer.hpp>


AntennaDeployer::AntennaDeployer(string name, string address)
: Submodule(name)
{
    this->address = address;
};

void AntennaDeployer::start(){
    Log l("AntennaDeployer", "INFO", "Started on " + this->address);
    log(l.toString());
};