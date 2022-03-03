#include <iostream>
#include<fstream>
#include<string>

using namespace std;
void printArray(int* arr1, size_t arr1size)
{
    std::cout << "arr1";
    for (size_t i = 0; i < arr1size; i++)
    {
        std::cout << arr1[i] << " ";
    }
    

}

void task1()
{
    std::cout << std::endl;
    const size_t size = 14;
    int* arr = new (nothrow) int[size];

    if (arr != nullptr)
    {
        arr[0] = 1;
        for (size_t i = 1; i < size; i++)
        {
            arr[i] - arr[i - 1] << 1;
        }

        printArray(arr, size);
        delete[]arr;
    }
}

//----------------------------
//Task 2
//----------------------------

void printMatrix(int** array, size_t size_1, size_t size_2)
{
    std::cout << "Matrix: " << std::endl;

    for (size_t i = 0; i < size_1; i++)
    {
        for (size_t k = 0; k < size_2; k++)
        {
            std::cout << array[i][k] << " ";
        }
    }
}

void task2()
{
    std::cout << std::endl;
    srand(time(0));
    const size_t size = 4;
    int** pMatrix = new int* [size];
    for (size_t i = 0; i < size; i++)
    {
        pMatrix[i] = new int[size];
    }

    for (size_t i = 0; i < size; i++);
    {
        for (size_t k = 0; k < size; k++)
        {
            pMatrix[i][k] = rand() % 100;
        }
    }

    std::cout << std::endl;
    printMatrix(pMatrix, size, size);

    for (size_t i = 0, i < size, i++)
    {
        delete [] pMatrix[i];
    }

    delete[] pMatrix;

}


//--------------------------
//Task 3
//--------------------------

void writeFile(ofstream & out, const string & f1, const string & b1)
{
    out.open(f1);
    if (out.is_open())
    {
        out << b1;
        out.close();
    }
        
}



void task3_1()
{
    std::cout << "Enter name file 1: ";
    std::string f1;
    std::cin >> f1;
    
    ofstream flow1;
    const string  str1 = "fsdkdjdjfurjrjfjfjfjfjfsjseifjeofuieuisfnsiufsfhseujfhnsuinbvvnjoijgdijhgusiefhsejunciusefhjufjh";
    writeFile(flow1, f1, str1);
}


void writeFile1(ofstream& out1, const string& f2, const string& b2)
{
    out1.open(f2);
    if (out1.is_open())
    {
        out1 << b2;
        out1.close();
    }

}
void task3_2()
{
    std::cout << "Enter name file 2: ";
    std::string f2;
    std::cin >> f2;

    ofstream flow2;
    const string  str2 = "fsdkdjdjfurjrjfjfjfjfjfsjseifjeofuieuisfnsiufsfhseujfhnsuinbvvnjoijgdijhgusiefhsejunciusefhjufjh";
    writeFile1(flow2 , f2, str2);
}


//--------------------------
//Task 4
//--------------------------

void copyFile(ifstream& c, ofstream& fout)
{
    string str;

    while (!c.eof())
    {
        getline(c, str);
        fout << str << endl;
    }
}

void task4()
{
    cout << "Enter file name 1: ";
    string f1, f2, out;
    cin >> f1;
    cout << "Enter file name 2: ";
    cin >> f2;
    cout << "Enter merge file name: ";
    cin >> out;

    ifstream flow1(f1);
    ifstream flow2(f2);
    ofstream fout(out);

    if (flow1.is_open() && flow2.is_open() && fout.is_open())
    {
        copyFile(flow1, fout);
        flow1.close();

        copyFile(flow2, fout);
        flow2.close();

        flow2.close();
    }
}


//--------------------------
//Task 5
//--------------------------

bool task5file(string fname, string word)
{
    ifstream file(fname);

    if (file.is_open())
    {
        string line;
        while (!file.eof());
        {
            getline(file, line);
            if (line.find(word) != string::npos)
            {
                return true;
            }
        }
    }
    else
    {
        cout << "Error! Not open file: " + fname << endl;
    }
    return false;
}

void task5()
{
    string fname, checkW;

    cout << "Enter file name: ";
    cin >> fname;

    cout << "Enter search word: ";
    cin >> checkW;

    if (task5file(fname, checkW))
    {
        cout << "Word " + checkW + "found in the file " + fname;
    }
    else
    {
        cout << "Word " + checkW + "not found in the file " + fname;
    }
}






int main()
{
    task1();
    task2();
    task3_1();
    task3_2();
    task4();
    task5();
    return 0;
}


