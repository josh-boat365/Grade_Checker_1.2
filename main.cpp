//#Grade_Checker_1.2
//#this a grade checker in C++

// Grade Check Program <- -> Version 0.1

#include <iostream>
	using namespace std;
int main()
{
	
	int CT;
	int FCP;
	int FC;
	int MCS;
	int SM;
	int AS;
	int CS;
	
	// CTCH -		Circuit Theory Credit Hours
	// FCPCH - 	Fund. of Comp. Programming Credit Hours
	// FCCH -		Fund. of Computing Credit Hours
	// MCSCH -	Math Credit Hours
	// SMCH -	  Stats Credit Hours
	// ASCH -		African Studies Credit Hours
	// CSCH -		Comm. Skills Credit Hours
	
	// CH - Credit Hours
	
	int CTCH = 3;
	int FCPCH = 3;
	int FCCH = 3;
	int MCSCH = 2;
	int SMCH = 3;
	int ASCH = 2;
	int CSCH = 2;
	
	// NE -  Nemerical Equivalnce
	
	int NE1 = 5.0;
	int NE2 = 4.5;
	int NE3 = 4.0;
	int NE4 = 3.5;
	int NE5 = 3.0;
	int NE6 = 2.5;
	int NE7 = 2.0;
	int NE8 = 1.5;
	int NE9 = 0;
	
	
	
	

	// Grading System Text Box
	
	string up			= 		"==========================";
	string down	   =		"=========================";
	string side		=		 "===						===\n			===						===\n			===		GRADING SYSTEM	V1.0		===\n			===						===\n			===				        	===\n";		
	string sidee		=		 "==						==\n			==	   	    RESULT			==\n			==				        	==\n";		
	string sidemarks		=		 "==						==\n			==	   	    ENTER MARKS			==\n			==				        	==\n";												string sidegpa		=		 "==						==\n			==	   	    GRADE POINT AVERAGE		==\n			==				        	==\n";									
	string updown = up+down;
	
	cout<<"			"<<updown<<endl<<"			"<<updown<<endl;
	cout<<"			"<<side;
	cout<<"			"<<updown<<endl<<"			"<<updown<<endl;
	
	
// Grading System Inputing Values

	string name, name2;
	
	cout<<"\n\n	Enter Your First Name:			";
		cin>>name;
	cout<<"\n\n";
	cout<<"	Enter Your Second Name:			";
		cin>>name2;
	cout<<"\n\n\n";
	
	// Enter Marks
	
		cout<<"			"<<down<<down<<endl;
		cout<<"			"<<sidemarks;
		cout<<"			"<<down<<down<<endl<<endl<<endl;
	
	cout<<"	Circuit Theory					";
			cin>>CT;
			cout<<"\n\n";
	cout<<"	Fundamentals Of Computer Programming		";
					cin>>FCP;
					cout<<"\n\n";
	cout<<"	Fundamentals Of Computing			";
							cin>>FC;
							cout<<"\n\n";
	cout<<"	Mathematics For Computer Science		";
						cin>>MCS;
						cout<<"\n\n";	
	cout<<"	Statistic Method				";
				cin>>SM;
				cout<<"\n\n";		
	cout<<"	African Studies					";
		cin>>AS;
		cout<<"\n\n";	
	cout<<"	Communication Skills				";
	cin>>CS;
	cout<<"\n\n\n\n";
	
	
	// Results Box
	
	
	cout<<"			"<<down<<down<<endl;
	cout<<"			"<<sidee;
	cout<<"			"<<down<<down<<endl<<endl<<endl;
	
	// Result Table
	
		
	string sub = "Subject";
	string m = "Marks";
	string g = "Grade";
	string n = "Numerical Value";
	string gp = "Grade Point";
	string a ="|";
	
	
	cout<<"	"<<sub<<""<<a;
	cout<<"			"<<m<<"	"<<a;
	cout<<"     "<<g<<"  "<<a;
	cout<<" 	  "<<n<<"  "<<a;
	cout<<"   "<<gp<<endl<<endl;
	
	
	// Circuit Theory
	
	
	cout<<"\n\nCircuit Theory";
	
	if ( CT >= 85 )
	{
		cout<<"				"<<CT<<"	"<<"	A+		"<<NE1<<"		"<<NE1 * CTCH;	
	}
	
	else if (CT >= 80 && CT <= 84){
		cout<<"				"<<CT<<"	"<<"	A		"<<NE2<<"		"<<NE2 * CTCH;
	}
	
	if (CT >= 75 && CT <= 79){
		cout<<"				"<<CT<<"	"<<"	B+		"<<NE3<<"		"<<NE3 * CTCH;
	}
	
	else if (CT >= 70 && CT <= 74){
		cout<<"				"<<CT<<"	"<<"	B		"<<NE4<<"		"<<NE4 * CTCH;
	}
	
	if (CT >= 65 && CT <= 69){
		cout<<"				"<<CT<<"	"<<"	C+		"<<NE5<<"		"<<NE5 * CTCH;
	}
	
	else if (CT >= 60 && CT <= 64){
		cout<<"				"<<CT<<"	"<<"	C		"<<NE6<<"		"<<NE6 * CTCH;
	}
	
	if (CT >= 55 && CT <= 59){
		cout<<"				"<<CT<<"	"<<"	D+		"<<NE7<<"		"<<NE7 * CTCH;
	}
	
	else if (CT >= 50 && CT <= 54){
		cout<<"				"<<CT<<"	"<<"	D		"<<NE8<<"		"<<NE8 * CTCH;
	}
	
	if (CT < 50){
		cout<<"				"<<CT<<"	"<<"	F		"<<NE9<<"		"<<NE9 * CTCH;
	}
	
		cout<<"\n\n";
	
	
			
		//Fundamentals of Computer Programming
		
	cout<<"\n\nFundamentals of Computer Programming";
	
	
	if ( FCP >= 85 )
	{
		cout<<"	"<<FCP<<"	"<<"	A+		"<<NE1<<"		"<<NE1 * FCPCH;
		
	}
	
	else if (FCP >= 80 && FCP <= 84){
		cout<<"	"<<FCP<<"	"<<"	A		"<<NE2<<"		"<<NE2 * FCPCH;
	}
	
	if (FCP >= 75 && FCP <= 79){
		cout<<"	"<<FCP<<"	"<<"	B+		"<<NE3<<"		"<<NE3 * FCPCH;
	}
	
	else if (FCP >= 70 && FCP <= 74){
		cout<<"	"<<FCP<<"	"<<"	B		"<<NE4<<"		"<<NE4 * FCPCH;
	}
	
	if (FCP >= 65 && FCP <= 69){
		cout<<"	"<<FCP<<"	"<<"	C+		"<<NE5<<"		"<<NE5 * FCPCH;
	}
	
	else if (FCP >= 60 && FCP <= 64){
		cout<<"	"<<FCP<<"	"<<"	C		"<<NE6<<"		"<<NE6 * FCPCH;
	}
	
	if (FCP >= 55 && FCP <= 59){
		cout<<"	"<<FCP<<"	"<<"	D+		"<<NE7<<"		"<<NE7 * FCPCH;
	}
	
	else if (FCP >= 50 && FCP <= 54){
		cout<<"	"<<FCP<<"	"<<"	D		"<<NE8<<"		"<<NE8 * FCPCH;
	}
	
	if (FCP < 50){
		cout<<"	"<<FCP<<"	"<<"	F		"<<NE9<<"		"<<NE9 * FCPCH;
	}
		
		cout<<"\n\n";
	
	//Fundamentals of Comouting
	
	cout<<"\n\nFundamentals of Computing";
	
	if ( FC >= 85 )
	{
		
		cout<<"		"<<FC<<"	"<<"	A+		"<<NE1<<"		"<<NE1 * FCCH;
		
	}
	
	else if (FC >= 80 && FC <= 84){
		cout<<"		"<<FC<<"	"<<"	A		"<<NE2<<"		"<<NE2 * FCCH;
	}
	
	if (FC >= 75 && FC <= 79){
		cout<<"		"<<FC<<"	"<<"	B+		"<<NE3<<"		"<<NE3 * FCCH;
	}
	
	else if (FC >= 70 && FC <= 74){
		cout<<"		"<<FC<<"	"<<"	B		"<<NE4<<"		"<<NE4 * FCCH;
	}
	
	if (FC >= 65 && FC <= 69){
		cout<<"		"<<FC<<"	"<<"	C+		"<<NE5<<"		"<<NE5 * FCCH;
	}
	
	else if (FC >= 60 && FC <= 64){
		cout<<"		"<<FC<<"	"<<"	C		"<<NE6<<"		"<<NE6 * FCCH;
	}
	
	if (FC >= 55 && FC <= 59){
		cout<<"		"<<FC<<"	"<<"	D+		"<<NE7<<"		"<<NE7 * FCCH;
	}
	
	else if (FC >= 50 && FC <= 54){
		cout<<"		"<<FC<<"	"<<"	D		"<<NE8<<"		"<<NE8 * FCCH;
	}
	
	if (FC < 50){
		cout<<"		"<<FC<<"	"<<"	F		"<<NE9<<"		"<<NE9 * FCCH;
	}
		
		cout<<"\n\n";
	
	//Mathematics for Computer Science
	
	cout<<"\n\nMthematics for Computer Science";
	
	if ( MCS >= 85 )
	{
		
		cout<<"		"<<MCS<<"	"<<"	A+		"<<NE1<<"		"<<NE1 * MCSCH;
		
	}
	
	else if (MCS >= 80 && MCS <= 84){
		cout<<"		"<<MCS<<"	"<<"	A		"<<NE2<<"		"<<NE2 * MCSCH;
	}
	
	if (MCS >= 75 && MCS <= 79){
		cout<<"		"<<MCS<<"	"<<"	B+		"<<NE3<<"		"<<NE3 * MCSCH;
	}
	
	else if (MCS >= 70 && MCS <= 74){
		cout<<"		"<<MCS<<"	"<<"	B		"<<NE4<<"		"<<NE4 * MCSCH;
	}
	
	if (MCS >= 65 && MCS <= 69){
		cout<<"		"<<MCS<<"	"<<"	C+		"<<NE5<<"		"<<NE5 * MCSCH;
	}
	
	else if (MCS >= 60 && MCS <= 64){
		cout<<"		"<<MCS<<"	"<<"	C		"<<NE6<<"		"<<NE6 * MCSCH;
	}
	
	if (MCS >= 55 && MCS <= 59){
		cout<<"		"<<MCS<<"	"<<"	D+		"<<NE7<<"		"<<NE7 * MCSCH;
	}
	
	else if (MCS >= 50 && MCS <= 54){
		cout<<"		"<<MCS<<"	"<<"	D		"<<NE8<<"		"<<NE8 * MCSCH;
	}
	
	if (MCS < 50){
		cout<<"		"<<MCS<<"	"<<"	F		"<<NE9<<"		"<<NE9 * MCSCH;
	}
		
		cout<<"\n\n";
		
		// Statistical Method
		
		cout<<"\n\nStatistical Method";
	
	if ( SM >= 85 )
	{
		
		cout<<"			"<<SM<<"	"<<"	A+		"<<NE1<<"		"<<NE1 * SMCH;
		
	}
	
	else if (SM >= 80 && SM <= 84){
		cout<<"			"<<SM<<"	"<<"	A		"<<NE2<<"		"<<NE2 * SMCH;
	}
	
	if (SM >= 75 && SM<= 79){
		cout<<"			"<<SM<<"	"<<"	B+		"<<NE3<<"		"<<NE3 * SMCH;
	}
	
	else if (SM >= 70 && SM <= 74){
		cout<<"			"<<SM<<"	"<<"	B		"<<NE4<<"		"<<NE4 * SMCH;
	}
	
	if (SM >= 65 && SM <= 69){
		cout<<"			"<<SM<<"	"<<"	C+		"<<NE5<<"		"<<NE5 * SMCH;
	}
	
	else if (SM >= 60 && SM <= 64){
		cout<<"			"<<SM<<"	"<<"	C		"<<NE6<<"		"<<NE6 * SMCH;
	}
	
	if (SM >= 55 && SM <= 59){
		cout<<"			"<<SM<<"	"<<"	D+		"<<NE7<<"		"<<NE7 * SMCH;
	}
	
	else if (SM >= 50 && SM <= 54){
		cout<<"			"<<SM<<"	"<<"	D		"<<NE8<<"		"<<NE8 * SMCH;
	}
	
	if (SM < 50){
		cout<<"			"<<SM<<"	"<<"	F		"<<NE9<<"		"<<NE9 * SMCH;
	}
		
		cout<<"\n\n";
		
		// African Studies
		
		cout<<"\n\nAfrican Studies";
	
	if ( AS >= 85 )
	{
		
		cout<<"				"<<AS<<"	"<<"	A+		"<<NE1<<"		"<<NE1 * ASCH;
		
	}
	
	else if (AS >= 80 && AS <= 84){
		cout<<"				"<<AS<<"	"<<"	A		"<<NE2<<"		"<<NE2 * ASCH;
	}
	
	if (AS >= 75 && AS <= 79){
		cout<<"				"<<AS<<"	"<<"	B+		"<<NE3<<"		"<<NE3 * ASCH;
	}
	
	else if (AS >= 70 && AS <= 74){
		cout<<"				"<<AS<<"	"<<"	B		"<<NE4<<"		"<<NE4 * ASCH;
	}
	
	if (AS >= 65 && AS <= 69){
		cout<<"				"<<AS<<"	"<<"	C+		"<<NE5<<"		"<<NE5 * ASCH;
	}
	
	else if (AS >= 60 && AS <= 64){
		cout<<"				"<<AS<<"	"<<"	C		"<<NE6<<"		"<<NE6 * ASCH;
	}
	
	if (AS >= 55 && AS <= 59){
		cout<<"				"<<AS<<"	"<<"	D+		"<<NE7<<"		"<<NE7 * ASCH;
	}
	
	else if (AS >= 50 && AS <= 54){
		cout<<"			"<<AS<<"	"<<"	D		"<<NE8<<"		"<<NE8 * ASCH;
	}
	
	if (AS < 50){
		cout<<"				"<<AS<<"	"<<"	F		"<<NE9<<"		"<<NE9 * ASCH;
	}
		
		cout<<"\n\n";
		
		
		//Communication Skills
		
		cout<<"\n\nCommunication Skills";
	
	if ( CS >= 85 )
	{
		
		cout<<"			"<<CS<<"	"<<"	A+		"<<NE1<<"		"<<NE1 * CSCH;
		
	}
	
	else if (CS >= 80 && CS <= 84){
		cout<<"			"<<CS<<"	"<<"	A		"<<NE2<<"		"<<NE2 * CSCH;
	}
	
	if (CS >= 75 && CS <= 79){
		cout<<"			"<<CS<<"	"<<"	B+		"<<NE3<<"		"<<NE3 * CSCH;
	}
	
	else if (CS >= 70 && CS <= 74){
		cout<<"			"<<CS<<"	"<<"	B		"<<NE4<<"		"<<NE4 * CSCH;
	}
	
	if (CS >= 65 && CS <= 69){
		cout<<"			"<<CS<<"	"<<"	C+		"<<NE5<<"		"<<NE5 * CSCH;
	}
	
	else if (CS >= 60 && CS <= 64){
		cout<<"			"<<CS<<"	"<<"	C		"<<NE6<<"		"<<NE6 * CSCH;
	}
	
	if (CS >= 55 && CS <= 59){
		cout<<"			"<<CS<<"	"<<"	D+		"<<NE7<<"		"<<NE7 * CSCH;
	}
	
	else if (CS >= 50 && CT <= 54){
		cout<<"			"<<CS<<"	"<<"	D		"<<NE8<<"		"<<NE8 * CSCH;
	}
	
	if (CS < 50){
		cout<<"			"<<CS<<"	"<<"	F		"<<NE9<<"		"<<NE9 * CSCH;
	}
		
		cout<<"\n\n\n";
		
		
	
	
	/*  Extra Calculation -- GPA
	     GPA - Grade Point Average
		TCH - Total Credit Hours
		GP - Grade Point
	    C - Credit Hours
	    M - Marks
	    NE - Numerical Equivalence
	    G - Grade
	    
	    
	*/
	


	string optional = "\n\n			Do You Want To Calculate Your GPA";
	string decision1 = "Yes";
	string decision2 = "No";
	string final;
	
	cout<<"		"<<optional<<" ("<<decision1<<" or "<<decision2<<" )	";
	cin>>final;
	cout<<"\n\n";
	
	if (final == decision1){
	
	string up			= 		"==========================";
	string down	   =		"=========================";
	string side		=		 "===						===\n			===						===\n			===		GRADING SYSTEM			===\n			===						===\n			===				        	===\n";	
	
	string sidee		=		 "==						==\n			==	   	    RESULT			==\n			==				        	==\n";	
	
	string sidemarks		=		 "==						==\n			==	   	    ENTER MARKS			==\n			==				        	==\n";																												
	string sidegpa		=		 "==						==\n			==	   	    GRADE POINT AVERAGE		==\n			==				        	==\n";								
	
	
	
	float TGP;
	int TCH = 18;
	
	cout<<"			"<<down<<down<<endl;
	cout<<"			"<<sidegpa;
	cout<<"			"<<down<<down<<endl<<endl<<endl;
	
	cout<<"		Input Total Grade Point		";
	cin>>TGP;
	cout<<endl;
	cout<<"		"<<"Total Credit Hours		"<<TCH<<endl<<endl;

		float GPA = TGP / TCH;

		cout<<"		"<<"Grade Point Average		"<<GPA;
	
	if (GPA >= 4.00){cout<<"		[ First Class ]"<<endl;
	
}
	else if (GPA >= 3.00 && GPA <= 3.99) { 
	cout<<"		[ Second Class Upper ]"<<endl;}
	
	if (GPA >= 2.00 && GPA <= 2.99){
		cout<<"		 [ Second Class Lower ]"<<endl;}
	if (GPA >= 1.50 && GPA <= 1.99){
		cout<<"		[ Pass ]"<<endl;}
	else if (GPA < 1.50){ 
	cout<<"		[ Fail ]"<<endl;}
	
return GPA;
	
			}

else{cout<<"\n	Next Time I Guess\n\n";

}

	return 0;
	
}

