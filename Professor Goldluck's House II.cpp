#include <iostream>
using namespace std;

#define repeat(x) for(int rijk = (x); rijk > 0; --rijk)

int main() {
    int  n, max_ppsf = 0; 
    cin >> n; 
    
    // info for the house first available on previous day
    int  prev_price = 0, prev_rooms = 0, prev_footage = 0, prev_ppsf = 0;  
    
    // info for current house
    int  price = 0, rooms = 0, footage = 0, ppsf = 0;
    
    repeat(n) {
        cin >> price >> rooms >> footage;
        ppsf = price / footage;
        
        // maintain the maximum price-per-square-foot
        if (ppsf > max_ppsf) {
            max_ppsf = ppsf;
        }
        
        if (prev_footage >= 2500 && 2 * prev_ppsf <= max_ppsf) { // prev house satisfies conditions
            if (footage < 2500 || prev_ppsf < ppsf) { // current house either doesn't satisfy condition, or worse
                cout << prev_price << " " << prev_rooms << " " << prev_footage << endl;  // buy prev house
                return 0;
            }
        }
        
        prev_price = price;  prev_rooms = rooms;  prev_footage = footage;  prev_ppsf = ppsf;
    }
    
    // at this point, price, rooms, footage, ppsf store info of last house
    if (footage >= 2500 && 2 * ppsf <= max_ppsf)  // last house satisfies conditions
        cout << price << " " << rooms << " " << footage << endl;
    else
        cout << "You are out of luck, Prof. Goldluck." << endl;  
        
    return 0;
}