#include "NetworkApp.h"

NetworkApp::NetworkApp()
{
    //ctor
    m_bDataLoaded=false;
}

NetworkApp::~NetworkApp()
{
    //dtor
}

void NetworkApp::mainTask()
{
    cout<<"T1-handshake with the server "<<endl;
    m_mutex.lock();

    //cout<<"wait for data to be loaded";
    while(!m_bDataLoaded)
    {
        cout<<"T1-wait for data to be loaded"<<endl;
        m_mutex.unlock();
        //sleep for 100 milli seconds
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        //cout<<".";
        m_mutex.lock();

    }

    m_mutex.unlock();
    cout<<"T1-processing";
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    cout<<".";
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    cout<<".";
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    cout<<".";
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    cout<<"."<<endl;

}

void NetworkApp::loadData()
{
    cout<<"T2-Loading data from XML"<<endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));


    // Lock The Data structure
    std::lock_guard<std::mutex> guard(m_mutex);
    // Set the flag to true, means data is loaded
    m_bDataLoaded=true;
    cout<<"T2-Finished loading the data"<<endl;

    //when the function ends the deconstructure of guard is called and unlock the mutex
}
