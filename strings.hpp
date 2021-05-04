#ifndef _TSTRINGS_T_
#define _TSTRINGS_T_

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int length(string s)
{
   int i=0;
   while ( s[i] != '\0' )
   {
      i++;
   }
   return i;
}

int charCount(string s,char c)
{
   int i = 0;
   int cont = 0;
   while ( s[i] != '\0' )
   {
      if ( s[i]== c )
      {
         cont++;
      }
      i++;
   }
   return cont;
}

string substring(string s,int d,int h)
{
   int i=0;
   string res;
   while ( s[i]!='\0')
   {
      if (i>=d)
      {
         if (i<h)
         {
            res=res+s[i];
         }
      }
      i++;
   }
   return res;
}

string substring(string s,int d) // ok
{
   int i=0;
      string res;
      while ( s[i]!='\0')
      {
         if (i>=d)
         {
            res = res+s[i];
         }
         i++;
      }
      return res;
}

int indexOf(string s,char c) // ok
{
   int i=0, q=-1;
   while (s[i]!='\0' and q==-1)
   {
      if (s[i]==c)
      {
         q=i;
      }
      i++;
   }
   return q;
}

int indexOf(string s,char c,int offSet) // ok
{
   int i=0, q=-1;
   while( s[offSet]!='\0' and q==-1 )
   {
      if( s[offSet]==c )
      {
         q = i;
      }
      offSet++;
      i++;
   }
   return q;
}

int indexOf(string s,string toSearch) // ok
{
   int i=0, k=0, pos=-1;
   string substring;
   for (i=0; i<length(s); i++)
   {
      if (s[i] == toSearch[k])
      {
         k++;
         substring = substring + s[i];
         if( substring==toSearch )
            {
               pos = i-k+1;
               i = length(s);
            }
         else
            k=0;
      }
   }
   return pos;
}

int indexOf(string s,string toSearch,int offset) // ok
{
   int i=0, k=0, pos=-1;
      string substring;
      for (i=0; i<=length(s); i++)
      {
         if (s[i] == toSearch[k])
         {
            k++;
            substring = substring + s[i];
            if( substring==toSearch )
               {
                  pos = (length(s)-length(toSearch)+1)+offset;
                  i = length(s);
               }
            else
               k=0;
         }
      }
      return pos;
}

int lastIndexOf(string s,char c)
{
   int i = 0,q = -1;
   while( s[i]!='\0' )
   {
      if( s[i]==c )
      {
         q = i;
      }
      i++;
   }
   return q;
}

int indexOfN(string s,char c,int n)
{
   int i = 0,q = -1, cn=1;
      while( s[i]!='\0' and cn<=n)
      {
         if( s[i]==c )
         {
            q = i;
            cn++;
         }
         i++;
      }
      if (n>cn) {
         q = length (s) - 1;
      }
    return q;
}

int charToInt(char c)
{
   int n;
   n = c - 48;
   return n;
}

char intToChar(int i)
{
   char n;
   n = i + 48;
   return n;
}

int getDigit(int n,int i)
{
   int res, x = 0;
   if( i>0 )
   {
      while( x<i )
      {
         n = n/10;
         x++;
      }
      res = n%10;
   }
   else
   {
      res = n%10;
   }
   return res;
}

int digitCount(int n)
{
   int cd=0, dn=0;
   while (n>9)
   {
      n=n/10;
      cd++;
   }
   dn=cd+1;
   return dn;
}

string intToString(int i)
{
   int d=0, y;
   char t;
   string res;
   while (d < digitCount(i))
   {
      y = getDigit(i,d);
      t = intToChar(y);
      res = t + res;
      d++;
   }
   return res;
}

int stringToInt(string s,int b) // ok
{

   return 0;
}

int stringToInt(string s) // ok
{
   return 0;
}

string charToString(char c)
{
   return "";
}

char stringToChar(string s)
{
   return 'X';
}

string stringToString(string s)
{
   return "";
}

string doubleToString(double d)
{
   return "";
}

double stringToDouble(string s)
{
   return 1.1;
}

bool isEmpty(string s)
{
   return true;
}

bool startsWith(string s,string x)
{
   return true;
}

bool endsWith(string s,string x)
{
   return true;
}

bool contains(string s,char c)
{
   return true;
}

string replace(string s,char oldChar,char newChar)
{
   return "";
}

string insertAt(string s,int pos,char c)
{
   return "";
}

string removeAt(string s,int pos)
{
   return "";
}

string ltrim(string s)
{
   return "";
}

string rtrim(string s)
{
   return "";
}

string trim(string s)
{
   return "";
}

string replicate(char c,int n)
{
   return "";
}

string spaces(int n)
{
   return "";
}

string lpad(string s,int n,char c)
{
   return "";
}

string rpad(string s,int n,char c)
{
   return "";
}

string cpad(string s,int n,char c)
{
   return "";
}

bool isDigit(char c)
{
   return true;
}

bool isLetter(char c)
{
   return true;
}

bool isUpperCase(char c)
{
   return true;
}

bool isLowerCase(char c)
{
   return true;
}

char toUpperCase(char c)
{
   return 'X';
}

char toLowerCase(char c)
{
   return 'X';
}

#endif
