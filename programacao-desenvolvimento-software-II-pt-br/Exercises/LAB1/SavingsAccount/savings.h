#ifndef PDS2_SAVINGS_H
#define PDS2_SAVINGS_H

class SavingsAccount{
private:
    float _savings_balance;
public:
    static float annual_savings_rate;
    SavingsAccount(float);
    float calculate_monthly_balance();
    //static void modify_interest_rate();
};

#endif

