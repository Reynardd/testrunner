#include "Files.h"

vector<string> get_files_list(string path) {
    vector<string> filenames;

    DIR* dir;
    struct dirent* entry;

    dir = opendir(path.c_str());

    if (dir == NULL) {
        cerr << "Error opening directory" << endl;
        return filenames;
    }

    while ((entry = readdir(dir)) != NULL) {
        struct stat st;
        string full_path = path + "/" + entry->d_name;

        if (stat(full_path.c_str(), &st) == 0 && S_ISREG(st.st_mode)) {
            filenames.push_back(full_path);
        }
    }
    closedir(dir);
    return filenames;
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
