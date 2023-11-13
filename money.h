#ifndef MONEY_H_INCLUDED
#define MONEY_H_INCLUDED

class Money
{
    private:

    int pounds; // 0 <= pounds
    int shillings; // 0 <= shillings <= 19
    int pence; // 0 <= pence <= 11

    public:

    Money(); // constructor which makes a "default" Money object with 1 pound, 1 shilling and 1 penny

    Money(int); // constructor which takes in an integer number of pence and makes a corresponding Money object

    Money operator+(Money); // adds two Money objects by operation overload

    bool operator>(Money); // determines whether one Money object is greater than another by operatrion overload

    Money operator++();  // increments a Money object by 1 penny

    Money addPence(int); // increments a Money object by inputted number of pence

    void printMoney();  // prints value of Money object in canonical form
};

#endif // MONEY_H_INCLUDED
