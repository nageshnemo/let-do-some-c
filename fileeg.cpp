//whats going on guys an in todays video tutorial we are gonna going to look into a file handling mechanism in c++ programming.
 //whats are files and streams
 //...files are used to store data permanently
 //...stream is an abstraction that represents a device on ehich input and output operations are performed
 //..straem can basically be represented as source or destinaton of characters of infefinite length

// in whole this is file write operationn..........................................................................

 #include<iostream>
 using namespace std;
#include<fstream>  //in this class ifstream and ofstream header files are present
 int main()
{

char arr[100];

cout<<"enter name and age";  //instead of cin we use cin.getline because cin ignores the space and after pressing the space cin ignores the data so we use cin.getline();
cin.getline(arr,100);               //we want to take entire line as input there is function to take entire input and stored in \it an array

                                    //now we have to create a file and store in it line
ofstream myfile("xyz.txt",ios::app);//append mode that saves previous data         // ofstream function by default opens the file user defined data type known as ofstream acting as a data type

//myfile is a name of variable of data type ofstream.
//we are opening a file whose extension is text file and variable type is ofstream



// we have to open a file
//myfile.open("xyz.txt");   //this is a open function and we need to pass file name as a parameter in  h\this function
myfile<<arr;
myfile.close();
cout<<"file write operation performed succesfully"<<endl<<endl;


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



cout<<"reading from file operation was started"<<endl;
char arr1[100];

ifstream obj("xyz.txt");  //obj is variaBle of datatype ifstream and we use this for writing
obj.getline(arr1,100);
cout<< "array content"<<arr1<<endl;
       //ifstream is used for doing file write operation
cout<<"file read operation was completed";
return 0;

}






