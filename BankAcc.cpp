#include <iostream>
#include <string>
using namespace std;

class AccountHolder {
    protected :
              string Name;
    public :
     void setName(string n) {
        Name = n;
     }     
     
     string getName(){
        return Name;
     }
}
class  BankAccount :public AccountHolder{
    private:
            int accountNumber;
            double balance;
    public :
          BankAccount(string  name , int accNum , double bal){
           setName(name);
           accountNumber = accnum;
           balance = bal;

getaccountNumber(){
    return accountNumber;
}
getbalance(){
    return balance;
}
          }
   class savingsAccount : public BankAccount [
    private :
            double interestRate;
    public :
           savingsAccount( string name , int accNum , double bal , double rate ){
            :BankAccount(name,accnum,bal){
                interestRate=rate;
            }

           }        
   ]       

                 
}
