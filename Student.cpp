#include "Student.h"
#include <iostream>
#include <string.h>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int pId, const char pname[20]){
  studentId = pId;
  strcpy(name,pname);
}

// Display StudentId and Name
void Student::display(){
  cout << "Student ID is " << studentId << "\n";
  cout << "Student name is " << name << "\n";
}

