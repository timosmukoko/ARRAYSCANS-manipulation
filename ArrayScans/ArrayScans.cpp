//
// Menu.cpp : Defines the entry point for the console application.
// Team Project: Michael O Sullivan, Shane Nolan, Timos Mukoko.
//

#include "stdafx.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//Variables
	int list[12], listCopy[12], rewriteCheck[12];
	int option;
	int i;

	double sum, average;

	const int divide = 12;

	int total, largest, smallest;
	int find, occur, scaleUp, backWards, changes;

	//Load the data from data.dat

	ifstream infile("data.dat"); //Get contents from data.dat file

	for (i = 0; i < 12; i++) //For Loop : that loops 12 times
	{
		infile >> list[i]; // Put the contents into the array 'list'
	}

	//GUI
	cout << "\t   ____________________________________" << endl;
	cout << "\t  |                                    |" << endl;
	cout << "\t  |            TEAM PROJECT            |" << endl;
	cout << "\t  |____________________________________|" << endl;

	//MENU
	do {
		cout << endl;
		cout << endl;
		cout << "\t        THE ARRAYSCANS APPLICATION	   " << endl;
		cout << "\t__________________________________________" << endl << endl;
		cout << "\t      	        MENU LIST               " << endl;
		cout << "\t__________________________________________" << endl << endl;
		cout << "\t0. The list of all values in the collection" << endl;
		cout << "\t1. The Total of values in the collection" << endl;
		cout << "\t2. The Average of Values" << endl;
		cout << "\t3. The largest Value in The collection." << endl;
		cout << "\t4. The Smallest Value in The collection" << endl;
		cout << "\t5. Occurrences of value" << endl;
		cout << "\t6. Scale up the values in the collection" << endl;
		cout << "\t7. The reverse values in the collection" << endl;
		cout << "\t8. The smallest number converted to Zero" << endl;
		cout << "\t9. Exit" << endl;
		cout << "\t__________________________________________" << endl;

		//User Input
		cout << "\n\tEnter the menu number: ";
		cin >> option;
		cout << endl;

		//Options
		switch (option)
		{
		case 0:		//display the array

			cout << "\tThe current list array elements are." << endl;
			cout << "\t";

			for (i = 0; i < 12; i++)	//Outputs the content from each array
			{
				cout << list[i] << ", ";

			}
			cout << endl;
			cout << endl;
			cout << endl;
			break;

		case 1://The total of values in collection
			total = 0;
			for (i = 0; i < 12; i++) //Gets the content from the array list and adds them all up
			{
				total += list[i];
			}
			cout << "\tThe total of the array is: " << total << endl; //Outputs the total
			cout << endl;
			cout << endl;
			cout << endl;
			break;

		case 2://The average of the collection
			sum = 0;
			for (i = 0; i < 12; i++)
			{
				sum += list[i];	// Gets the contents from the array list and adds them all up
			}
			average = sum / divide;
			cout << "\tThe Average of the array is: " << fixed << setprecision(2) << average << endl; //Outputs the average with two decimal places
			cout << endl;
			cout << endl;
			cout << endl;
			break;

		case 3:	//outputs the largest value in the collection

			largest = list[0];	//Set the largest int to the first array value.

			for (i = 0; i < 12; i++)
			{
				if (list[i] >= largest)
				{
					largest = list[i];
				}
			}
			cout << "\tThe Largest number in the array is: " << largest << endl;	//Outputs the largest array
			cout << endl;
			cout << endl;
			cout << endl;
			break;

		case 4://Outputs the smallest value in the collection

			smallest = list[0];	//Set the smallest int to the first array value

			for (i = 0; i < 12; i++)	//For loop to find smallest value
			{
				if (list[i] <= smallest)
				{
					smallest = list[i];
				}
			}

			cout << "\tThe Smallest number in the array is: " << smallest << endl;	//Outputs the smallest value
			cout << endl;
			cout << endl;
			cout << endl;
			break;

		case 5://occurences of a number inputted by user.

			occur = 0;//sets occur integer to 0

			cout << "\tEnter the number you want to look for: ";	//prompts user to enter nummber they want to find
			cin >> find;

			for (i = 0; i < 12; i++)	//For loop to find (find) int in array
			{
				if (find == list[i])
				{
					occur++;
				}
			}
			cout << endl;
			cout << "\t" << find << " was found " << occur << " times in the array." << endl;	//results
			break;

		case 6://Scale all the values by a number inputted by the user

			cout << "\tWhat do you want to multiply the numbers in the array by: ";	//Prompt user to enter number they want to multiply each number with
			cin >> scaleUp;

			for (i = 0; i < 12; i++)	//For loop to multiply each number by (scaleUp) int
			{
				list[i] *= scaleUp;
			}
			cout << endl << "\tResult: ";

			for (i = 0; i < 12; i++)	//For loop to output result
			{
				cout << list[i] << ", ";

			}
			break;

		case 7://Reverses the position of the numbers in the array

			for (i = 0; i < 12; i++)	//Copy the contents from list into listCopy
			{
				listCopy[i] = list[i];
			}
			backWards = 11;	//Sets backwards int to 11

			for (i = 0; i < 12; i++, backWards--)	//Increments i and decrements backWards
			{
				list[i] = listCopy[backWards];	//Assign each list array value with the backWards list value
			}
			cout << "\tResult: ";

			for (i = 0; i < 12; i++)	//Outputs result
			{
				cout << list[i] << ", ";

			}
			cout << endl;
			break;

		case 8://Finds the smallest number and takes it away from all values

			smallest = list[0];	//Sets zeroB to list[0]

			for (i = 0; i < 12; i++)		//For loop that finds smallest value
			{
				if (list[i] <= smallest)
				{
					smallest = list[i];
				}
			}

			cout << "\tResult: ";
			for (i = 0; i < 12; i++)	//Displays each array - the smallest value
			{
				list[i] -= smallest;
				cout << list[i] << ",";
			}
			cout << endl;
			break;

		case 9://Exits the application
			cout << endl << "\tExiting......................." << endl;
			break;

		default:	//When an invalid option is entered
			cout << "Invalid option\n";
		}
	} while (option != 9);

	/*Rewrite Check ::
	The For Loop checks to see if the contents of the array list is not equal to the array rewriteCheck.
	If the array lists are not the same then it increments changes.

	Then it checks if changes is not equal to 1 if its not then
	It outputs the array list to output.dat
	Or else it doesn't make any changes.
	*/

	changes = 0;	//sets changes to 0

	ifstream outfile("output.dat");
	for (i = 0; i < 12; i++)		//for loop to check contents of output.dat against list[] array
	{
		outfile >> rewriteCheck[i];
		if (list[i] != rewriteCheck[i])
		{
			changes++;
		}
	}

	if (changes > 0)	//if statement to check if re-wrtitting file is necessary
	{
		ofstream myfile("output.dat");
		for (i = 0; i < 12; i++)		//for loop to write list array to output.dat
		{
			myfile << list[i] << " ";
		}
	}

	cout << endl << "\t" << changes << " changes were made to the output.dat file! " << endl;	//tells user how many changes were made to output.dat file

	return 0;
}

