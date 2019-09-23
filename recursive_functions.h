#ifndef RECURSIVE_FUNCTIONS_H
#define RECURSIVE_FUNCTIONS_H

//  Author : Fannie Barskhian
//  Project : Recursive Functions
//  Class   : CS8 Data Structures


#include <iostream>
using namespace std;

void R1_levels(int max, int start = 1);
void R2_BOX(string prefix, unsigned int levels);
void R3_first_second(string first, string second, int string_loc);
void R4_unbox(int boxes, string message = "");
double R5_sumover(unsigned int n);
void R16_guess(int low,int high);
void spaces(int n);


void R1_levels(int max, int start )
{
    //This will continue to call itself, and when the last condition is met(max == start),
    // then it will recall the left over parts of the code(below) for each start iteration
    //it went through while it was working recursively.
    if(max == start)
    {
         spaces(start);
        cout << "This is written by call number " << start << "." << endl;
    }else{
        spaces(start);
        cout << "This is written by call number " << start << "." << endl;
        R1_levels(max, start + 1);
    }


    if(start == 1)
    {
         spaces(start);
        cout << "This ALSO written by call number " << start << "." << endl;
    }else{
        spaces(start);
        cout << "This ALSO written by call number " << start << "." << endl;
    }

}

void spaces(int n)
{
    for (int i = 0; i < n; ++i)
    {
       cout << " " ;
    }
}

void R2_BOX(string prefix,int levels)
{
    string s;

    if(levels == 0)
    {
        cout << prefix << endl;
    }else{
        for(int i= 1; i <= 9; i++) // This will happen for all (1-9). (1-9)
        {
            s = prefix;
            s += char('0' + i);
            s += '.';
            R2_BOX(s, levels-1);
        }
    }

}

void R3_first_second(string first, string second, int string_loc)
{
    if(string_loc == first.length())
    {
        cout << first << second << endl;
    }else{
        for(int i = string_loc; i <= first.length() - 1; i++)
        {
            char one;
            char two;
            one = first[string_loc];
            two = first[i];
            first.erase(string_loc, 1);
            first.insert(string_loc, 1, two);
            first.erase(i,1);
            first.insert(i,1, one);
            R3_first_second(first,second, string_loc + 1);
        }
    }
}

void R4_unbox(int boxes, string message)
{
    int box_count;
    int start = 1;
    string s = "1";
    if(boxes == 0)
    {
        cout << "No More boxes" << endl;
    }else{

        for(int i = 1; i <= boxes; i++)
        {

        cout << "Open Box Number " << s ;
        cout << "   How Many Boxes do you see? " ;
        cin >> box_count;
            if(box_count != 0)
            {
                for(int i = 0; i <= box_count; i++)
                {
                    s = message;
                    s += char('0' + i);
                    s += '.';
                    R4_unbox(boxes, s);
                    s.substr(0, message.size() - 2);
                }
            }else{
                s = message;
                s += char('0' + (start+=1));
            }
        }
    }
}

double R5_sumover(unsigned int n)
{
    if(n == 0)
    {
        return 0;
    }else
    {
        return 1.0/n + R5_sumover(n-1);
    }
}

void R16_guess(int low,int high)
{
    char ans;
    int midpoint;
    if(low == high)
    {
         cout << "Your Number is: " << low << endl;
    }
    if(low != high)
    {
        midpoint = (low + high)/2;
        cout << "Is " << midpoint << " your number? ";
        cin >> ans;
        if(ans == 'y')
        {
            cout << "Your Number is: " << midpoint << endl;
        }else{
            cout << "Is your number greater than " << midpoint << " ? " ;
            cin >> ans;
            if(ans == 'y')
            {
                R16_guess(midpoint+1, high);
            }else if(ans == 'n')
            {
                R16_guess(low, midpoint-1);
            }
        }
    }
}

#endif // RECURSIVE_FUNCTIONS_H
