#include "Wallet.h"

Wallet::Wallet()
{
    //ctor
    m_nMoney = 0;
}

Wallet::~Wallet()
{
    //dtor
}


void Wallet::AddMoney(int nAmount)
{    
    
    std::lock_guard<std::mutex> myLockGuard(m_myMutex);
    //m_myMutex.lock();
    for (size_t i = 0; i < nAmount; i++)
    {
        m_nMoney++;
    }    
    //m_myMutex.unlock();
}


int Wallet::GetMoney()
{    
    return m_nMoney;
}
