#include<iostream>
using namespace std;

int main()
{
    int a;
    cout << "enter a number: ";
    cin >> a;
    for(int i=1;i<a;i++)
    {
        if(i%2==!0)
            continue;
        cout << i <<endl;
    }

}