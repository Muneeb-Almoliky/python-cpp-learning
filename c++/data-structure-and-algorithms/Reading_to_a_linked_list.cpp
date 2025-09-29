#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "List.h"
using namespace std;



int get_word_count(vector<List<string> > lines){
    int count = 0;
    for(int i=0;i<lines.size();i++){
        count = count + lines[i].size();
    }    
    return count;
}
int get_char_count(vector<List<string> > lines){
    int count = 0;
    for(int i=0;i<lines.size();i++){
        count = count + lines[i].chars_count();       
    }    
    return count;
}

void print_file(vector<List<string> > lines){
	 for(int i = 0;i<lines.size(); i++){
        lines[i].display();
    }
}
void print_line(vector<List<string> > lines){
	int num;
	cout<<"Enter the number of the line : ";
	cin>>num;
	if(num<=lines.size()&&num>0){
	lines[num-1].display();
	cout<<"The number of words in this line is : "<<lines[num-1].size()<<endl;
	cout<<"The number of characters in the file is : "<<lines[num-1].chars_count()<<endl;}
	else{
		cout<<"This is no such line with this number !"<<endl;
	}
}

int main(){

    vector<List<string> > myfile;
    
    ifstream file;
    file.open("file.txt");    
    string line;
    while(getline(file, line)){        
        istringstream L;
        string word;
        L.str(line);
        List<string> list;                
        while(L>>word){
            list.push_back(word);
        }
        myfile.push_back(list);
        
    }
	int choice;
	
	/*do{
		cout<<"1-To print the file.\n";
		cout<<"2-To print a specific line and get its information.\n";
		cout<<"3-To get the number of lines.\n";
		cout<<"4-To get the number of words in the file.\n";
		cout<<"5-To get the number of characters in the file.\n";		
		cout<<"0-To exit the program, press 0.\n";
		cout<<"Enter your choice : ";
		cin>>choice;
		system("cls");
		switch(choice){
			case 1:{
				print_file(myfile);
				break;
			}
		
			case 2:{
				print_line(myfile);
				
				break;
			}	
			case 3:{
				cout<<"The number of lines in the file is : "<<myfile.size()<<endl;
				break;
			}
				
				
			case 4:{
				cout<<"The number of words in the file is : "<<get_word_count(myfile)<<endl;
				break;
			}
				
			case 5:{
				cout<<"The number of characters in the file is : "<<get_char_count(myfile)<<endl;
				
				break;
			}
			case 0:{
				exit(0);				
				break;
			}
			default:
				cout<<"Invalid choice, please try again.\n";
		}
		cout<<"\n\n\n";				
		
	}while(choice!=0);*/
	cout<<"1-To print the file.\n";
	cout<<"2-To print a specific line and get its information.\n";
	cout<<"3-To get the number of lines.\n";
	cout<<"4-To get the number of words in the file.\n";
	cout<<"5-To get the number of characters in the file.\n";		
	cout<<"0-To exit the program, press 0.\n";
	cout<<"Enter your choice : ";
	cin>>choice;		 	
	while(choice!=0){
		
		//system("cls");
		switch(choice){
			case 1:{
				print_file(myfile);
				break;
			}
		
			case 2:{
				print_line(myfile);
				
				break;
			}	
			case 3:{
				cout<<"The number of lines in the file is : "<<myfile.size()<<endl;
				break;
			}
				
				
			case 4:{
				cout<<"The number of words in the file is : "<<get_word_count(myfile)<<endl;
				break;
			}
				
			case 5:{	
				cout<<"The number of characters in the file is : "<<get_char_count(myfile)<<endl;
				
				break;
			}
			case 0:{
				exit(0);			
				break;
			}
			default:
				cout<<"Invalid choice, please try again.\n";
		}
		cout<<"\n\n\n";
		cout<<"1-To print the file.\n";
		cout<<"2-To print a specific line and get its information.\n";
		cout<<"3-To get the number of lines.\n";
		cout<<"4-To get the number of words in the file.\n";
		cout<<"5-To get the number of characters in the file.\n";		
		cout<<"0-To exit the program, press 0.\n";
		cout<<"Enter your choice : ";
		cin>>choice;						
		
	}
   
}
