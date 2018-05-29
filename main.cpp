#include <iostream>
#include <stdlib.h>
#include "array.h"
#include <fstream>
#include <ctime>


using namespace std;

int main()
{
	cout << "Student Information" << endl;
	cout << "-------------------" << endl;
	cout << "Name: *Name removed because of public GitHub repository." << endl << endl;
	cout << "Computer Hardware" << endl;
	cout << "-----------------" << endl;
	cout << "CPU: Intel Core i7 6700 clocked at 4.00GHz" << endl;
	cout << "RAM: 8GB" << endl;
	cout << "-----------------" << endl;

	Project ar1, ar2;
	clock_t time;					//Time measurement variable. Different than sTime. 
	long mSize = 0;
	int option;
	float sTime;					//Makes (copy-pasting) easier in data display. Important for outData variable. 
	bool flag = false;				//Bool flag for operation confirmation.

	cout << "Input Array size as integer: ";
	cin >> mSize;
	while (!cin)	
	{
		cout << "That was not an integer. Honestly, what the fuck?You can't be THAT useless. Try again" << endl;
		cin.clear();
		cin.ignore();					//There is an issue with the clear/ignore functions and if an integer is entered followed by a string, 
		cin >> mSize;					// an infinite loop occurs. Will patch it in the future.
	}							
	ar1.setArraySize(mSize);
	ar1.createArray();

	ar2.setArraySize(mSize);
	ar2.createArray();

	ofstream outData("times.txt");				//Variable for data export to times.txt
	do
	{
		cout << "Pick an Array type for Sorting:  (0 to Exit)";
		cout << endl;
		cout << endl << "Array types " << endl;
		cout << "------------" << endl;
		cout << "#1: Random elements. (100%)" << endl;
		cout << "#2: Random elements. (50%) " << endl;
		cout << "#3: Sorted. (Ascending) " << endl;
		cout << "#4: Sorted. (Descending)" << endl;
		cout << "#5: Enter different Array Size." << endl << endl;
		cin >> option;
		switch (option)		
		{
		case 0:
			break;		//If this is removed, default case "Cout" appears if user enters 0. I don't like that. 
		case 1:
			ar1.fillArray(1);
			ar1.copyArray(ar2);
			ar2.printArray();
			cout << "Filled Array with 100% random elements. " << endl;
			cout << "Beginning sorting proccess for 100% randomized Array." << endl;
			outData << "Sorting times for 100% randomized Array with " << mSize << " elements" <<endl;
			outData << "=================================================" << endl << endl;

			time = clock();
			ar2.bubbleSort();
			time = clock() - time;
			sTime = ((float)time) / CLOCKS_PER_SEC;
			cout << "Time for Bubble sort: " << sTime << " Seconds." <<endl;
			outData << "Bubble Sort time " << sTime << "Seconds" << endl;

			ar1.copyArray(ar2);
			time = clock();
			ar2.selectSort();
			time = clock() - time;
			sTime = ((float)time) / CLOCKS_PER_SEC;
			cout << "Time for Select sort: " << sTime << " Seconds." << endl;
			outData << "Select Sort time " << sTime << "Seconds" << endl;

			ar1.copyArray(ar2);
			time = clock();
			ar2.insertSort();
			time = clock() - time;
			sTime = ((float)time) / CLOCKS_PER_SEC;
			cout << "Time for Insert sort: " << sTime << " Seconds." << endl;
			outData << "Insert Sort time " << sTime << "Seconds" << endl;

			ar1.copyArray(ar2);
			time = clock();
			ar2.quickSort();
			time = clock() - time;
			sTime = ((float)time) / CLOCKS_PER_SEC;
			cout << "Time for Quick sort: " << sTime << " Seconds." << endl;
			outData << "Quick Sort time " << sTime << "Seconds" << endl;
			outData << "End of operation. " << endl;
			outData << "==================" << endl << endl;

			cout << "Process completed " << endl << endl;
			ar1.copyArray(ar2);
			cout << "Arrays re-copied." << endl;
			cout << "Select next operation: " << endl << endl;
			flag = true;
			break;
		case 2:
			ar1.fillArray(2);
			ar1.copyArray(ar2);
			cout << "Filled Array with 50% random elements." << endl;
			cout << "Beginning sorting proccess for 50% randomized Array." << endl;
			outData << "Sorting times for 50% randomized Array with " << mSize << " elements" << endl;
			outData << "=================================================" << endl << endl;


			time = clock();
			ar2.bubbleSort();
			time = clock() - time;
			sTime = ((float)time) / CLOCKS_PER_SEC;
			cout << "Time for Bubble sort " << sTime << " Seconds." << endl;
			outData << "Bubble Sort time " << sTime << "Seconds" << endl;

			ar1.copyArray(ar2);
			time = clock();
			ar2.selectSort();
			time = clock() - time;
			sTime = ((float)time) / CLOCKS_PER_SEC;
			cout << "Time for Select sort " << sTime << " Seconds." << endl;
			outData << "Select Sort time " << sTime << "Seconds" << endl;

			ar1.copyArray(ar2);
			time = clock();
			ar2.insertSort();
			time = clock() - time;
			sTime = ((float)time) / CLOCKS_PER_SEC;
			cout << "Time for Insert sort " << sTime << " Seconds." << endl;
			outData << "Insert Sort time " << sTime << "Seconds" << endl;

			ar1.copyArray(ar2);
			time = clock();
			ar2.quickSort();
			time = clock() - time;
			sTime = ((float)time) / CLOCKS_PER_SEC;
			cout << "Time for Quick sort " << sTime << " Seconds." << endl;
			outData << "Quick Sort time " << sTime << "Seconds" << endl;
			outData << "End of operation. " << endl;
			outData << "==================" << endl << endl;

			cout << "Process completed " << endl << endl;\
			ar1.copyArray(ar2);
			cout << "Arrays re-copied." << endl;
			cout << "Select next operation: " << endl << endl;
			flag = true;
			break;
		case 3:
			ar1.fillArray(3);
			ar1.copyArray(ar2);
			cout << "Filled Array with ascending elements. " << endl;
			cout << "Beginning sorting proccess for ascendingly sorted Array." << endl;
			outData << "Sorting times for ascendingly sorted Array with " << mSize << " elements" << endl;
			outData << "=================================================" << endl << endl;

			time = clock();
			ar2.bubbleSort();
			time = clock() - time;
			sTime = ((float)time) / CLOCKS_PER_SEC;
			cout << "Time for Bubble sort " << sTime << " Seconds." << endl;
			outData << "Bubble Sort time " << sTime << "Seconds" << endl;

			ar1.copyArray(ar2);
			time = clock();
			ar2.selectSort();
			time = clock() - time;
			sTime = ((float)time) / CLOCKS_PER_SEC;
			cout << "Time for Select sort " << sTime << " Seconds." << endl;
			outData << "Select Sort time " << sTime << "Seconds" << endl;

			ar1.copyArray(ar2);
			time = clock();
			ar2.insertSort();
			time = clock() - time;
			sTime = ((float)time) / CLOCKS_PER_SEC;
			cout << "Time for Insert sort " << sTime << " Seconds." << endl;
			outData << "Insert Sort time " << sTime << "Seconds" << endl;

			ar1.copyArray(ar2);
			time = clock();
			ar2.quickSort();
			time = clock() - time;
			sTime = ((float)time) / CLOCKS_PER_SEC;
			cout << "Time for Quick sort " << sTime << " Seconds." << endl;
			outData << "Quick Sort time " << sTime << "Seconds" << endl;
			outData << "End of operation. " << endl;
			outData << "==================" << endl << endl;

			cout << "Process completed " << endl << endl;
			ar1.copyArray(ar2);
			cout << "Arrays re-copied." << endl;
			cout << "Select next operation: " << endl << endl;
			flag = true;
			break;
		case 4:
			ar1.fillArray(4);
			ar1.copyArray(ar2);
			ar2.printArray();
			cout << "Filled Array with descending elements. " << endl;
			cout << "Beginning sorting proccess for descendingly sorted Array." << endl;
			outData << "Sorting times for descendingly sorted Array with " << mSize << " elements" << endl;
			outData << "=================================================" << endl << endl;

			time = clock();
			ar2.bubbleSort();
			time = clock() - time;
			sTime = ((float)time) / CLOCKS_PER_SEC;
			cout << "Time for Bubble sort " << sTime << " Seconds." << endl;
			outData << "Bubble Sort time " << sTime << "Seconds" << endl;

			ar1.copyArray(ar2);
			time = clock();
			ar2.selectSort();
			time = clock() - time;
			sTime = ((float)time) / CLOCKS_PER_SEC;
			cout << "Time for Select sort " << sTime << " Seconds." << endl;
			outData << "Select Sort time " << sTime << "Seconds" << endl;

			ar1.copyArray(ar2);
			time = clock();
			ar2.insertSort();
			time = clock() - time;
			sTime = ((float)time) / CLOCKS_PER_SEC;
			cout << "Time for Insert sort " << sTime << " Seconds." << endl;
			outData << "Insert Sort time " << sTime << "Seconds" << endl;

			ar1.copyArray(ar2);
			time = clock();
			ar2.quickSort();
			time = clock() - time;
			sTime = ((float)time) / CLOCKS_PER_SEC;
			cout << "Time for Quick sort " << sTime << " Seconds." << endl;
			outData << "Quick Sort time " << sTime << "Seconds" << endl;
			outData << "End of operation. " << endl;
			outData << "==================" << endl << endl;

			cout << "Process completed " << endl << endl;
			ar1.copyArray(ar2);
			cout << "Arrays re-copied." << endl;
			cout << "Select next operation: " << endl << endl;
			
			flag = true;
			break;
		case 5: 
			ar1.freeArrayMem();
			ar2.freeArrayMem();
			cout << "Arrays have been reset. Please enter new Array size as an integer: ";
			cin >> mSize;
			cout << endl;
			while (!cin)											
			{
				cout << "That was not an integer. << endl;
				cin.clear();
				cin.ignore();									//There is an issue with the clear/ignore functions and if an integer is entered followed by a string, 
				cin >> mSize;									//an infinite loop occurs. Will patch it in the future.
			}													

			ar1.setArraySize(mSize);
			ar1.createArray();

			ar2.setArraySize(mSize);
			ar2.createArray();
			break;
		default:
			cout << "Illegal option. Seriously, pick one of the options.It's not THAT hard. " << endl; //For the ones that want to break the program. 
		}
		
	} while (option != 0);
	ar1.freeArrayMem();
	ar2.freeArrayMem();
	if (flag == true)
	{
		cout << "Results exported to Times.txt" << endl;
		cout << "Program Terminated *Arnold Schwarzenegger's Accent*" << endl << endl; //Because Terminator 2 is the best Terminator movie. Also, Arnold = God.
	}
	else
	{
		cout << "No operations were made." << endl;
		cout << "Program Terminated *Arnold Schwarzenegger's Accent*" << endl;
	}
	system("PAUSE");
	return (0);
}
