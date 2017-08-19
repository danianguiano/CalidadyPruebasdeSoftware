#include "iostream"
#include <math.h>

using namespace std;


class Sort
{
public: 
	virtual void doSomething(int list[], int size)=0
	;
};

class bubbleSort:public Sort{
public:
	void doSomething(int list[], int size)
{
    int temp;
    for(int i=0; i<size; i++)
    {
        for(int j=size-1; j>i; j--)
        {
            if(list[j]<list[j-1])
            {
                temp=list[j-1];
                list[j-1]=list[j];
                list[j]=temp;
            }
        }
    }
}

};


class selectionSort:public Sort{
public:
	void doSomething(int arr[], int n)
{
//pos_min is short for position of min
	int pos_min,temp;

	for (int i=0; i < n-1; i++)
	{
	    pos_min = i;//set pos_min to the current index of array
		
		for (int j=i+1; j < n; j++)
		{

		if (arr[j] < arr[pos_min])
                   pos_min=j;
	//pos_min will keep track of the index that min is in, this is needed when a swap happens
		}
		
	//if pos_min no longer equals i than a smaller value must have been found, so a swap must occur
            if (pos_min != i)
            {
                 temp = arr[i];
                 arr[i] = arr[pos_min];
                 arr[pos_min] = temp;
            }
	}
}

};

class insertionSort:public Sort{
public:
	void doSomething(int list[], int size)
{
    for(int j=1;j<size;j++)
    {
        int key=list[j];
        int i = j-1;
        while(i>-1 and list[i]>key)
        {
            list[i+1]=list[i];
            i=i-1;
        }
        list[i+1]=key;

    }
}
};