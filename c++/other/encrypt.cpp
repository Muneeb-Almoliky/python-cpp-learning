#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
using namespace std;

void encrypt_file(ifstream& in, ofstream& out, k){

    char ch;
    while(in.get(ch)){
        out.put(ch+k);
    }
}
int main(int argc, char* argv[]){
    ifstream infile;
    ofstream outfile;
    int countfile = 0;
    int key = 3;

    for(int i=0; i<argc; i++){
        arg = argv[i];

        if(arg == "-d"){
            key = -3;
        }
        else{
            if(countfile==1){
                infile.open(arg);
            }
            else if(countfile==2){
                outfile.open(arg);
            }
        }

    }

    encrypt_file(infile, outfile, key);

    return 0;
}