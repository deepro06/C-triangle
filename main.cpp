#include <iostream>

using namespace std;
int main()
{   
    
    int a;

    for (int x = 1; x <= a; x++) 
    {   
        for (int y = a - x; y > 0; y--)
        {
            cout << " ";
        }
        for (int z = 1; z <= x; z++)
        {
            cout << "*";
        }
    }
    cout<< "*";


    return 0;
}