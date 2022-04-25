#include <iostream>
#include <thread>

#include"Task.h"
#include"NetworkApp.h"

using namespace std;

int main()
{
    /*cout << "Hello world!" << endl;

    Task *p_Task = new  Task();
    thread th1 (&Task::ThreadFunction,p_Task,"Sample Task T1",6);
    thread th2 (&Task::ThreadFunction,p_Task,"Call T2",10);

    th1.join();
    th2.join();

    cout<<"count :"<<p_Task->GetCount()<<endl;

    delete p_Task;
*/
    NetworkApp app;
    thread thread1(&NetworkApp::mainTask, &app);
    thread thread2(&NetworkApp::loadData, &app);
    thread1.join();
    thread2.join();

    return 0;
}
