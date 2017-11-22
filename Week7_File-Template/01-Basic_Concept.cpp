#include <iostream>
#include <fstream>

// Open the file -- Method one

ofstream outFile("clients.dat", ios::out|ios::binary)

/*
outFile is ofstream object
ios::out ==> Open for output operations.
ios::app ==> All output operations are performed at the end of the file, 
             appending the content to the current content of the file.
ios::binary ==> Open in binary mode.
*/ 

// Open the file -- Method two

ofstream fout;
fout.open("test.out",ios::out|ios::binary);

// Test if the file is opened!

if(!fout) 
{
  cerr << "File open error!" << endl;
 }

if( fout.is_open())
{
  fout << " This is a line";
  fout.close();
}
