#include "Tester.h"
#include "Files.h"
string execute(string command)
{
    string result;
    FILE* pipe = popen(command.c_str(),"r");
    if(!pipe)
    {
        cerr<<"failed to execute the command... closing the program."<<endl;
        exit(1);
    }
    char buffer[128];
    while (fgets(buffer,128,pipe))
    {
        result+=buffer;
    }
    return result;
}
bool run_test(string appName, string testPath)
{
    string command =appName+"<"+testPath;
    string givenOutput = execute(command);
    string outputPath = testPath.replace(testPath.find("In"),2,"Out");
    string wantedOutput = readfile(outputPath);
    return wantedOutput==givenOutput;
}
vector<bool> run_all_tests(string appName,string path)
{
    vector<string> testPaths = get_files_list(path+"/In");
    vector<bool> result;
    for (int i = 0; i < testPaths.size(); i++)
    {
        result.push_back(run_test(appName,testPaths[i]));
    }
    return result;
}
