#ifndef NETWORKAPP_H
#define NETWORKAPP_H

/*
this class perform the following tasks
1. handshake with server
2. load data from XML
3. process the loaded data

the tasks are divided into 2 threads
T1 - handshake with server, wait for the data to be loaded and process the loaded data
T2 - load the data from XML , notify T1 that the data is loaded

*/
using namespace std;
#include<iostream>
#include<thread>
#include<mutex>

class NetworkApp
{
    public:
        NetworkApp();
        virtual ~NetworkApp();
        void mainTask();
        void loadData();

    protected:

    private:
    mutex m_mutex;
    bool m_bDataLoaded ;
};

#endif // NETWORKAPP_H
