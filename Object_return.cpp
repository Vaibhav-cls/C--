#include<iostream.h>
using namespace std;

class distance 
{
    int feet,inches;
    public:
    void getdata(int f,int i)
    {
        feet=f,inches=i;
    }
    void print(void)
    {
        cout<<feet<<"feet "<<inches<<"inches\n";
    }
    distance sum(distance d2);
   /* {
        distance d3;
    d3.feet=feet+d2.feet+(inches+d2.inches)/12;
    d3.inches=(inches+d2.inches)%12;
    return d3;
    }*/
};
distance distance :: sum(distance d2)
{
    distance d3;
    d3.feet=feet+d2.feet+(inches+d2.inches)/12;
    d3.inches=(inches+d2.inches)%12;
    return d3;
}

int main()
{
    distance length1,length2,total;
    system("cls");
    length1.getdata(17,6);
    length2.getdata(13,8);
    total=length1.sum(length2);
    cout<<"Length1: ";
    length1.print();
    cout<<"Length2: ";
    length2.print();
    cout<<"Total Length: ";
    total.print();
    return 0;
}