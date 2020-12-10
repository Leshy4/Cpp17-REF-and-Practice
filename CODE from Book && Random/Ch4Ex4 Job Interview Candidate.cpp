/*Exercise 4-4. Look for someone “who is older than 21, younger than 35, is female, has
a bachelor’s or master’s degree, is unmarried, and speaks Hindi or Urdu.” 
Write a program that prompts the user for these qualifications and then outputs whether they
qualify for these very specific requirements. define an integer variable age, 
a character variable gender (to hold 'm' for male and 'f' for female),
a variable degree of an enumeration type AcademicDegree (possible values: none,
associate, bachelor, professional, master, doctor), and three Boolean variables:
married, speaksHindi, and speaksUrdu. 

Emulate a trivial online job interview, and query your applicant for input on all these variables. 
People who enter invalid values do not qualify, of course, and should be ruled out as early as possible (that is, immediately after entering any invalid value; 
ruling them out precognitively prior to entering invalid values, sadly, is not possible yet in Standard C++).*/
#include "pch.h"
#include <iostream>

int main()
{
	unsigned int age;
	char gender;  //to hold 'f' or 'm'
	int AcademicDegree;
	bool married, speaksHindi, speaksUrdu;
	const auto sorry = "\nSorry Applicant, you do not qualify for employment at this time. Check back with us again.\n\n\n\t\t\tHave a good rest of your day.\n\n\n\n\n\n\n\n";
	const auto congrats = "\nCongratulations Applicant! You have passed the Pre-Screening for Employment! =)\n\n\t\t\tSend an Email with a Screenshot of this Screen to Leshy4@yahoo.com\n\t\t\tAlso Attach: Your Resume, Best Ways to Contact, & Completed Application Notification Number\n\n\n";

	std::cout << "Hello Applicant! Thank you for your professional interest with the Company!\n"
		<< "To see if you qualify, let's check a few things.\n";

////“older than 21, younger than 35,
	std::cout << "\nWhat is your Age? : " && std::cin >> age;
	if (age < 21 || age > 35)
	{
		std::cout << sorry;
		return 0;
	}

////female,
	std::cout << "What is your Gender? Enter \"m\" for Male & \"f\" for Female:  "
		&& std::cin >> gender;
	if (gender != tolower('f'))
	{
		std::cout << sorry;
		return 0;
	}

////bachelor’s or master’s degree,
	std::cout << "Do You have a Degree?\n"
		<< "Enter: 0 = None, 1 = Associates, 2 = Bachelors, 3 = Professional, 4 = Masters, 5 = Doctorate:\n"	
		&& std::cin >> AcademicDegree;
	if (AcademicDegree == 2 || AcademicDegree == 4) {}
	else{std::cout << sorry;	return 0;}

//// is unmarried, and speaks Hindi or Urdu.
	std::cout << "Are you Married? Enter 1 for \"Y\" or 0 for \"N\": "
		&& std::cin >> married;
	if (married == true)
	{
		std::cout << sorry;
		return 0;
	}

	std::cout << "Can you speak Hindi? Enter 1 for \"Y\" or 0 for \"N\": "
		&& std::cin >> speaksHindi;
	if (speaksHindi == false)
	{
		std::cout << sorry;
		return 0;
	}
	std::cout << "Can you speak Urdu? Enter 1 for \"Y\" or 0 for \"N\": "
		&& std::cin >> speaksUrdu;
	if (speaksUrdu == false)
	{
		std::cout << sorry;
		return 0;
	}

	std::cout << congrats;
}