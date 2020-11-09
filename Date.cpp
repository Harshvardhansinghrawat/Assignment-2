#include<iostream>
using namespace std;
class date
{
private:
    int day,month,year;
public:
    date(int d, int m,int y)
    {
        day=d;
        month=m;
        year=y;
        if(month>12||month<1)
            month=1;
        setd();
    }
    setd()
    {
        cout<<"Enter the day to set"<<endl;
        cin>>day;
        setm();
    }
    setm()
    {
        cout<<"Enter the month to set"<<endl;
        cin>>month;
        sety();
    }
    sety()
    {
        cout<<"Enter the year to set"<<endl;
        cin>>year;
        display();
    }
    display()
    {
        cout<<"The date is: " <<day<<"/"<<month<<"/"<<year<<endl;
    }
};

int main()
{
    int month,year,day;
    cout<<"Input the day, month and year respectively"<<endl;
    cin>>day>>month>>year;
    date d1(day,month,year);
}
