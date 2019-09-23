#ifndef RECURSIVE_TESTS_H
#define RECURSIVE_TESTS_H
#include "../Resursion/recursive_functions.h"

//  Author : Fannie Barskhian
//  Project : Recursive Functions
//  Class   : CS8 Data Structures

void R1_test();
void R2_test();
void R3_test();
void R4_test();
void R5_test();
void R16_test();

void R1_test()
{
    cout << "Testing Levels Func with input 9" << endl << endl;
    R1_levels(9);
    cout << endl;

    cout << "Testing Levels Func with input 7" << endl<< endl;
    R1_levels(7);
        cout << endl;

    cout << "Testing Levels Func with input 3" << endl << endl;
    R1_levels(3);
    cout << endl;


}

void R2_test()
{

    cout << "Testing BOX Function with 3 levels up to 9 " << endl << endl;
    string box = "BOX   ";

    R2_BOX(box, 3);
}



void R3_test()
{
    string box = "BOX";
    string cat = "CAT";
    int size = box.size();
    cout << "Testing String Rearrange Function with BOXCAT " << endl;
    R3_first_second(box, cat, 0 );

    string hello = "HELLO";
    string world = "WORLD";
    int size1 = hello.size();
    cout << "Testing String Rearrange Function with HELLOWORLD " << endl;
    R3_first_second(hello, world, 0);


}




void R4_test()
{
        cout << "How Many Boxes do you see right now ? " ;
        int boxes;
        cin >> boxes;
        R4_unbox(boxes);
}


void R5_test()
{

    cout << "Testing SUMOVER function with value 6 " << endl;
    double result = R5_sumover(6);
    if(result = 2.45)
    {
        cout << "Test Passed " << result << endl << endl;
    }else{
        cout << "Test FAILED" << endl;
    }



}
void R16_test()
{
    int number;
    cout << "Guess a Number Between 1 and 10,000" << endl;
    cin >> number;
    R16_guess(1,10000);
    cout << "The number you chose is " << number << endl;
}

#endif // RECURSIVE_TESTS_H
