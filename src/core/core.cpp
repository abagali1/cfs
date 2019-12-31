#include <Logger/logger_util.h>

#include <Cfs/Core.hpp>


Core::Core(string name){
    log("Instantiating core");
    
    this->name = name;
    this->state = LOW_POWER;
    this->antenna_deployer = new AntennaDeployer();
};