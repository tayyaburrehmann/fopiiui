#include <iostream>
using namespace std;

void odd(int);
void even(int);

int main ()
{
int x;
cout<<"Enter any integer you want to check, weather it is even or odd: "; cin>>x;
even(x);
return 0;
}

void even(int a )
{ 
if ( a%2==0)
cout << a <<" is even number \a";
else odd(a);
}

void odd(int a)
{ 
cout << a <<" is odd number \a";
}
