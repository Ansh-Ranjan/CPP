/* Problem: Given a string, S , of length that is indexed from 0 to N-1 , print its even-indexed and odd-indexed characters as space-separated strings on a single line (see the Sample below for more detail).
Note: 0 is considered to be an even index.
 
Sample Input: MANIPAL
Sample Output: MNPL AIA
*/

#include <vector>
#include <iostream>
#include <string>
using namespace std;
int main() {
            string string;
            cin>>string;
            for(unsigned j=0;j< string.length();j++)
            {
                    cout<<string[j*2];
            }
            cout<<" ";
            for(unsigned j=0;j< string.length();j++)
            {
            
                    cout<<string [(j*2) + 1];
            }
        return 0;
}
