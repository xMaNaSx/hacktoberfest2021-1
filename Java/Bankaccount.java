package com.company;
public class Account {
    String nameOfCustomer;
    long accountNumber;
    int type;
    long balance;

    public String getNameOfCustomer() {
        return nameOfCustomer;
    }

    public void setNameOfCustomer(String nameOfCustomer) {
        this.nameOfCustomer = nameOfCustomer;
    }

    public long getAccountNumber() {
        return accountNumber;
    }

    public void setAccountNumber(long accountNumber) {
        this.accountNumber = accountNumber;
    }

    public int getType() {
        return type;
    }

    public void setType(int type) {
        this.type = type;
    }

    public long getBalance() {
        return balance;
    }

    public void setBalance(long balance) {
        this.balance = balance;
    }
}

package com.company;
public class SavingAccount extends Account{
    public void Deposit(int amount){
        balance += amount;
    }

    public void Withdraw(int amount){
        if (amount<balance){
            balance -= amount;
            System.out.println("Remaining Balance: " + balance);
        }else{
            System.out.println("Insufficient Balance :(");
        }
        MinimumBalanceCheck();
    }

    public void UpdateBalance(long interest){
        balance += interest;
    }

    public void Display(){
        System.out.print("Name: " + getNameOfCustomer() + "\nAccount Number: " + getAccountNumber() + "\nType: " + getType() + "\nBalance: " + getBalance());
    }

    public void Interest(){
        if (balance>10000){
            long interest = balance*(int)Math.pow(3,1);
            UpdateBalance(interest);
        }
    }
    public void MinimumBalanceCheck(){
        if (balance < 10000){
            long interest = balance*(int)Math.pow(3,1);
            balance -= interest;
        }
    }
}

package com.company;
public class CurrentAccount extends Account{
    public void Deposit(int amount){
        balance += amount;
    }

    public void Withdraw(int amount){
        if (amount<balance){
            balance -= amount;
            System.out.println("Remaining Balance: " + balance);
        }else {
            System.out.println("Insufficient Balance :(");
        }
        MinimumBalanceCheck();
    }

    public void Display(){
        System.out.print("\nName: " + getNameOfCustomer() + "\nAccount Number: " + getAccountNumber() + "\nType: " + getType() + "\nBalance: " + getBalance());
    }

    public void MinimumBalanceCheck(){
        if (balance < 10000){
            long interest = balance*(int)Math.pow(3,1);
            balance -= interest;
        }
    }
}


package com.company;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
	// write your code here
        Scanner in = new Scanner(System.in);
        System.out.print("\nEnter Type of Account(1/2): ");
        int type = in.nextInt();
        in.nextLine();
        if (type == 1){
            CurrentAccount ca = new CurrentAccount();
            ca.setType(1);
            System.out.print("Enter Name: ");
            String name = in.nextLine();
            ca.setNameOfCustomer(name);
            System.out.print("Enter Account Number: ");
            long accNo = in.nextLong();
            ca.setAccountNumber(accNo);
            System.out.print("Enter Amount to be deposited: ");
            int amount = in.nextInt();
            ca.Deposit(amount);
            ca.Display();
            System.out.print("\nEnter Amount to be withdraw: ");
            amount = in.nextInt();
            ca.Withdraw(amount);
            ca.Display();
        }else if (type == 2){
            SavingAccount sa = new SavingAccount();
            sa.setType(2);
            System.out.print("Enter Name: ");
            String name = in.nextLine();
            sa.setNameOfCustomer(name);
            System.out.print("Enter Account Number: ");
            long accNo = in.nextLong();
            sa.setAccountNumber(accNo);
            System.out.print("Enter Amount to be deposited: ");
            int amount = in.nextInt();
            sa.Deposit(amount);
            sa.Display();
            System.out.print("\nEnter Amount to be withdraw: ");
            amount = in.nextInt();
            sa.Withdraw(amount);
            sa.Display();
            System.out.println();
            sa.Interest();
            sa.Display();
        }else{
            System.out.println("Wrong Type :(");
        }
    }
}
