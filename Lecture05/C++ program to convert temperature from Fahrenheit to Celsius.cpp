#include <iostream>
using namespace std;

int main() 
{
    
    int start, end, interval;
    cin >> start >> end >> interval;
    
    for(int i = start; i <= end; i = i+ interval){
          cout << i <<"  ";
          double cal = ((5/9.0)*(i-32));
          cout << cal << endl;
    }
    return 0;
}