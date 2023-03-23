#include "Files.h"
vector<string> get_files_list(string path)
{
    vector<string> result;
    for(auto & file: directory_iterator(path))
    {
        if(file.is_directory()==true)
        {
            cout<<file.path().string()<<" is not a file"<<endl;
            continue;
        }
        result.push_back(file.path().string());
    }
    return result;
}
string readfile(string filePath)
{
    FILE* file = fopen(filePath.c_str(),"r");
    if(!file)
    {
        cerr<<"couldn't open "<<filePath<<endl;
        return NULL;
    }
    char buffer[128];
    string result;
    while (fgets(buffer,128,file))
    {
        result+=buffer;
    }
    return result;
}
