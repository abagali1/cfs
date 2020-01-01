#include <iostream>

#include <Cfs/modules/AntennaDeployer.hpp>


AntennaDeployer::AntennaDeployer(string name, string address)
: Submodule(name)
{
    this->address = address;
};

void AntennaDeployer::start(){
    log("INFO: Starting AntennaDeployer on address: " + this->address);
};