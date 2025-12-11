#include "func.h"

double get_gc_content(const string& dna)
{
    int count = 0;

    for(char c : dna)
    {
        if(c == 'C' || c == 'G')
        {
            count++;
        }
    }

    if(dna.size() == 0)
    {
        return 0;
    }

    return (double)count / dna.size();
}

string get_reverse_string(string dna)
{
    string rev = "";

    for(int i = dna.size() - 1; i >= 0; i--)
    {
        rev += dna[i];
    }

    return rev;
}

string get_dna_complement(string dna)
{
    string rev = get_reverse_string(dna);

    for(int i = 0; i < rev.size(); i++)
    {
        if(rev[i] == 'A')
        {
            rev[i] = 'T';
        }
        else if(rev[i] == 'T')
        {
            rev[i] = 'A';
        }
        else if(rev[i] == 'C')
        {
            rev[i] = 'G';
        }
        else if(rev[i] == 'G')
        {
            rev[i] = 'C';
        }
    }

    return rev;
}

