#include "savings.h"

float  SavingsAccount::annual_savings_rate = 1;

SavingsAccount::SavingsAccount(float x){
    _savings_balance = x;
}

float SavingsAccount::calculate_monthly_balance(){
    return (_savings_balance*annual_savings_rate)/12;
}

