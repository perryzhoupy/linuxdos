#include<iostream>
#include<string>
#include<fstream>
using namespace std;
#define build 13
#define ver "0.9.2 Beta 2.1"
int main(){
    cout<<"MS-DOS Emulator\n    By @Cmd_MEMZ in www.bilibili.com\nThis software is on GPL V3.0.\nVersion "<<ver<<",Build "<<build<<"\n";
    string command;
    while(1){
        cout<<"C:\\>";
        cin>>command;
        if(command=="dir")
        {
            system("ls");
        }
        else if(command=="command"||command=="command.com"){
            system("bash");
        }
        else if(command=="exec"||command=="run"||command=="exe"){
            string exename;
    getchar();
            getline(cin,exename);
            exename.insert(0,"\"./");
            exename.append("\"");
            system(exename.c_str());
        }else if(command=="exit"){
            exit(0);
        }else if(command=="bash"){
            system("bash");
        }
        else if(command=="help"){
            ifstream helpfile("helpfile.lst");
            string tmpstr0;
            while(getline(helpfile,tmpstr0)){
                cout<<tmpstr0;
            }
            helpfile.close();
        }
        else if(command=="cls"){
            system("clear");
        }
        else if(command=="switch"){
            string username,cmd;
            getline(cin,username);
            cmd="su ";
            cmd.append(username);
            system(cmd.c_str());
        }
        else if(command=="root"){
            system("su root");
        }
        else if(command=="del"){
            string filename;
            getline(cin,filename);
            string cmd="rm -rf ";
            cmd.append(filename);
            system(cmd.c_str());
           }
        else{
            cout<<"Bad command or file name\n";
        }
    }
    return 0;
}
