#pragma once

#include <iostream>
#include <thread>
#include <functional>


using namespace std;


class ThreadHandler{
    private:
        string name;
        int interval;
        bool suppress_out;
        bool auto_restart;
        bool is_active = true;
        bool is_alive = false;

    public:
        
};