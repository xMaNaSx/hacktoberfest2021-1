#include <iostream>
#include <string.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <iostream>
#include <string.h>
using namespace std;

class Bank
{
    string name1, name, accnum, accnum1, acctype, FD_ID, name2;
    float amount, fd_amount, rate, amt;
    int date, month, year, duration;
    int my_date, my_month, my_year, my_duration;
    double mature_amount;
    float rate_of_interest;

public:
    void readData(string c_name, string account, float c_amount, string c_acctype = "saving") //function for saving

    {

        name1 = c_name;
        accnum = account;
        acctype = c_acctype;
        amount = c_amount;
    }
    void readData(string c_name, string ID, float c_amount, int c_date, int c_month, int c_year, int c_duration, float rate_of_interest, string c_acctype = "fixed deposite")
    {

        name = c_name;
        FD_ID = ID;
        acctype = c_acctype;
        fd_amount = c_amount;
        date = c_date;
        month = c_month;
        year = c_year;
        duration = c_duration;
        rate = rate_of_interest;
    }
    void deposite(float c_amount) //function for saving

    {
        amount += c_amount;
    }
    void withdraw(float c_amount) //function for saving

    {
        if (c_amount <= amount)
        {
            amount -= c_amount;
        }
        else
        {
            cout << "sorry , money cant be withdrawn";
        }
    }
    void display() //function for saving
    {
        cout << "name is : " << name1 << endl;
        cout << "account number is" << accnum << endl;
        cout << "balance is" << amount << endl;
    }
    void maturity_amount(int w_date, int w_month, int w_year) //function for FD
    {
        if ((w_year - year) >= duration)
        {
            if (  w_month >= month && w_date >= date)
            {
                cout << "congrats your FD is successfully matured  " << endl;
                double first_year, second_year, final_year;
                first_year = (w_month - month) / 12.0;
                second_year = w_year - year;
                final_year = first_year + second_year;
                mature_amount = fd_amount * pow((1 + rate / 100), final_year);
                cout << "mature is : " << mature_amount << endl;
            }
            else
            {
                cout << "fd is immature" << endl;
            }
        }
        else
        {
            cout << "fd is immature" << endl;
        }
    }
    void FDdetails()
    {
        int time = year + duration;
        cout << "ID is : " << FD_ID << endl;
        cout << "name is : " << name << endl;
        cout << "date of FD is : " << date << "/" << month << "/" << year << endl;
        cout << "duration is : " << duration << endl;
        cout << "rate is : " << rate << endl;
        cout << "date for maturity of FD is : " << date << "/" << month << "/" << time << endl;
    }
    void getData(string c_name, string account, int c_date, int c_month, int c_year, float c_amt, string c_acctype = "recurrance deposite") //function for recurrance deposite

    {

        name2 = c_name;
        accnum1 = account;
        acctype = c_acctype;
        my_date = c_date;
        my_month = c_month;
        my_year = c_year;
        amt = c_amt;
    }
    void rdcalculate(int date, int month, int year, float money = 500)
    {
        if (year == my_year && date == my_date)
        {
            if (month > my_month)
            {
                if ((month - my_month) == 1)
                {
                    amt += money;
                    cout << "money added successfully" << endl;
                    my_month = month;
                }
                else
                {
                    cout << "money cant be added" << endl;
                }
            }
            else
            {
                if (month < my_month)
                {
                    if ((my_month - month) == 1)
                    {
                        amt += money;
                        cout << "money added successfully" << endl;
                    }
                    else
                    {
                        cout << "money cant be added" << endl;
                    }
                }
            }
        }
    }
    void transaction(int date, int month, int year)
    {
        cout << "date of deposition is " << date << "/" << month << "/" << year << endl;
    }
    void mydisplay()
    {
        cout << "name :" << name2 << endl;
        cout << "account number " << accnum1 << endl;
        cout << "date is " << my_date << "/" << my_month << "/" << my_year << endl;
        cout << "amount is " << amt;
    }
};
int main()
{
    Bank customer;
    int ch, choice, flag = 0, rate;
    int date, month, year, duration, period, time, my_date, my_month, my_year;
    int w_date, w_month, w_year;
    string name, FD_id, typeaccount, num;
    float amount, deposite_amount, withdraw_amount, money;
    cout << "welcome to mybank" << endl;
    while (choice != 4)
    {
        cout << "enter the type of account you prefer to have:" << endl;
        cout << "1.fixed deposite\n2.saving\n3.recurring deposite" << endl;
        cout << "enter your choice(1-3)" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "welcome to your fixed deposite account type" << endl;
            cout << "enter name:" << endl;
            cin >> name;
            cout << endl;
            cout << "enter FD id " << endl;
            cin >> FD_id;
            cout << endl;
            cout << "enter amount to be fixed " << endl;
            cin >> amount;
            cout << endl;
            cout << "enter date " << endl;
            cin >> date;
            cout << endl;
            cout << "enter month " << endl;
            cin >> month;
            cout << endl;
            cout << "enter year " << endl;
            cin >> year;
            cout << endl;
            cout << "enter duration of year for fixed deposite " << endl;
            cin >> duration;
            cout << endl;
            cout << "enter rate of interest: " << endl;
            cin >> rate;
            cout << endl;
            customer.readData(name, FD_id, amount, date, month, year, duration, rate);
            cout << "want to break your fixed deposite" << endl;
            cout << "enter 1 for yes and 0 for no" << endl;
            cin >> flag;
            if (flag == 1)
            {
                cout << "enter date  of withdrawl " << endl;
                cin >> w_date;
                cout << endl;
                cout << "enter month of withdrawl  " << endl;
                cin >> w_month;
                cout << endl;
                cout << "enter year of withdrawl  " << endl;
                cin >> w_year;
                customer.FDdetails();
                cout<<"date of withdrwal is "<<w_date<<"/"<<w_month<<"/"<<w_year<<endl;
                customer.maturity_amount(w_date, w_month, w_year);
            }
            break;
        case 2:
            cout << "welcome to your fixed saving account type" << endl;
            while (ch != 5)
            {
                cout << "1.readData\n2.deposite\n3.withdraw\n4.display" << endl;
                cout << "enter your choice\n";
                cin >> ch;
                cout << endl;
                switch (ch)
                {
                case 1:
                    cout << "readData " << endl;
                    cout << "enter name: " << endl;
                    cin >> name;
                    cout << endl;
                    cout << "enter account number: " << endl;
                    cin >> num;
                    cout << endl;
                    cout << "enter amount: " << endl;
                    cin >> amount;
                    cout << endl;
                    customer.readData(name, num, amount);
                    break;
                case 2:
                    cout << "deposite " << endl;
                    cout << "enter amount to be deposited:" << endl;
                    cin >> deposite_amount;
                    customer.deposite(deposite_amount);
                    break;
                case 3:
                    cout << "withdraw " << endl;
                    cout << "enter amount to be withdraw:" << endl;
                    cin >> withdraw_amount;
                    customer.withdraw(withdraw_amount);
                    break;
                case 4:
                    cout << "Display " << endl;
                    customer.display();
                    break;
                }
            }
        case 3:
            cout << "welcome to your recurring deposite account account type" << endl;
            cout << "readData " << endl;
            cout << "enter name: " << endl;
            cin >> name;
            cout << endl;
            cout << "enter account number: " << endl;
            cin >> num;
            cout << endl;
            cout << "enter amount for RD: " << endl;
            cin >> money;
            cout << endl;
            cout << "enter date of account open " << endl;
            cin >> date;
            cout << endl;
            cout << "enter month of account open " << endl;
            cin >> month;
            cout << endl;
            cout << "enter year of account open" << endl;
            cin >> year;
            cout << endl;

            customer.getData(name, num, date, month, year, money);
            while (1)
            {
                cout << "want to add money 1for yes and 0 for no:" << endl;
                cin >> flag;
                if (flag == 1)
                {
                    cout << "enter date " << endl;
                    cin >> date;
                    cout << endl;
                    cout << "enter month  " << endl;
                    cin >> month;
                    cout << endl;
                    cout << "enter year " << endl;
                    cin >> year;
                    cout << endl;
                    customer.rdcalculate(date, month, year);
                    customer.mydisplay();
                    customer.transaction(date, month, year);
                }
                else
                {
                    break;
                }
            }

            break;

        default:
            cout << "please reenter your choice:";
        }
    }

    return 0;
}
