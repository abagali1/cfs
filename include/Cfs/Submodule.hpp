#pragma once

#include <iostream>
#include <map>

#include <Logger/logger_util.h>

using namespace std;
class Submodule{
    public:
        string name;
        Submodule(){
            cout << "Creating submodule: " << this->name << endl;
        }
        void start(){
            log("Starting submodule: " + this->name);
        }
        void set_modules(map<string, Submodule> dependencies){
            this->modules = dependencies;
        }
        bool has_module(string name){
            return this->modules.count(name);
        }

    private:
        map<string, Submodule> modules;      
};