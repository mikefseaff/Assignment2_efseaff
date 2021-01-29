#include <iostream>

using namespace std;

int main (int argc, char **argv){
    // a dynamically allocated array based on the inputs of the command line
	int* array = new int[argc];
    //initializes all array values to 0
    for (int i = 0; i < argc; ++i){
        array[i] = 0;
        
    }
    //checks to make sure there arent more than 10 inputs 
    if (argc > 11){
        cout << "Too many inputs" << endl;
        return -1;
    }
    //checks to make sure there are inputs from the command line
    if(argc == 1){
        cout << "No inputs please try again." << endl;
        return -1;
    }
    //assigns and prints out the array values given from the command line
    for (int i = 0; i < argc-1; ++i){
        
        array[i] = atoi(argv[i+1]);
        //cout << i << endl;
        cout << array[i] << endl;
    }


    delete []array;
	return 0;
}