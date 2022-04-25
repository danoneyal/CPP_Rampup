#include "Task.h"

Task::Task()
{
    //ctor
    m_nCount=0;
}

Task::~Task()
{
    //dtor
}

void Task::ThreadFunction(std::string command,int n_count)
{
    std::cout<<"thread id : "<<std::this_thread::get_id()<<endl;


    for (int i=0 ; i<n_count ; i++)
    {
        //cout <<command<<endl;
        std::cout<<command<<" : " <<i<<std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));

        m_myMutex.lock();
        m_nCount++;
        m_myMutex.unlock();
    }
}

