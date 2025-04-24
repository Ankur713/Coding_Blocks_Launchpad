#include <iostream>
using namespace std;

int main() 
{

    char ch;
    cin >> ch;

    if( ch <='Z' and ch >='A' ) cout <<"UPPER";
    if(ch <='z' && ch >='a') cout <<"LOWER";
    
    
    return 0;
}