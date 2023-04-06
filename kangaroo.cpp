#include <iostream>
#include <string>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) 
{
    if( (x1 > x2) && (v2 > v1) )
    {
        cout << "First No\n";
        return "NO";
    }
    if ( (v1 > 10000) || (v2 > 10000) )
    {
        cout << "Fourth No\n";
        return "NO";
    }
    
    if ((x1 < x2) && (v1 < v2))
    {
        cout << "Second No\n";
        return "NO";
    }
    if ( (x1 > 10000) && (x2 > 10000) )
    {
        cout << "Third No\n";
        return "NO";
    }
    int count = 10000;
    while( count-- )
    {
        x1 = x1 + v1;
        x2 = x2 + v2;
        cout << "X1="<<x1 << "\tX2="<<x2<<endl;
        
        if(x1 == x2)
        {
            return "YES";
        }
    }
}

int main()
{
    string result = kangaroo(4523, 8092, 9419, 8076);
    cout << "Result: " << result << endl;
}