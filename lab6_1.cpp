#include<iostream>
using namespace std;

int main(){
    
    bool x = true;
    int number,even=0,odd=0 ;

    while (x)
    {
        cout << "Enter an integer: ";
        cin >> number;
        if(number % 2 == 0 && number != 0){
            even +=1;
        }
        if(number % 2 == 1 && number != 0){
            odd +=1;
        }
        if(number ==0){
            x = false;
        }
    }
    
    cout << "#Even numbers = "<<even<<endl;
    cout << "#Odd numbers = "<<odd;
    return 0;
}