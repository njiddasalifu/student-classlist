#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;




// student class
class Student {
public:
    char First_name[30];
    char Last_name[30];
    char stud_id[9];
};


// classe class
class classe {
    public:
        // adding student in the class
        void addstudent(Student students[], int& num_stud) {
            cout << "Add a new student!!" <<endl;
            if(num_stud >= 100){
                cout << "The maximum amount of students was reached" <<endl;
                return;
            }

            // creating a student object
            Student newstudent;

            cout << "Enter student First name" <<endl;
            cin >> newstudent.First_name;

            cout << "Enter student Last name" <<endl;
            cin >> newstudent.Last_name;

            cout << "Enter student matriclue" <<endl;
            cin >> newstudent.stud_id;

            // adding the student to the array
            students[num_stud] = newstudent;
            num_stud++;
            cout << "Student Added successfully" <<endl;

        }

        // function to print out class list
        void printlist(Student students[], int& num_stud) {
            cout << "Here is the Class List" <<endl;
            for(int i = 0; i < num_stud; i++) {
                cout << "Student " << i+1 << ":" << endl;
                cout << "Name: " << students[i].First_name << " " <<  students[i].Last_name<<endl;
                cout << "ID: " << students[i].stud_id << endl;
                cout << endl;
            }
        }
            // searching by IDS
       void searchStudent(Student students[], int num_stud, char stud_id[]) {
            if(num_stud == 0) {
                 cout << "No students in the database." <<endl;

            }
            cout << "Search by ID: ";
            cin >> stud_id; // read input into stud_id
            bool found = false;
            for(int i = 0; i < num_stud; i++) {
                if(strcmp(students[i].stud_id, stud_id) == 0) {
                    cout << "Student found!" << endl;
                    cout << "Name: " << students[i].First_name << " " <<  students[i].Last_name<<endl;
                    cout << "ID: " << students[i].stud_id << endl;
                    found = true;
                    break; // exit the loop once a match is found
                }
            }
            if(!found) {
                cout << "Student not found.Check your spelling and try again." << endl;
            }
        }

    // searching by First name
        void searchByStudentFirst_name(Student students[], int num_stud, char First_name[]){
             if(num_stud == 0) {
                 cout << "No students in the database." <<endl;

            }
            cout << "Search by First Name:";
            cin >> First_name;
            bool found = false;
            for(int i=0; i<num_stud; i++){
                if(strcmp(students[i].First_name, First_name) == 0){
                    cout << "Student Found!!" <<endl;
                    cout << "Name: " << students[i].First_name << " " <<  students[i].Last_name<<endl;
                    cout << "ID: " << students[i].stud_id << endl;
                    found = true;
                    break;
                }
            }
            if(!found){
                cout << "Student not Found. Check your spelling and try again.";
            }
        }

     // searching by Last name
        void searchByStudentLast_name(Student students[], int num_stud, char Last_name[]){
             if(num_stud == 0) {
                 cout << "No students in the database." <<endl;
            }
            cout << "Search by First Name:";
            cin >> Last_name;
            bool found = false;
            for(int i=0; i<num_stud; i++){
                if(strcmp(students[i].Last_name, Last_name) == 0){
                    cout << "Student Found!!" <<endl;
                    cout << "Name: " << students[i].First_name << " " <<  students[i].Last_name<<endl;
                    cout << "ID: " << students[i].stud_id << endl;
                    found = true;
                    break;
                }
            }
            if(!found){
                cout << "Student not Found. Check your spelling and try again.";
            }
        }


};

// main program
int main() {
    Student students[100];
    char stud_id[9];
    char First_name[30];
    char Last_name[30];
    classe methods;
    int choice;
    int num_stud = 0;
    cout << "Welcome to ClassManagement\n";
    cout << "=============================" <<endl;
    printf("1.Add student\n\n2.Print Class List\n\n3.Search By ID\n\n4.Search By First Name\n\n5.Search By Last Name\n\n");
    options:
    cout << "Enter your choice" <<endl;
    cin >> choice;
    switch(choice){
    case 1:
        methods.addstudent(students, num_stud);
        break;
    case 2:
        methods.printlist(students, num_stud);
        break;
    case 3:
        methods.searchStudent(students, num_stud, stud_id);
        break;
    case 4:
        methods.searchByStudentFirst_name(students, num_stud, First_name);
        break;
    case 5:
        methods.searchByStudentLast_name(students, num_stud, Last_name);
        break;

    default: cout << "Wrong option choose again" <<endl;
    }
    goto options;

    return 0;

}
