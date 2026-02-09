//******************************************************************************
// File name:   main.cpp
// Author:      
// Date:        
// Class:       
// Assignment:  
// Purpose:     
// Hours:       
//******************************************************************************

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <cstdlib>

std::string getInputFilename (const std::string& rMessage);
void openFile (std::ifstream& rInputStream,
  const std::string& rFilename);
void closeFile (std::ifstream& rInputStream);

std::string getReferenceSequence (const std::string& rMessage);

std::string toUpperCopy (const std::string& rSequence);

bool isValidBase (char base);
bool isValidDna (const std::string& rSequence);

int hammingDistance (const std::string& rFirstDna,
  const std::string& rSecondDna);


/*******************************************************************************
Function:    main

Description: Coordinates input handling, file processing, and DNA analysis.

Parameters:  None

Returned:    Exit status.
*******************************************************************************/
int main () {


  return EXIT_SUCCESS;
}