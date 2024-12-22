#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << "Hey, navdeep, this is the " << i << "'th iteration" << endl;
    }
    return 0;
}

// -----------------------------------------------------------

#include <iostream>
using namespace std;

int main(){
    for (int i = 1 ; i<=5; i++){
        cout  <<"this is: " << i <<endl ; 
    }
}


// -------------------------------------------------------------------
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "i = " << i << ", j = " << j << endl;
            // Nested loop code
        }
    }
    return 0;
}


// ------------------------------------------------------------------
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 25; i += 5) {
        cout << "i = " << i << endl;
    }
    return 0;
}


