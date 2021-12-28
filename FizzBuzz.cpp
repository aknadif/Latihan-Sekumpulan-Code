#include <conio.h>
#include <iostream.h>

void FizzBuzz(int a){
    
    for(int i = 1; i <= a; i++){
        if(i%3 == 0 && i%5 == 0 ){
        cout << "FizzBuzz" << endl;
        }
        else if(i%3 == 0){
            cout << "Fizz" << endl;
        }
        else if(i%5 == 0){
            cout << "Buzz" << endl;
        }
        else
        cout << i << endl;
    }
    
}

void main()
{
    FizzBuzz(100);
    getch();
}
