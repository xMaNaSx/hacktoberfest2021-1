// Calculator code

#include<iostream>
using namespace std;

class Calculator
{
    private:
        int nm1,nm2,out;
    public:
        char a,b,c;
            void get();
            void pro();
            void ask();
};

void Calculator::get()
{
    cout<<"Enter num1 than symbol than num2"<<endl;
    cout<<"Symbol [ +  -  *  / ]"<<endl;
    cin>>nm1>>a>>nm2;
}

void Calculator::pro()
{
    switch(a)
    {
        case '+':
            out=nm1+nm2;
            cout<<"Output is "<< out<<endl;
            break;

        case '-':
            out=nm1-nm2;
            cout<<"Output is "<< out<<endl;
            break;

        case '*':
            out=nm1*nm2;
            cout<<"Output is "<< out<<endl;
            break;

        case '/':
            if(nm2 != 0)
            {
            out=nm1/nm2;
            cout<<"Output is "<< out<<endl;
            break;
            }
            else
            {
                cout<<"Divide by zero cant occur"<<endl;
                break;
            }

        default:
            cout<<"Invalid operation";
            break;
    }
}

void Calculator :: ask()
{
    cout<<"Do you want to continue loop[Y/N]"<<endl;
    cin>>b;
    if(b=='Y' || b=='y')
    {
        cout<<"Perform operation on old output[Y/N]"<<endl;
        cin>>c;
        if(c=='Y'|| c=='y')
        {
            cout<<"Continuing with old values"<<endl;
            cout<<"Enter operation than int"<<endl;
            nm1=out;
            cout<<out;
            cin>>a>>nm2;

        }
        else if(c=='N'|| c=='n')
        {
            cout<<"Continuing with new Values"<<endl;
        }
        else
        {
            cout<<"Invalid Output\nSo exiting code\n"<<endl;
            
        }
    }
    else if(b=='N'|| b=='n')
    {
        cout<<"Thank you \n"<<endl;
    }
    else
    {
        cout<<"Invalid Output\nSo exiting code\n"<<endl;
    }
}

int main()
{
    cout<<"#### Calculator ####\nWelcome "<<endl;
    Calculator obj;
    jmp1:
    obj.get();
    jmp2:
    obj.pro();
    obj.ask();
    if(obj.c=='Y'|| obj.c=='y')
    {
        obj.c='z';
        goto jmp2;
    }
    else if(obj.c=='N'|| obj.c=='n')
    {
        obj.c='z';
        goto jmp1;
    }
    return 0;
}