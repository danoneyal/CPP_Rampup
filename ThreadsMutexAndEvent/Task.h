#ifndef TASK_H
#define TASK_H

#include <iostream>
#include <thread>
#include<mutex>

using namespace std;

class Task
{
    public:
        Task();
        virtual ~Task();
        void ThreadFunction(std::string command, int n_count);
        int GetCount(){return m_nCount;}


    protected:

    private:
        int m_nCount;
        mutex m_myMutex;
};

#endif // TASK_H
