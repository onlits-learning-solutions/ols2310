#include <iostream>

using namespace std;

class holiday
{
private:
    int slno;
    string date;
    string importance;
    static int count=0;
public:
    void getdata()
    {
        count++;
        slno = count;
        cout << "Enter Date: ";
        cin >> date;
        cout << "Enter Importance: ";
        getchar();                  //Eat up the new line character
        getline(cin, importance);   //Read multiword string
    }

    int putslno()
    {

        return slno;
    }

    string putdate()
    {
        return date;
    }

    string putimportance()
    {
        return importance;
    }
};

class holiday_list
{
private:
    holiday holidays[10];           //Composition
    int size = 0;

public:
    void addholiday()
    {
        holidays[size].getdata();
        size++;
    }

    void display()
    {
        cout << "Holiday List - 2024" << endl;
        for (int i = 0; i < size; i++)
        {
            cout << holidays[i].putslno() << "\t";
            cout << holidays[i].putdate() << "\t";
            cout << holidays[i].putimportance() << endl;
        }
    }
};

int main(void)
{
    holiday_list list;
    char ch = 'n';

    do
    {
        list.addholiday();
        cout << "Do you want to add another (y/n): ";
        cin >> ch;
    } while(ch == 'y');

    list.display();
    return 0;
}