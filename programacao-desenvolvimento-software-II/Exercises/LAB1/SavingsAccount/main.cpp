#include <iostream>
#include "savings.h"

int main(void) {
    // Main. Criando duas contas.
    SavingsAccount conta1 = SavingsAccount(20000);
    SavingsAccount conta2 = SavingsAccount(15000);

    // Imprimindo o monthly balance
    std::cout << conta1.calculate_monthly_balance() << std::endl;
    std::cout << conta2.calculate_monthly_balance() << std::endl;

    // Alterando atributo static publico
    SavingsAccount::annual_savings_rate = 1.30;

    // Imprimindo o monthly balance. Tem que mudar para as duas classes.
    std::cout << conta1.calculate_monthly_balance() << std::endl;
    std::cout << conta2.calculate_monthly_balance() << std::endl;

    return 0;
}
