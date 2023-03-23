#include "Tester.h"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define GRAY "\033[37m"
void show_help();
int main(int argc , char* argv[])
{
    if(argc<2)
    {
        cerr<<"Too Few Arguments... Use testrunner -h or testrunner --help for help"<<endl;
        return 1;
    }
    if(string(argv[1])=="-h" || string(argv[1])=="--help")
    {
        show_help();
        return 0;
    }
    string PATH = "./Tests";
    string NAME = argv[1];
    if(argc==3) PATH = argv[2];
    vector<bool> tests=run_all_tests(NAME,PATH);
    int succesful = 0;
    int total = tests.size();
    for (int i = 0; i < total; i++)
    {
        if(tests[i])
        {
            succesful++;
            cout<<GREEN;
            cout<<"[Test Passed]"<<endl;
        }
        else
        {
            cout<<RED;
            cout<<"[Test Failed]"<<endl;
        }
    }
    cout<<GRAY;
    int failed = total - succesful;
    float ratio = succesful/float(total)*100;
    printf("Total: %d, %sPassed: %d, %sFailed: %d, %sRatio: %0.2f%\n",total,GREEN ,succesful ,RED ,failed ,GRAY ,ratio );
}
void show_help()
{
    string help =\
"there are two ways you can use the testrunner\n\n\
1- coderunner <executable name>\n\
    following direcotoris must exits in your working directory:\n\
    Tests/In\n\
    Tests/Out\n\
    place your inputs in Tests/In and your expected output in Tests/Out\n\n\
2- coderunner <executable name> <path to tests>\n\
    same as the first method but Place \"In\" and \"Out\" Direcotries inside\n\
    the path you entered\n";
    cout<<help;
}
