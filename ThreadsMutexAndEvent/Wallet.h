#ifndef WALLET_H
#define WALLET_H
#include<mutex>

class Wallet
{
    public:
        Wallet();
        virtual ~Wallet();

    protected:

    private:
        int m_nMoney;
        std::mutex m_myMutex;
    public:
        void AddMoney(int nAmount);
        int GetMoney();
};

#endif // WALLET_H
