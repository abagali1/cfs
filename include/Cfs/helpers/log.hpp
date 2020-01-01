#include <iostream>


using namespace std;
class Log{
    private:
        string sysName;
        string level;
        string message;
        string header = "LOG&"; 
    public:
        Log(string sysName, string level, string message);
        string toString();
};