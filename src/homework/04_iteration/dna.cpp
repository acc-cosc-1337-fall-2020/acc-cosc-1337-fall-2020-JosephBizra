#include<iostream>
#include "dna.h"

using namespace std;
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(const string& dna)
{
    double gc = 0;
    double n = dna.length();

    for(int i = 0; i < n; i++)
        if (dna[i] == 'G' || dna[i] == 'C')
        {
            cout<<"\ndna[i]: "<<dna[i];
            gc++;
            cout<<"\nGC = "<<gc;
        }
    cout<<"\nn = "<<n;

    double result = gc / n;
    return result;
}


/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/

string get_reverse_string(string dna)
{
    int n = dna.length();

    for(int i = 0; i < n/2; i++)
        swap(dna[i], dna[n - i - 1]);
        
    return dna;
}

/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string
*/

string get_dna_complement(string dna)
{
    string reverse = get_reverse_string(dna);
    int n = reverse.length();

    cout<<"\nReverse: "<<reverse;

    for (int i = 0; i < n; i++)
    {
        if (reverse[i] == 'A')
        {
            reverse[i] = 'T';
        }
        else if (reverse[i] == 'T')
        {
            reverse[i] = 'A';
        }
        else if (reverse[i] == 'C')
        {
            reverse[i] = 'G';
        }
        else if (reverse[i] == 'G')
        {
            reverse[i] = 'C';
        }
    }
    cout<<"\nDNA = "<<reverse;
    return reverse;
    
}