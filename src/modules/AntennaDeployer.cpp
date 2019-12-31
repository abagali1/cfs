#include <iostream>

#include <Cfs/modules/AntennaDeployer.hpp>


AntennaDeployer::AntennaDeployer(string name)
: Submodule(name)
{
    this->name = name;
}