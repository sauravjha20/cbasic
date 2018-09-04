#include <iostream>

using namespace std;

void display(const int *start,const int *end);


int main()
{
  int number[]={22,55,66,99,88,77,44};
  display(number+4,number+6);
}

void display(const int *start,const int *end)
{
    const int *ptr;
    for(ptr=start;ptr!=end;ptr++)
    {
        cout<< *ptr<<endl;
    }
}
