#include<iostream>

using namespace std;

class Distance 
{
    int feet, inches;
    
    public:
    void getdata(int f, int i)
    {
        feet = f;
        inches = i;
    }

    void print(void)
    {
        cout << feet << " feet " << inches << " inches\n";
    }

    Distance sum(Distance d2);
};

Distance Distance::sum(Distance d2)
{
    Distance d3;
    d3.feet = feet + d2.feet + (inches + d2.inches) / 12;
    d3.inches = (inches + d2.inches) % 12;
    return d3;
}

int main()
{
    Distance length1, length2, total;
    
    length1.getdata(17, 6);
    length2.getdata(13, 8);
    total = length1.sum(length2);

    cout << "Length1: ";
    length1.print();
    
    cout << "Length2: ";
    length2.print();
    
    cout << "Total Length: ";
    total.print();

    return 0;
}
