#include <iostream>
#include <vector>
#include <fstream> // For file handling
using namespace std;

class Student {
public:
    char morinfm;
    string req1;
    char req2;
    int req3;
    string placorhighstdy;
    string hosorday;
    string fulnm, midnm, astnm, ctyorvilg, nation, conform;
    string fatnm, motnm, sclnm, clgnm, email, seen, fatacupsn;
    string phnnum[100], pncod[100], dtfbrt, adhar[100], y, momincm;
    string vernm, verfdrnm, vefmtynm, vermal, det, fatincm, momacupsn;
    string verpncd, verctcnm, veradhar, thmaks3;
    string perininter, bldgup;
};

class Stu {
private:
    int id;
    vector<Student> student_list;

public:
    void Admisn() {
        // Admission Management
    }
};

void finish() {
    cout<< "YOUR DETAILS ARE SUCCESSFULLY SAVED WITH US";
    cout << "THANK YOU";
}

void storeToFile(const string& data) {
    ofstream file("student_details1.txt", ios::app);
    if (file.is_open()) {
        file << data << endl;
        file.close();
    } else {
        cout << "Unable to open file.";
    }
}

void moreinform() {
    Student e;
    char morinfm;
    system("cls");
    cout << "\nDo you like to give more information about yourself(y/n): ";
    cin >> morinfm;
    storeToFile("More info: " + string(1, morinfm)); // Store input

    if (morinfm == 'y') {
        cout << "What is your dream: ";
        cin >> e.req1;
        storeToFile("Dream: " + e.req1); // Store input

        cout << "Have you learned any programming languages(y/n): ";
        cin >> e.req2;
        storeToFile("Knows programming: " + string(1, e.req2)); // Store input

        if (e.req2 == 'y') {
            cout << "How many languages do you know: ";
            cin >> e.req3;
            storeToFile("Number of languages: " + to_string(e.req3)); // Store input

            cout << "\nDo you like to go with (Placements / higherStudyes): ";
            cin >> e.placorhighstdy;
            storeToFile("Placements or Higher Studies: " + e.placorhighstdy); // Store input

            cout << "\nWhat is your preference (Hostler / Dayscholar): ";
            cin >> e.hosorday;
            storeToFile("Hostler or Dayscholar: " + e.hosorday); // Store input

            finish();
        } else {
            cout << "Don't worry, We Try to help you.";
            cout << "\nDo you like to go with (Placements / higherStudyes): ";
            cin >> e.placorhighstdy;
            storeToFile("Placements or Higher Studies: " + e.placorhighstdy); // Store input

            cout << "\nWhat is your preference (Hostler / Dayscholar): ";
            cin >> e.hosorday;
            storeToFile("Hostler or Dayscholar: " + e.hosorday); // Store input

            finish();
        }
    } else {
        finish();
    }
}

void fees() {
    int interest;
    string bnch, spilijsn;
    system("cls");
    cout << "\nCOURSES";
    cout << "\n1. B.Sc\n2. B.E/B.Tech\n3. B.A\n4. BBA\n5. B.Com";
    cout << "\nSelect the course which you are interested in: ";
    cin >> interest;
    storeToFile("Selected Course: " + to_string(interest)); // Store selected course

    switch (interest) {
        case 1:
            cout << "\nB.Sc Course is for 3 years";
            cout << "\nB.Sc Course Fees Per Annum: Rs.2.65L\n";
            cout << "\nAvailable Branches: \n1. Physics\n2. Chemistry\n3. Mathematics\n4. Computer Science\n5. Biology";
            cout << "\nEnter the branch of your course: ";
            cin >> bnch;
            storeToFile("Branch: " + bnch); // Store selected branch

            cout << "\nAvailable Specializations: \n1. Astrophysics\n2. Biochemistry\n3. Data Science\n4. Biotechnology\n5. Nanotechnology";
            cout << "\nEnter the specialization you want to pursue: ";
            cin >> spilijsn;
            storeToFile("Specialization: " + spilijsn); // Store selected specialization

            moreinform();
            break;

        case 2:
            cout << "\nB.E/B.Tech Course is for 4 years";
            cout << "\nB.E/B.Tech Course Fees Per Annum: Rs.3.65L\n";
            cout << "\nAvailable Branches: \n1. Civil Engineering\n2. Mechanical Engineering\n3. Electrical Engineering\n4. Computer Science Engineering\n5. Electronics and Communication Engineering\n6. Information Technology\n7. Chemical Engineering\n8. Aeronautical Engineering";
            cout << "\nEnter the branch of your course: ";
            cin >> bnch;
            storeToFile("Branch: " + bnch); // Store selected branch

            cout << "\nAvailable Specializations: \n1. Structural Engineering\n2. Robotics\n3. Embedded Systems\n4. Power Systems\n5. Machine Learning\n6. Artificial Intelligence\n7. Cybersecurity\n8. Renewable Energy";
            cout << "\nEnter the specialization you want to pursue: ";
            cin >> spilijsn;
            storeToFile("Specialization: " + spilijsn); // Store selected specialization

            moreinform();
            break;

        case 3:
            cout << "\nB.A Course is for 3 years";
            cout << "\nB.A Course Fees Per Annum: Rs.2.65L\n";
            cout << "\nAvailable Branches: \n1. History\n2. Sociology\n3. Psychology\n4. English Literature\n5. Political Science";
            cout << "\nEnter the branch of your course: ";
            cin >> bnch;
            storeToFile("Branch: " + bnch); // Store selected branch

            cout << "\nAvailable Specializations: \n1. International Relations\n2. Organizational Psychology\n3. Linguistics\n4. Public Policy\n5. Cultural Studies";
            cout << "\nEnter the specialization you want to pursue: ";
            cin >> spilijsn;
            storeToFile("Specialization: " + spilijsn); // Store selected specialization

            moreinform();
            break;

        case 4:
            cout << "\nBBA Course is for 3 years";
            cout << "\nBBA Course Fees Per Annum: Rs.4.65L\n";
            cout << "\nAvailable Branches: \n1. Finance\n2. Marketing\n3. Human Resources\n4. International Business\n5. Operations Management";
            cout << "\nEnter the branch of your course: ";
            cin >> bnch;
            storeToFile("Branch: " + bnch); // Store selected branch

            cout << "\nAvailable Specializations: \n1. Digital Marketing\n2. Supply Chain Management\n3. Financial Analytics\n4. Entrepreneurship\n5. Business Analytics";
            cout << "\nEnter the specialization you want to pursue: ";
            cin >> spilijsn;
            storeToFile("Specialization: " + spilijsn); // Store selected specialization

            moreinform();
            break;

        case 5:
            cout << "\nB.Com Course is for 3 years";
            cout << "\nB.Com Course Fees Per Annum: Rs.4.65L\n";
            cout << "\nAvailable Branches: \n1. Accounting\n2. Economics\n3. Taxation\n4. Banking and Insurance\n5. Business Law";
            cout << "\nEnter the branch of your course: ";
            cin >> bnch;
            storeToFile("Branch: " + bnch); // Store selected branch

            cout << "\nAvailable Specializations: \n1. Auditing\n2. Investment Banking\n3. Financial Accounting\n4. International Trade\n5. Corporate Law";
            cout << "\nEnter the specialization you want to pursue: ";
            cin >> spilijsn;
            storeToFile("Specialization: " + spilijsn); // Store selected specialization

            moreinform();
            break;

        default:
            cout << "We can't find any Course";
            system("cls");
            fees(); // Restart the function for invalid input
    }
}


void prs_infrmsn() {
    Student e;    
    cout << "\n\nENTER YOUR DETAILS";
    system("cls");
    
    cout << "\nNOTE: Please give your details properly";
    getchar();
    cout << "\nPut 'NULL' if you don't know anything in these.";
    getchar();
    
    cout << "________________" << endl;
    cout << "\nEnter Your SurName          : ";
    cin >> e.fulnm;
    storeToFile("Surname: " + e.fulnm); // Store input

    cout << "Enter your First name        : ";
    cin >> e.midnm;
    storeToFile("First Name: " + e.midnm); // Store input

    cout << "Enter your Last name         : ";
    cin >> e.astnm;
    storeToFile("Last Name: " + e.astnm); // Store input

    cout << "Enter your Blood Group       : ";
    cin >> e.bldgup;
    storeToFile("Blood Group: " + e.bldgup); // Store input

    cout << "Enter your Father's name      : ";
    cin >> e.fatnm;
    storeToFile("Father's Name: " + e.fatnm); // Store input

    cout << "Enter your Father's occupation: ";
    cin >> e.fatacupsn;
    storeToFile("Father's Occupation: " + e.fatacupsn); // Store input

    cout << "Enter your Father's income    : ";
    cin >> e.fatincm;
    storeToFile("Father's Income: " + (e.fatincm)); // Store input

    cout << "Enter your Mother's name      : ";
    cin >> e.motnm;
    storeToFile("Mother's Name: " + e.motnm); // Store input

    cout << "Enter your Mother's occupation: ";
    cin >> e.momacupsn;
    storeToFile("Mother's Occupation: " + e.momacupsn); // Store input

    cout << "Enter your Mother's income    : ";
    cin >> e.momincm;
    storeToFile("Mother's Income: " + (e.momincm)); // Store input

    cout << "Enter your School name       : ";
    cin >> e.sclnm;
    storeToFile("School Name: " + e.sclnm); // Store input

    cout << "Enter your College name      : ";
    cin >> e.clgnm;
    storeToFile("College Name: " + e.clgnm); // Store input

    cout << "Enter your Email address     : ";
    cin >> e.email;
    storeToFile("Email Address: " + e.email); // Store input

    cout << "Enter your Nationality       : ";
    cin >> e.nation;
    storeToFile("Nationality: " + e.nation); // Store input

    cout << "Enter your City/Village      : ";
    cin >> e.ctyorvilg;
    storeToFile("City/Village: " + e.ctyorvilg); // Store input

    cout << "Enter your Pin Code          : ";
    cin >> e.pncod[100];
    storeToFile("Pin Code: " + e.pncod[100]); // Store input

    cout << "Enter your Aadhaar Number    : ";
    cin >> e.adhar[100];
    storeToFile("Aadhaar Number: " + e.adhar[100]); // Store input

    cout << "Enter your Contact Number     : ";
    cin >> e.phnnum[100];
    storeToFile("Contact Number: " + e.phnnum[100]); // Store input

    cout << "________________" << endl;
    getchar();

    system("cls");
		cout<<"\nSUBMISSION OF TC";
		getchar();
    	cout <<"\nNOTE:Please Bring the following certificates to the collage to complete your verifiaction process!";
    	cout<<"\n\nTransfer Certificate from the previous institution( Original)";
    	cout<<"\nConduct certificate (Orginal)";
    	cout<<"\nMigration certificate (Orginal)";
    	cout<<"\nFour passport size photographs";
    	cout<<"\nXerox copies of 10th , Inter  certificates";
    	getchar();
    	cout<<"\n\nYou are instructed to submit the certificates without fail";
    	getchar();

		system("cls");
        char confromdet;
    	cout<<"Mail";
		cout<<"\n\nDear Student, Please Check Your details Given Below";
    	cout <<"\nFull Name         : "<<e.fulnm;
		cout <<"\nFirst Name        : "<<e.midnm;
		cout <<"\nLast Name         : "<<e.astnm;
    	cout <<"\nBlood Group       : "<<e.bldgup;
        cout <<"\nFather Name       : "<<e.fatnm;
        cout <<"\nFather occupation : "<<e.fatacupsn;
        cout <<"\nFather income     : "<<e.fatincm;
        cout <<"\nMother name       : "<<e.motnm;
        cout <<"\nMother occupation : "<<e.momacupsn<<e.momacupsn;
        cout <<"\nMother income     : "<<e.momincm;
        cout <<"\nSchool name       : "<<e.sclnm;
        cout <<"\nCollage name      : "<<e.clgnm;
        cout <<"\nEmail address     : "<<e.email;
       	cout <<"\nNationality       : "<<e.nation;
        cout <<"\nCity / village    : "<<e.ctyorvilg;
        cout <<"\nPin Code          : "<<e.pncod[100];
        cout <<"\nAadhaar Number    : "<<e.adhar[100];
        cout <<"\nContact Number    : "<<e.phnnum[100];
        cout<<"\n\nIs Your Details Correct(y/n): ";
        cin >> confromdet;
    	
        system("cls");
        if(confromdet == 'y')
		{	
        	cout << "\nPlease Continue With the Verification....!";
        	cout <<"\nEnter Your Ser Name          : ";
        	cin >> e.vernm;
        	if (e.vernm == e.fulnm){
				cout << "Enter your pincode         : ";
           		cin >> e.verpncd;
           		if(e.verpncd == e.pncod[100])
				{
               		cout << "Enter your Father Name     : ";
               		cin >> e.verfdrnm;
               		if(e.verfdrnm == e.fatnm)
					{
                   		cout << "Enter your Mother Name     : ";
                   		cin >> e.vefmtynm;
                   		if(e.vefmtynm == e.motnm)
						{
                      		cout << "Enter your Contact Number  : ";
                       		cin >> e.verctcnm;
                       		if(e.verctcnm ==  e.phnnum[100])
							{
                           		cout << "Enter your E-mail          : ";
                           		cin >> e.vermal;
                           		if(e.vermal == e.email)
								{
                               		cout << "Enter your Aadhaar Number  : ";
                               		cin >> e.veradhar;
                               		if(e.veradhar == e.adhar[100])
									{
										cout<<"Verification Completed.";
										getchar();
										getchar();
										fees();
                                	}
                                else{
            						cout<<"Verication failed";
            						getchar();
									getchar();
            						prs_infrmsn();
        							}
                            	}
                            else{
            					cout<<"Verication failed";
            					getchar();
								getchar();
            					prs_infrmsn();
        						}
                        	}
                        else{
            				cout<<"Verication failed";
            				getchar();
							getchar();
            				prs_infrmsn();
        					}
                    	}
                    else{
            			cout<<"Verication failed";
            			getchar();
						getchar();
            			prs_infrmsn();
        				}
                	}
                else{
            		cout<<"Verication failed";
            		getchar();
					getchar();
            		prs_infrmsn();
        			}
            	}
            else{
            	cout<<"Verication failed";
            	getchar();
				getchar();
            	prs_infrmsn();
            	}
    	}
    	else{
       		cout<<"You have to conform the details.";
       		prs_infrmsn();
      	}
        		
}}



	void inttmak()
	{
    	int intovral1,percentage3;
        cout<<"\n\n\nENTER THE MARKS OBTAINED IN 12th!\n";
        cout<<"______________";
        cout<<"\nEnter the Overall marks(Total): ";
        cin>>intovral1;
        if(intovral1>100){
        	cout<<"Enter your percentage         : ";
			cin>>percentage3;
			if(percentage3>30){
				prs_infrmsn();
			}
			else{
				cout<<"\nEntered Wrong Percentage marks....";
				cout<<"\nPress enter to continue.";
				getchar();
				getchar();
				inttmak();
			}
		}
		else{
			cout<<"\nEntered Wrong Overall Marks.....";
			cout<<"\nPress enter to continue.";
			getchar();
			getchar();
			inttmak();
		}
		cout<<"______________";
			
	}
	void tenmarks()
	{
		int thovral,percentage;
		cout<<"\n\n\nENTER THE MARKS OBTAINED IN 10th!\n";
        cout<<"______________";
        cout<<"\nEnter the Overall marks(Total): ";
        cin>>thovral;
        if(thovral>100){
        	cout<<"Enter your percentage         : ";
			cin>>percentage;
			if(percentage>30){
				inttmak();
			}
			else{
				cout<<"\nEntered Wrong Percentage marks.....";
				cout<<"\nPress enter to continue.";
				getchar();
				getchar();
				tenmarks();
			}
		}
		else{
			cout<<"\nEntered Wrong Overall Marks.....";
			cout<<"\nPress enter to continue.";
			getchar();
			getchar();
			tenmarks();
		}
	}

int main() {
    char thmaks;
    cout<<"\nENTER DETAILS OF ACADEMIC QUALIFICATIONS"<<endl;
    cout << "\nDid you get your 10th and 12th marks(y/n): ";
    cin >> thmaks;
    storeToFile("10th and 12th Marks Status: " + string(1, thmaks)); // Store input

    system("cls");
    if (thmaks == 'y') {
        tenmarks();
    } else {
        cout << "\nPLEASE CONTINUE THIS PROCESS AFTER GETTING YOUR 10th AND 12th MARKS!!!\n";
        getchar();
        exit(0);
    }

    return 0;
}
