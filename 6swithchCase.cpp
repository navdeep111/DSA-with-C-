// // #include<iostream> 
// // using namespace std;

// // int main(){

// // 	int day = 2;

// // 	switch(day){
// // 	case 1: 
// // 		cout << "Sunday";
// // 	    break;

// // 	case 2: 
// // 		cout << "Monday";
// // 	    break;
	    
// //     case 3: 
// // 		cout << "Tuesday";
// // 	    break;


// // 	}

// // 	return 0;
// // }




// #include <iostream>
// using namespace std;

// int main() {
//     const int x = 10;
//     const int y = 5;

//     switch (x + y) {
//         case 15:
//             cout << "Result is 15." << endl;
//             break;
//         case 20:
//             cout << "Result is 20." << endl;
//             break;
//         default:
//             cout << "No match found." << endl;
//     }

//     return 0;
// }




#include <iostream>
using namespace std;

int main() {
    char grade = 'B';

    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Good!" << endl;
            break;
        default:
            cout << "Not specified." << endl;
    }

    return 0;
}