#include<iostream>
using namespace std ;

// int main(){
// 	int age = 10;
// 	if(age >= 18){

// 		cout << "you are an adult." << endl ;

// 	}
// 	else{
// 		cout << "you are not an adult." ;
// 	}

// }



int main(){
	int marks = 65;
	if(marks < 25){

	 cout << "Grade D." << endl ;

	}
	else if (marks >=25 && marks <= 50){
		cout << "Grade C." << endl;
	}
	else if (marks >=45 && marks <=70 ){
		cout << "Grade B"  << endl;
	}
    else if (marks >=70 && marks <= 100){
		cout << "Grade A." << endl;
	}
    
    else{
	cout << "Invalid Marks Entered" << endl;
    }
   
    return 0 ;

}