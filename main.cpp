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
    for(auto it=file.begin(); it!=file.end(); it++)
        {
            string x = *it;
            cout << x << endl;
        }
}

void Write_vectorInFile(vector<string>& file)
{
    ofstream outfile;
    outfile.open("write_vectorInFile.txt");
    if (outfile.is_open())
    {
        for (int i = 0; i < file.size(); i++)
        {
            outfile << file[i] << endl;
        }
    }
}

int main()
{
    vector<string> file;

    Read_File(file);
    Print_Vector(file);
    Write_vectorInFile(file);

    return 0;
}
