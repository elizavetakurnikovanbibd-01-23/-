#include <iostream> 
#include <cmath> 
using namespace std; 
 
int main() 
{ 
    int x, y; 
    cout << "enter x: "; 
    cin >> x; 
    if (x <= -1) 
    { 
        cout << "y = " << 1; 
    } 
    if (x >= 1) 
    { 
        cout << "y = " << -1; 
    }
    return 0; 
}
