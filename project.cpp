#include <iostream>
#include <vector>
#include <string>
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
};

static int count_id = 1;

class Stu {
private:
    int id;
    vector<Student> student_list;

public:
    void Admisn() {
        // Admission Management (currently not implemented)
    }
};

void finish() {
    cout << "Thank you." << endl;
}

void moreinform() {
    Student e;
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

        if (e.placorhighstdy == "Placements") {
            cout << "You have chosen to go with Placements.\n";
        } else if (e.placorhighstdy == "higherStudies") {
            cout << "You have chosen to go with Higher Studies.\n";
        } else {
            cout << "Invalid choice for Placements or Higher Studies.\n";
        }

        cout << "\nWhat is your Preference (Hostler / Day scholar): ";
        getline(cin, e.hosorday);

        if (e.hosorday == "Hostler") {
            cout << "You have chosen to be a Hostler.\n";
        } else if (e.hosorday == "Day scholar") {
            cout << "You have chosen to be a Day scholar.\n";
        } else {
            cout << "Invalid choice for Hostler or Day scholar.\n";
        }

        finish();
    } else {
        finish();
    }
}

void select_branch() {
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
            cout << "You selected CSE branch.\n";
            break;
        case 2:
            cout << "You selected ECE branch.\n";
            break;
        case 3:
            cout << "You selected EEE branch.\n";
            break;
        case 4:
            cout << "You selected Civil Engineering branch.\n";
            break;
        case 5:
            cout << "You selected Mechanical Engineering branch.\n";
            break;
        default:
            cout << "Invalid choice. Please select a valid branch.\n";
            select_branch();  // Re-prompt in case of invalid input
            return;
    }
    moreinform();  // Continue with more information after branch selection
}

void fees() {
    int interest;
    cout << "\nCOURSES";
    cout << "\n1. B.SC\n2. B.E\n3. B.Tech\n4. B.A\n5. BBA\n6. B.Com";
    cout << "\nSelect the course you are interested in: ";
    cin >> interest;
    cin.ignore();

    switch (interest) {
        case 1:
            cout << "\nB.SC Course is for 3 years";
            cout << "\nB.SC Course Fees For Annum: Rs.2.65L\n";
            break;
        case 2:
            cout << "\nB.E Course is for 4 years";
            cout << "\nB.E Course Fees For Annum: Rs.3.65L\n";
            break;
        case 3:
            cout << "\nB.Tech Course is for 4 years";
            cout << "\nB.Tech Course Fees For Annum: Rs.3.65L\n";
            break;
        case 4:
            cout << "\nB.A Course is for 3 years";
            cout << "\nB.A Course Fees For Annum: Rs.2.65L\n";
            break;
        case 5:
            cout << "\nBBA Course is for 3 years";
            cout << "\nBBA Course Fees For Annum: Rs.4.65L\n";
            break;
        case 6:
            cout << "\nB.Com Course is for 3 years";
            cout << "\nB.Com Course Fees For Annum: Rs.4.65L\n";
            break;
        default:
            cout << "We can't find any course.";
            fees();  // Re-prompt for valid course selection
            return;
    }

    select_branch();  // Ask user to select the branch after course selection
}

void prs_infrmsn() {
    Student e;
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
    getchar();  // Clear newline

    fees();  // Proceed to fees and branch selection
}

void tenmarks() {
    int th10ovral, th12ovral, th10percentage, th12percentage;
    
    // Get 10th Marks
    cout << "\n\nENTER THE MARKS OBTAINED IN 10th!\n";
    cout << "Enter the Overall Marks (Total): ";
    cin >> th10ovral;

    if (th10ovral > 100) {
        cout << "Enter your 10th Percentage: ";
        cin >> th10percentage;
        if (th10percentage <= 30) {
            cout << "\nEntered wrong percentage marks for 10th.";
            tenmarks();  // Re-prompt for valid 10th marks input
            return;
        }
    } else {
        cout << "\nEntered wrong overall marks for 10th.";
        tenmarks();  // Re-prompt for valid 10th marks input
        return;
    }

    // Get 12th Marks
    cout << "\n\nENTER THE MARKS OBTAINED IN 12th!\n";
    cout << "Enter the Overall Marks (Total): ";
    cin >> th12ovral;

    if (th12ovral > 100) {
        cout << "Enter your 12th Percentage: ";
        cin >> th12percentage;
        if (th12percentage <= 30) {
            cout << "\nEntered wrong percentage marks for 12th.";
            tenmarks();  // Re-prompt for valid 12th marks input
            return;
        }
    } else {
        cout << "\nEntered wrong overall marks for 12th.";
        tenmarks();  // Re-prompt for valid 12th marks input
        return;
    }

    prs_infrmsn();  // Proceed to personal information input
}

int main() {
    char infrmatn;
    cout << "Welcome to the Student Admission System\n";
    cout << "_______________________________";
    cout << "\nDo you want to enter marks (y/n): ";
    cin >> infrmatn;

    if (infrmatn == 'y') {
        tenmarks();
    } else {
        prs_infrmsn();  // Skip marks entry and go to personal information
    }

    return 0;
}
