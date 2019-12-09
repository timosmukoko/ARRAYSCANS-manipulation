# ARRAYSCANS-manipulation

Software requirements specifications (SRS)

1.	Introduction
1.1	Purpose
The purpose of this section is to describe what the developer(us) thinks the piece of software should look like and more importantly what it should do for the client. This makes sure that the software meets the clients expectations.

1.2	Scope
To extend the arrayScans application 
to include additional  menu options listed below:
0.	Display
1.	Total
2.	Average
3.	Largest
4.	Smallest
5.	Occurrence’s
6.	Scale Up
7.	Reverse
8.	Zero Base
9.	Exit

1.3 Definitions
Pseudo Code:
The Pseudo code is used to plan out the program in plain English as it does not need to meet C++ language code.

GUI
GUI is an acronym that stands for Graphical User Interface. This is the design that the user sees and interacts with to use the program.




2.	Description
2.1 Product Functions
•	The program starts by accessing the data.dat file in the programs directory and gets 12 numbers and saves them to an array called list[].
•	The main menu is then displayed with the options 0 to 9 listed above in 1.2.
•	The user is then prompted to enter the corresponding number on the keyboard and they then must press enter.
•	The list[] array will then be modified and displayed and the user will be brought back to the main menu.
•	When the user presses 9 to exit, the program will then open a file output.dat and check its contents against the list[] array.
•	 If the output.dat is different then the contents of the list[] array will be 
Written to the output.dat file.
•	However If the output.dat file and the list[] array are the same then the program will print “No changes were made to the output file”.
•	The program will then exit.
