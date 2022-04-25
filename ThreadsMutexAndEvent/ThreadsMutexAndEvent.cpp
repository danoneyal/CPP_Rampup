#include <iostream>
#include <thread>

#include"Task.h"
#include"NetworkApp.h"
#include"Wallet.h"
#include<vector>

using namespace std;

int testMultiThreadWallet()
{
    Wallet myWallet;
    std::vector<std::thread> threads_vector;
    
    for (size_t i = 0; i < 5; i++)
    {
        threads_vector.push_back(std::thread(&Wallet::AddMoney, &myWallet, 1000));
    }
    
    for (size_t i = 0; i < threads_vector.size(); i++)
    {
        threads_vector.at(i).join();
    }

    return myWallet.GetMoney();
}

int main()
{
    int length = 1000;
    int nMoney = 0;
    for (size_t i = 0; i < length; i++)
    {
        nMoney = testMultiThreadWallet();
        if (nMoney !=5000)
        {
            cout << "error count money in the wallet : " << nMoney << endl;
        }
    }
    
    cout << "money in the wallet : " << nMoney << endl;
    return 0;
    
         
    
    /*cout << "Hello world!" << endl;

    Task *p_Task = new  Task();
    thread th1 (&Task::ThreadFunction,p_Task,"Sample Task T1",6);
    thread th2 (&Task::ThreadFunction,p_Task,"Call T2",10);

    th1.join();
    th2.join();

    cout<<"count :"<<p_Task->GetCount()<<endl;

    delete p_Task;
*/
    /*NetworkApp app;
    thread thread1(&NetworkApp::mainTask, &app);
    thread thread2(&NetworkApp::loadData, &app);
    thread1.join();
    thread2.join();
    */
    
   
}
