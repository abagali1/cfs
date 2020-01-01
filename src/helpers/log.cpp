#include <Cfs/helpers/log.hpp>

Log::Log(string sysName, string level, string message){
    this->sysName = sysName;
    this->level = level;
    this->message = message;
};

string Log::toString(){
  return this->header + this->level + ";" +
  this->sysName + ";" + this->message + ";";  
};