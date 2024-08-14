//PROGRAM TO ADD TWO NUMBERS AND DISPLAY THE OUTPUT IN NEXT LINE 

#include<iostream.h>
using namespace std;
int main()
{
    int A,B,row;
    cout<<"how many rows you want: ";
    cin>>row;
    cout<<"\nEnter 2 numbers in "<<row<<" rows\n";
    for(int i=0;i<row;i++)
    {
        cin>>A>>B;
        cout<<"\n"<<A+B<<"\n";
    }
    return 0;
}