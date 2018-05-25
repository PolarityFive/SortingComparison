#include "RandMT.h"
#include "array.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;
void QS(long pArray[], long left, long right);			//Non-member function call for Quicksorting the Private Array.

void Project::setArraySize(long n1)
{
	size = n1;
}

void Project::createArray()
{
	pArray = new long[size];
}

void Project::fillArray(long c)
{
	long i;
	RandMT Rand1;
	RandMT(time(NULL));
	long half;
	half = size / 2;
	switch (c)
	{
	case 1:
		for (i = 0; i < size; i++)
		{
			pArray[i] = Rand1();
		}
		break;
	case 2:										 
		for (i = 0; i < half; i++)                    
		{										
			pArray[i] = i;						
		}										
		for (i = half; i < size; i++)
		{
			pArray[i] = Rand1();
		}
		break;
	case 3:
		for (i = 0; i < size; i++)
		{
			pArray[i] = i;
		}
		break;
	case 4:
		for (i = 0; i < size; i++)
		{
			pArray[i] = size - i;
		}
		break;
	}
}

void Project::printArray()
{
	long i;
	for (i = 0; i < size; i++)
	{
		cout << pArray[i] << " ";
		cout << endl;
	}
}

void Project::freeArrayMem()
{
	delete[]pArray;
}

void Project::copyArray(Project ant)
{
	long i;
	for (i = 0; i < size; i++)
	{
		ant.pArray[i] = pArray[i];
	}
}

void Project::bubbleSort()
{
	long j, i, temp;
	for (i = 1; i < size; i++)
	{
		for (j = size - 1; j >= i; j--)
		{
			if (pArray[j - 1] > pArray[j])
			{
				temp = pArray[j - 1];
				pArray[j - 1] = pArray[j];
				pArray[j] = temp;
			}
		}
	}
}

void Project::selectSort()
{
	long i, k, j, min = 0;

	for (i = 0; i < size - 1; i++)
	{
		k = i;
		min = pArray[i];
		for (j = i + 1; j < size; j++)
		{
			if (pArray[j] < min)
			{
				k = j;
				min = pArray[j];
			}
		}
		pArray[k] = pArray[i];
		pArray[i] = min;
	}
}

void Project::insertSort()
{
	long i, key, j;
	for (i = 1; i < size; i++)
	{
		key = pArray[i];
		j = i - 1;
		while (j >= 0 && pArray[j] > key)
		{
			pArray[j + 1] = pArray[j];
			j = j - 1;
		}
		pArray[j + 1] = key;
	}
}
void Project::quickSort()
{
	long oLeft = 0;
	long oRight = size - 1;

	QS(pArray, oLeft, oRight);		//The cheat function call. 

}

void QS(long pArray[], long left, long right)  //Quicksort Cheat.
{
	long i = left, j = right;
	long tmp;
	long pivot = pArray[(left + right) / 2];
	while (i <= j)							//Partition part.
	{
		while (pArray[i] < pivot)
		{
			i++;
		}
		while (pArray[j] > pivot)
		{
			j--;
		}
		if (i <= j)
		{
			tmp = pArray[i];
			pArray[i] = pArray[j];
			pArray[j] = tmp;
			i++;
			j--;
		}
	}
	if (left < j)			//Recursion part.
	{
		QS(pArray, left, j);
	}
	if (i < right)
	{
		QS(pArray, i, right);
	}
}
