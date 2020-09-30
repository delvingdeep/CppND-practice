/*
* Objectives:
*   1. Create class called BankAccount
*   2. Use typical info about bank accounts to design attributes, such as the account number, the owner name, and the available funds.
*   3. Set the access modifiers so that member data are protected from other parts of the program.
*   4. Create getters and setters for all class attributes.
*/

#include <iostream>
#include <string>

class BankAccount.     // class declaration
{
  private:.           // access specifier
      // declare member variables
      std::string acc_name;
      int acc_number;
      float acc_balance;

  public:
      // declare setters
      void setAccName(std::string s);
      void setAccNumber(int num);
      void setAccBalance(float bal);
    
      // declare getters
      std::string getAccName() const;
      int getAccNumber() const;
      float getAccBalance() const;
};

// implement setters
    void BankAccount::setAccName(std::string s) {
        acc_name = s;
    }
    
    void BankAccount::setAccNumber(int num) {
        acc_number = num;
    }
    
    void BankAccount::setAccBalance(float bal) {
        acc_balance = bal;
    }

// implement getters
    std::string BankAccount::getAccName() const {
        return acc_name;
    }
    
    int BankAccount::getAccNumber() const {
        return acc_number;
    }
    
    float BankAccount::getAccBalance() const {
        return acc_balance;
    }

int main() {
    // instantiate and output a bank account
    BankAccount acc1;
    acc1.setAccName("Deep");
    acc1.setAccNumber(12345);
    acc1.setAccBalance(1000.0);
    
    std::cout << "Account Name : " << acc1.getAccName() << "\n";
    std::cout << "Account Number : " << acc1.getAccNumber() << "\n";
    std::cout << "Account Balance : " << acc1.getAccBalance() << "\n";
    return 0
}
