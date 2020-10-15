#include <iostream>
using namespace std;

int main() {
    int n1 , n2 , n3;

    cout << "Enter three numbers " <<endl << endl;

    cout << "Number 1: ";
    cin >> n1;
    cout<< "Number 2: ";
    cin >> n2;
    cout<< "Number 3: ";
    cin >> n3;


    if(n1 >= n2 && n1 >= n3)
        cout <<endl<< "Largest number among three numbers is " << n1<<endl;

    else if(n2 >= n1 && n2 >= n3)
        cout <<endl<< "Largest number among three numbers is " << n2<<endl;

    else if(n3 >= n1 && n3 >= n2)
        cout <<endl<< "Largest number among three numbers is " << n3<<endl;
        
        
    cout << endl <<"Coded By: Argie Villagonzalo";
    return 0;
}
