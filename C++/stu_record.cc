#include <iostream>
using namespace std;

struct stu
{
    char name[100];
    int roll_no;
    float marks[3];

    float avg_marks(void)
    {
        return (marks[0] + marks[1] + marks[2]) / 3;
    }
};

int main()
{
    stu s[2];
    cout << "Enter student Information:" << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter Name:";
        cin >> s[i].name;
        cout << "Enter Roll Number:";
        cin >> s[i].roll_no;
        cout << "Enter Marks:";
        cin >> s[i].marks[0] >> s[i].marks[1] >> s[i].marks[2];
    }
    cout << "Displaying Information of Students" << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << "Name:" << s[i].name << endl;
        cout << "Roll:" << s[i].roll_no << endl;
        cout << s[i].avg_marks() << endl;
    }
}