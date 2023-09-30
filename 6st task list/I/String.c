
#include <string.h>
#include <ctype.h>

#include "String.h";

int StringLen( char* text )
{
    return strlen( text );
}

int StringSpace( char* text )
{
    int i;
    int count = 0;
    for (i = 0; i < StringLen( text ); i++)
    {
        if (text[i] == " ")
        {
            count++;
        }        
    }    
    
    return count;
}

int StringA( char* text )
{
    int i;
    int count = 0;
    for (i = 0; i < StringLen( text ); i++)
    {
        if (text[i] == "A")
        {
            count++;
        }        
    }    
    
    return count;    
}

char* StringToUpper( char* text )
{
    int i;

    for (i = 0; i < StringLen( text ); i++)
    {
        toupper(text[i]);
    }    

    return text;
}