#include <iostream>
#include <string>
#include <fstream>
#include <climits>

Array* readFromFile(const string& fileName, unsigned int& numArrays);
printArray(Array &obj);
getMaxOfArray(Array &obj);
void deleteAll(Array* tab);

struct Array
{
    unsigned int size;
    int* arr;
};

int main()
{
    Array* tab = readFromFile("arrays.bin", numArrays)
    for(unsigned int i=0; i<numArrays; i++)
    {
        printArray(tab[i]);
        cout << "MAX:" << getMaxOfArray(tab[i]) << endl;
        cout << "----" << endl;
    }

    return 0;
}

Array* readFromFile(const string& fileName, unsigned int& numArrays)
{
    Array* tab = nullptr;
    ifstream handler(fileName, ios::binary);
    if(handler.is_open)
    {
        streampos fileSize = handler.tellg();
        char* mBlock = new char[fileSize];
        handler.seekg(0, ios::beg);
        handler.read(mBlock, fileSize);
        handler.close();

        char* temp = mBlock;

        numArrays = ((unsigned int*)temp);
        temp += sizeof(unsigned int);

        for(unsigned int i=0; i<numArrays; i++)
        {
            tab[i].size = ((unsigned int*)temp);
            temp += sizeof(unsigned int);
            tab[i].arr = new int[tab[i].size];
            for(unsigned int j=0; j<tab[i].size; j++)
            {
                tab[i].arr[j] = ((int*)temp);
                temp += sizeof(int);
            }
        }


        
        delete[] mBlock;
    }
    else
    {
        cout << "couldnt open file knk" << endl;
    }
}

printArray(Array &obj)
{
    for(unsigned int i=0; i<obj.size; i++)
    {
        cout << obj.arr[i] << " ";
    }
    cout << endl;
}

getMaxOfArray(Array &obj)
{
    int max = INT_MIN;
    for(unsigned int i=1; i<obj.size; i++)
    {
        if(obj.arr[i] > max)
        {
            max = obj.arr[i];
        }
    }
    return max;
}

void deleteAll(Array* tab)
{
    for(unsigned int i=0; i<numArrays; i++)
    {
        delete[] tab.[i].arr;
        tab[i].arr = nullptr;
        tab[i].size = 0;
    }

}
