#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void Read_File(vector<string>& file)
{
    ifstream in;
    in.open("laba2GIT.txt");
    string line;

    while (getline(in,line))
    {
        file.push_back(line);
    }
}

void Print_Vector(vector<string>& file)
{

}

void Write_vectorInFile(vector<string>& file)
{

}

int main()
{
    vector<string> file;

    Read_File(file);
    Print_Vector(file);
    Write_vectorInFile(file);

    return 0;
}
