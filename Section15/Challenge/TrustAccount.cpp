#include "TrustAccount.h"

TrustAccount::TrustAccount(std::string name, double balance, float interest_rate, double bonus)
: SavingsAccount{name, balance, interest_rate}, bonus{bonus}, num_withdrawals{3}{
        // no need to initialize var here, do it in the initializer list!
}


bool TrustAccount::deposit(double amount){
    if (5000<=amount){
        amount = amount*(1 + interest_rate) + bonus;
        return Account::deposit(amount);
    } else 
        return SavingsAccount::deposit(amount);
}

bool TrustAccount::withdraw(double amount){
    if (num_withdrawals == 0 or 0.2*balance <= amount){
        std::cout << "Cannot withdraw." << std::endl;
        return false;
    } else if (Account::withdraw(amount)){
        --num_withdrawals;
        return true;
    } else
        return false;
}


std::ostream &operator<<(std::ostream &os, const TrustAccount &obj){
    os << "(Trust Account: " << obj.name << ": balance=" << obj.balance
    << ", interest_rate=" << obj.interest_rate << ", bonus=" << obj.bonus << ", withdrawals_left=" 
    << obj.num_withdrawals << ")";
    return os;
}
