#pragma once

#include <iostream>
#include <map>

#include <Logger/logger_util.h>

using namespace std;
class Submodule{
    public:
        Submodule(string name){
            this->name = name;
            log("INFO: Creating Submodule: " + name);
        }
        void setModules(map<string, Submodule*> dependencies){
            this->modules = dependencies;
        }
        bool hasModule(string name){
            return this->modules.count(name);
        }
        Submodule* getModuleOrRaiseError(string moduleName){
            if(this->hasModule(moduleName)){
                return this->modules.at(moduleName);
            }else{
                log("ERROR: " + this->name + " cannot find " + moduleName);
            }
        };
        virtual void start()=0;
        virtual void enterNormalMode(){};
        virtual void enterLowPowerMode(){};


    private:
        string name;
        map<string, Submodule*> modules;      
};