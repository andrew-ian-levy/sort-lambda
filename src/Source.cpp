#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std ;

int main()
{
    vector<int> v(20) ;
	
    iota(v.begin(), v.end(), 1) ;
    
    v.push_back(30) ;
    v.push_back(29) ;
    v.push_back(28) ;
    
    sort(v.begin(), v.end(),[](const int& a, const int& b) { return a > b ; } ) ;
    
    for (vector<int>::iterator it = v.begin() ; it != v.end(); ++it) {
        
        cout << *it << " " << flush ;
        
    }
    
}
