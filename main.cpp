/*
Name: Assignment#8: Sentence Filter
Author: Aharon Mishiev
Date: 11/18/2013
Description:

*/

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    const int MAX_NUM=51;
    ifstream infile;
    ofstream outfile;
    char fileName[MAX_NUM],ch,ch2;

    //prompt for file name
    cout << "Enter an input file name;  " ;
    cin>> fileName;
    infile.open(fileName);              //open input file
    if(!infile)
    {
        cout<<"Error!"<<fileName<<"could not be opened.\n";
        return 0;
    }
    cout << "Enter an output file name: " ;
    cin>>fileName;
    outfile.open(fileName);          //open output file
    if(!outfile)
    {
        cout<<"Error!"<<fileName<<"could not be opened.\n";
        return 0;
    }

    while(!infile.eof())
    {
    infile.getline(array,MAX_NUM,‘.’);
    infile.get(ch);
    toupper(array[0]);
    for(int index=1;index<MAX_NUM;index++)
    tolower(array[index]);

    infile.getline(ch2);
    if(ch == )

    else
    ch2=
    outfile.put(ch2);
    }

    //close files
    infile.close();
    outfile.close();
    return 0;
}
