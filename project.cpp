#include <iostream>
#include <vector>
#include <string>
#include <fstream>  // For file handling
using namespace std;

class Student {
public:
    string req1;
    char req2;
    int req3;
    string placorhighstdy;
    string hosorday;
    string fulnm, midnm, astnm, ctyorvilg, nation;
    string fatnm, motnm, sclnm, clgnm, email, fatacupsn;
    string phnnum, pncod, dtfbrt, adhar, momincm;
    string verfdrnm, vefmtynm, vermal, fatincm, momacupsn;
    string verpncd, verctcnm, veradhar, bldgup;
    int th10ovral, th12ovral, th10percentage, th12percentage;
    string selected_course, selected_branch;  // To store selected course and branch
};

void finish() {
    cout << "Thank you." << endl;
}

void storeToFile(Student& e) {
    ofstream file;
    file.open("student_info.txt", ios::app);  // Open file in append mode

    if (file.is_open()) {
        // Write student details to the file
        file << "First Name: " << e.fulnm << "\n";
        file << "Middle Name: " << e.midnm << "\n";
        file << "Last Name: " << e.astnm << "\n";
        file << "Blood Group: " << e.bldgup << "\n";
        file << "Father's Name: " << e.fatnm << "\n";
        file << "Father's Occupation: " << e.fatacupsn << "\n";
        file << "Father's Income: " << e.fatincm << "\n";
        file << "Mother's Name: " << e.motnm << "\n";
        file << "Mother's Occupation: " << e.momacupsn << "\n";
        file << "Mother's Income: " << e.momincm << "\n";
        file << "School Name: " << e.sclnm << "\n";
        file << "College Name: " << e.clgnm << "\n";
        file << "Email: " << e.email << "\n";
        file << "Nationality: " << e.nation << "\n";
        file << "City/Village: " << e.ctyorvilg << "\n";
        file << "Pin Code: " << e.pncod << "\n";
        file << "Aadhaar Number: " << e.adhar << "\n";
        file << "Contact Number: " << e.phnnum << "\n";
        file << "Marks in 10th: " << e.th10ovral << " (Percentage: " << e.th10percentage << "%)\n";
        file << "Marks in 12th: " << e.th12ovral << " (Percentage: " << e.th12percentage << "%)\n";
        file << "Selected Course: " << e.selected_course << "\n";
        file << "Selected Branch: " << e.selected_branch << "\n";

        // Write additional information
        if (!e.req1.empty()) {
            file << "Dream: " << e.req1 << "\n";
        }
        if (e.req2 == 'y') {
            file << "Number of Programming Languages Known: " << e.req3 << "\n";
        }
        file << "Placement or Higher Studies Preference: " << e.placorhighstdy << "\n";
        file << "Hostel or Day Scholar: " << e.hosorday << "\n";

        file << "\n---------------------------------\n\n";  // Divider between records
        file.close();  // Close the file after writing

        cout << "Student information successfully saved in student_info.txt.\n";  // Success message
    } else {
        cout << "Unable to open file to store data." << endl;
    }
}

void moreinform(Student& e) {
    char morinfm;
    cout << "\nDo you like to give more information about yourself (y/n): ";
    cin >> morinfm;
    cin.ignore();  // To ignore newline character after 'cin'

    if (morinfm == 'y') {
        cout << "What is your dream: ";
        getline(cin, e.req1);

        cout << "Have you learned any programming languages (y/n): ";
        cin >> e.req2;
        cin.ignore();

        if (e.req2 == 'y') {
            cout << "How many languages do you know: ";
            cin >> e.req3;
            cin.ignore();
        }

        cout << "\nDo you like to go with (Placements / higherStudies): ";
        getline(cin, e.placorhighstdy);

        cout << "\nWhat is your Preference (Hostler / Day scholar): ";
        getline(cin, e.hosorday);
    }
    storeToFile(e);  // Store the data in the file after collecting additional info
    finish();
}

void select_branch(Student& e) {
    int branch_choice;
    cout << "\nBRANCHES:\n";
    cout << "1. Computer Science and Engineering (CSE)\n";
    cout << "2. Electronics and Communication Engineering (ECE)\n";
    cout << "3. Electrical and Electronics Engineering (EEE)\n";
    cout << "4. Civil Engineering\n";
    cout << "5. Mechanical Engineering\n";
    cout << "Select your branch: ";
    cin >> branch_choice;
    cin.ignore();

    switch (branch_choice) {
        case 1:
            e.selected_branch = "Computer Science and Engineering (CSE)";
            break;
        case 2:
            e.selected_branch = "Electronics and Communication Engineering (ECE)";
            break;
        case 3:
            e.selected_branch = "Electrical and Electronics Engineering (EEE)";
            break;
        case 4:
            e.selected_branch = "Civil Engineering";
            break;
        case 5:
            e.selected_branch = "Mechanical Engineering";
            break;
        default:
            cout << "Invalid choice. Please select a valid branch.\n";
            select_branch(e);  // Re-prompt in case of invalid input
            return;
    }
    moreinform(e);  // Continue with more information after branch selection
}

void fees(Student& e) {
    int interest;
    cout << "\nCOURSES";
    cout << "\n1. B.SC\n2. B.E\n3. B.Tech\n4. B.A\n5. BBA\n6. B.Com";
    cout << "\nSelect the course you are interested in: ";
    cin >> interest;
    cin.ignore();

    switch (interest) {
        case 1:
            e.selected_course = "B.SC (3 years, Rs.2.65L per annum)";
            break;
        case 2:
            e.selected_course = "B.E (4 years, Rs.3.65L per annum)";
            break;
        case 3:
            e.selected_course = "B.Tech (4 years, Rs.3.65L per annum)";
            break;
        case 4:
            e.selected_course = "B.A (3 years, Rs.2.65L per annum)";
            break;
        case 5:
            e.selected_course = "BBA (3 years, Rs.4.65L per annum)";
            break;
        case 6:
            e.selected_course = "B.Com (3 years, Rs.4.65L per annum)";
            break;
        default:
            cout << "Invalid course selection.\n";
            fees(e);  // Re-prompt for valid course selection
            return;
    }

    select_branch(e);  // Ask user to select the branch after course selection
}

void prs_infrmsn(Student& e) {
    cout << "\n\nENTER YOUR DETAILS";
    cout << "\nPut 'NULL' if you don't know any information.";
    cout << "\n________________";

    cout << "\nEnter Your First Name: ";
    cin >> e.fulnm;
    cout << "Enter your Middle Name: ";
    cin >> e.midnm;
    cout << "Enter your Last Name: ";
    cin >> e.astnm;
    cout << "Enter your Blood Group: ";
    cin >> e.bldgup;
    cout << "Enter your Father's Name: ";
    cin >> e.fatnm;
    cout << "Enter your Father's Occupation: ";
    cin >> e.fatacupsn;
    cout << "Enter your Father's Income: ";
    cin >> e.fatincm;
    cout << "Enter your Mother's Name: ";
    cin >> e.motnm;
    cout << "Enter your Mother's Occupation: ";
    cin >> e.momacupsn;
    cout << "Enter your Mother's Income: ";
    cin >> e.momincm;
    cout << "Enter your School Name: ";
    cin >> e.sclnm;
    cout << "Enter your College Name: ";
    cin >> e.clgnm;
    cout << "Enter your Email Address: ";
    cin >> e.email;
    cout << "Enter your Nationality: ";
    cin >> e.nation;
    cout << "Enter your City/Village: ";
    cin >> e.ctyorvilg;
    cout << "Enter your Pin Code: ";
    cin >> e.pncod;
    cout << "Enter your Aadhaar Number: ";
    cin >> e.adhar;
    cout << "Enter your Contact Number: ";
    cin >> e.phnnum;

    fees(e);  // Proceed to course and fee details
}

void tenmarks(Student& e) {
    cout << "ENTER YOUR 10th MARKS\n";
    cout << "The marks obtained in overall out of 600: ";
    cin >> e.th10ovral;

    if (e.th10ovral >= 210) {
        e.th10percentage = (e.th10ovral * 100) / 600;
        cout << "Your percentage in 10th: " << e.th10percentage << "%\n";
    } else {
        cout << "You need to score above 210 marks for admission.\n";
        tenmarks(e);  // Re-prompt if marks are invalid
        return;
    }

    cout << "\nENTER YOUR 12th MARKS\n";
    cout << "The marks obtained in overall out of 1000: ";
    cin >> e.th12ovral;

    if (e.th12ovral >= 220) {
        e.th12percentage = (e.th12ovral * 100) / 1000;
        cout << "Your percentage in 12th: " << e.th12percentage << "%\n";
        prs_infrmsn(e);  // Proceed to personal information after valid marks
    } else {
        cout << "You need to score above 220 marks for admission.\n";
        tenmarks(e);  // Re-prompt if marks are invalid
    }
}

int main() {
    Student e;
    tenmarks(e);  // Start the program by asking for 10th and 12th marks
    return 0;
}
