#include <iostream>
#include <fstream>
#include <filesystem>
using namespace std;

int main(int argc, char** argv)
{
    if(argc > 2)
    {
        return 1;
    }
    ifstream file;
    
    file.open(argv[1]);
    if(!file)
    {
        return 1;
    }

    filesystem::path filepath = argv[1];
    cout << "File extension is: " << filepath.extension() << endl;


    return 0;
}