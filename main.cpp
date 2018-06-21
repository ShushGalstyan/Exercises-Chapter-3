//(Modifying Class GradeBook ) Modify class GradeBook (Figs. 3.11–3.12) as follows:
//a) Include a second string data member that represents the course instructor’s name.
//b) Provide a set function to change the instructor’s name and a get function to retrieve it.
//c) Modify the constructor to specify course name and instructor name parameters.
//d) Modify function displayMessage to output the welcome message and course name,
//then the string "This course is presented by: " followed by the instructor’s name.
//Use your modified class in a test program that demonstrates the class’s new capabilities.
// GradeBook class demonstration after separating
// its interface from its implementation.
#include <iostream>
#include "GradeBook.h" // include definition of class GradeBook
using namespace std;
// function main begins program execution
int main()
{
      GradeBook gradebook1( "12345", "bob");
      GradeBook gradebook2( "654321", "Shush" );

      cout << "gradebook1 created for course: " << gradebook1.getCourseName()<< "\ngradebook2 created for course: " << gradebook2.getCourseName()<< " and the instructor is called " << gradebook2.getInstructorName()<< endl;
      return 0;
}




//  GradeBook.h
// GradeBook class definition in a separate file from main.
//#include <iostream>
//#include <string> // class GradeBook uses C++ standard string class
//using namespace std;
// GradeBook class definition
//class GradeBook
//{
//public:
// constructor initializes courseName with string supplied as argument
//	GradeBook( string name, string iname )
//	{
//		setCourseName( name ); // call set function to initialize courseName
//		setInstructorName(iname);
//	} // end GradeBook constructor
//	// function to set the course name
//	void setCourseName( string name )
//	{
//		courseName = name; // store the course name in the object
//	} // end function setCourseName
//	// function to get the course name
//	string getCourseName()
//	{
//		return courseName; // return object's courseName
//	} // end function getCourseName
 //       void setInstructorName( string name )
//        {
//                instructorName = name; // store the course name in the object
//        } // end function setCourseName
//        // function to get the course name
//        string getInstructorName()
//        {
//                return instructorName; // return object's courseName
//        } // end function getCourseName
//
//	// display a welcome message to the GradeBook user
//	void displayMessage()
//	{
//		// call getCourseName to get the courseName
//		cout << "Welcome to the grade book for\n" << getCourseName()<< "!" << endl;
//		cout <<  "This course is presented by:" << getInstructorName() << "."<< endl;
//	} // end function displayMessage
//private:
//	string courseName; // course name for this GradeBook
//	string instructorName;
