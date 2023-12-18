#include <iostream>

using namespace std;

class holiday
{
private:
    int slno;
    string date;
    string importance;

public:
    void getdata()
    {
        cout << "Enter Date: ";
        cin >> date;
        cout << "Enter Importance: ";
        cin >> importance;
    }
};

int main(void)
{
    holiday h[5];
    h[0].getdata();
    return 0;
}