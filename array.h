#pragma once		//Don't remove this. 

class Project  
{
private:
	long  *pArray;	 
	long  size;
public:
	void setArraySize(long  n1);
	void createArray();
	void fillArray(long c);
	void printArray();
	void freeArrayMem();
	void copyArray(Project ant);
	void bubbleSort();
	void selectSort();
	void insertSort();
	void quickSort();	 
};
