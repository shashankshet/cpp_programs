#include<iostream>

using namespace std;

int fact(int n)
{
    int factiorial = 1;
    for(int i=2;i<=n;i++)
    {
        factiorial=factiorial*i;
    }
    return factiorial;
}
//==================== Factorial================================================
// int main()
// {
//     int n;
//     cin >> n;
//     int ans = fact(n);
//     cout << ans << endl;
//     return 0;
// }

//====================== Pascal's traingle===========================================
int main()
{

    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout << fact(i)/(fact(j)*fact(i-j)) << " ";
        }
        cout<< endl;
    }
}