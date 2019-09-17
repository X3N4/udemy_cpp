#pragma once

class InsufficientFundsException: public std::exception {
public:
    InsufficientFundsException() noexcept = default;
    ~InsufficientFundsException() = default;
    virtual const char *what() const noexcept override {
        return "InsufficientFundsException: Withdrawal amount cannot be greater than balance.";
    }

};

