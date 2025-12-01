#include<iostream>
using namespace std;
int main()
{
	int imparement;
	int sport;
	int class_no;
	int coach;
	
	cout<<"What type of disability or condition do you have? "<<endl;
	cout<<"1. Physical"<<endl;
	cout<<"2. Vision"<<endl;
	cout<<"3. Intellectual"<<endl;
	cin>>imparement;
	
	if(imparement==1)
	{
		cout<<"What is your sport? "<<endl;
		cout<<"1. Athletic"<<endl;
		cout<<"2. Swimming"<<endl;
		cout<<"3. Coordination Running"<<endl;			
		cout<<"4. Wheelchair Track Squad"<<endl;
		cin>>sport;
		
			if(sport==1)
			{
				cout<<"What is your class number? "<<endl;
				cout<<"1. 11-13"<<endl;
				cout<<"2. 1-5-14"<<endl;
				cout<<"3. 20"<<endl;
				cout<<"4. 51-54"<<endl;
				cin>>class_no;
				
				if(class_no==1)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl;
						cout<<"*Imparement:     Physical         "<<endl;
						cout<<"*Sport:          Athlete          "<<endl;
						cout<<"*Class:          T11              "<<endl;
						cout<<"*Coach:          Para-Sports Coach"<<endl;
						cout<<"*Medical team:   SportMed         "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
					}
					else if(class_no==2)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl;  
						cout<<"*Imparement:     Physical         "<<endl;
						cout<<"*Sport:          Athlete          "<<endl;
						cout<<"*Class:          S5               "<<endl;
						cout<<"*Coach:          Para-Sports Coach"<<endl;
						cout<<"*Medical team:   SportMed         "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
					}
					else if(class_no==3)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl; 
						cout<<"*Imparement:     Physical         "<<endl;
						cout<<"*Sport:          Athlete          "<<endl;
						cout<<"*Class:          T20              "<<endl;
						cout<<"*Coach:          Para-Sports Coach"<<endl;
						cout<<"*Medical team:   SportMed         "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
					}
					else if(class_no==4)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl; 
						cout<<"*Imparement:     Physical         "<<endl;
						cout<<"*Sport:          Athlete          "<<endl;
						cout<<"*Class:          T54              "<<endl;
						cout<<"*Coach:          Para-Sports Coach"<<endl;
						cout<<"*Medical team:   SportMed         "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
					}
			}

			 	else if(sport==2)
				{
				cout<<"What is your class number? "<<endl;
				cout<<"Choose one:"<<endl;
				cout<<"1. 11-13"<<endl;
				cout<<"2. 1-5-14"<<endl;
				cout<<"3. 20"<<endl;
				cout<<"4. 51-54"<<endl;
				cin>>class_no;
				
				if(class_no==1)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl;
						cout<<"*Imparement:     Physical         "<<endl;
						cout<<"*Sport:          Swimming         "<<endl;
						cout<<"*Class:          T11              "<<endl;
						cout<<"*Coach:          swimming Coach   "<<endl;
						cout<<"*Medical team:   Team Physician   "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
					}
					else if(class_no==2)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl;  
						cout<<"*Imparement:     Physical         "<<endl;
						cout<<"*Sport:          Swimming         "<<endl;
						cout<<"*Class:          S5               "<<endl;
						cout<<"*Coach:          Para-Sports Coach"<<endl;
						cout<<"*Medical team:   SportMed         "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
					}
					else if(class_no==3)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl;
						cout<<"*Imparement:     Physical         "<<endl;
						cout<<"*Sport:          Swimming         "<<endl;
						cout<<"*Class:          T20              "<<endl;
						cout<<"*Coach:          Para-Sports Coach"<<endl;
						cout<<"*Medical team:   SportMed         "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
					}
					else if(class_no==4)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl;  
						cout<<"*Imparement:     Physical         "<<endl;
						cout<<"*Sport:          Swimming         "<<endl;
						cout<<"*Class:          T51              "<<endl;
						cout<<"*Coach:          Para-Sports Coach"<<endl;
						cout<<"*Medical team:   SportMed         "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
					}
				}
				else if(sport==3)
				{
					cout<<"What is your class number? "<<endl;
					cout<<"1. 11-13"<<endl;
					cout<<"2. 1-5-14"<<endl;
					cout<<"3. 20"<<endl;
					cout<<"4. 51-54"<<endl;
					cin>>class_no;
					
					if(class_no==1)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl; 
						cout<<"*Imparement:     Physical         "<<endl;
						cout<<"*Sport:          Coordination Run "<<endl;
						cout<<"*Class:          T13              "<<endl;
						cout<<"*Coach:          ParaAthletics    "<<endl;
						cout<<"*Medical team:   Medical Physician"<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
					}
					else if(class_no==2)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl; 
						cout<<"*Imparement:     Physical         "<<endl;
						cout<<"*Sport:          Coordination Run "<<endl;
						cout<<"*Class:          T14              "<<endl;
						cout<<"*Coach:          Para-Sports Coach"<<endl;
						cout<<"*Medical team:   SportMed         "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
					}
					else if(class_no==3)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl;
						cout<<"*Imparement:     Physical         "<<endl;
						cout<<"*Sport:          Coordination Run "<<endl;
						cout<<"*Class:          T20              "<<endl;
						cout<<"*Coach:          Para-Sports Coach"<<endl;
						cout<<"*Medical team:   SportMed         "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
					}
					else if(class_no==4)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl; 
						cout<<"*Imparement:     Physical         "<<endl;
						cout<<"*Sport:          Coordination Run "<<endl;
						cout<<"*Class:          T54              "<<endl;
						cout<<"*Coach:          Para-Sports Coach"<<endl;
						cout<<"*Medical team:   SportMed         "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
					}
				}				
				else if(sport==4)
				{
					cout<<"1. 11-13"<<endl;
					cout<<"2. S1-S5-S14"<<endl;
					cout<<"3. T20"<<endl;
					cout<<"4. T51-T54"<<endl;
					cin>>class_no;
					
					if(class_no==1)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl; 
						cout<<"*Imparement:     Physical         "<<endl;
						cout<<"*Sport:          W-Track Squad    "<<endl;
						cout<<"*Class:          T12              "<<endl;
						cout<<"*Coach:          ParaAthletics    "<<endl;
						cout<<"*Medical team:   Medical Physician"<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
					}
					else if(class_no==2)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl;
						cout<<"*Imparement:     Physical         "<<endl;
						cout<<"*Sport:          W-Track Squad    "<<endl;
						cout<<"*Class:          T13              "<<endl;
						cout<<"*Coach:          Para-Sports Coach"<<endl;
						cout<<"*Medical team:   SportMed         "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
					}
					else if(class_no==3)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl; 
						cout<<"*Imparement:     Physical         "<<endl;
						cout<<"*Sport:          W-Track Squad    "<<endl;
						cout<<"*Class:          T20              "<<endl;
						cout<<"*Coach:          Para-Sports Coach"<<endl;
						cout<<"*Medical team:   SportMed         "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
					}
					else if(class_no==4)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl;
						cout<<"*Imparement:     Physical         "<<endl;
						cout<<"*Sport:          W-Track Squad    "<<endl;
						cout<<"*Class:          T52              "<<endl;
						cout<<"*Coach:          Para-Sports Coach"<<endl;
						cout<<"*Medical team:   SportMed         "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
					}
				}
			else
			{
				cout<<"The given Information does not reside the correct catagory of sports"<<endl;
			}
		}
		else if(imparement==2)
		{
			cout<<"What is your sport? "<<endl;
			cout<<"1. Athletic"<<endl;
			cout<<"2. Swimming"<<endl;
			cout<<"3. Coordination Running"<<endl;			
			cout<<"4. Wheelchair Track Squad"<<endl;
			cin>>sport;	
			
			if(sport==1)
			{
				cout<<"What is your class number? "<<endl;
				cout<<"1. 11-13"<<endl;
				cout<<"2. 1-5-14"<<endl;
				cout<<"3. 20"<<endl;
				cout<<"4. 51-54"<<endl;
				cin>>class_no;
				
				if(class_no==1)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl; 
						cout<<"*Imparement:     Vision           "<<endl;
						cout<<"*Sport:          Athlete          "<<endl;
						cout<<"*Class:          T13              "<<endl;
						cout<<"*Coach:          Vision Coach     "<<endl;
						cout<<"*Medical team:   Optometrist      "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
					}
					else if(class_no==2)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl;
						cout<<"*Imparement:     Vision           "<<endl;
						cout<<"*Sport:          Athlete          "<<endl;
						cout<<"*Class:          S6               "<<endl;
						cout<<"*Coach:          Vision Coach     "<<endl;
						cout<<"*Medical team:   Optometrist      "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
					}
					else if(class_no==3)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl; 
						cout<<"*Imparement:     Vision           "<<endl;
						cout<<"*Sport:          Athlete          "<<endl;
						cout<<"*Class:          T20              "<<endl;
						cout<<"*Coach:          Vision Coach     "<<endl;
						cout<<"*Medical team:   Optometrist      "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
					}
					else if(class_no==4)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl; 
						cout<<"*Imparement:     Vision           "<<endl;
						cout<<"*Sport:          Athlete          "<<endl;
						cout<<"*Class:          T51              "<<endl;
						cout<<"*Coach:          Vision Coach     "<<endl;
						cout<<"*Medical team:   Optometrist      "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
					}
					else
					{
						cout<<"The given Information does not reside the correct catagory of sports"<<endl;
					}
			}
			else if(sport==2)
			{
				cout<<"What is your class number? "<<endl;
				cout<<"1. 11-13"<<endl;
				cout<<"2. 1-5-14"<<endl;
				cout<<"3. 20"<<endl;
				cout<<"4. 51-54"<<endl;
				cin>>class_no;
				
				if(class_no==1)
				{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl; 
						cout<<"*Imparement:     Vision           "<<endl;
						cout<<"*Sport:          Swimming         "<<endl;
						cout<<"*Class:          T12              "<<endl;
						cout<<"*Coach:          Talent Coach     "<<endl;
						cout<<"*Medical team:   Physiotherapist  "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
				}
				else if(class_no==2)
				{
					cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl;
						cout<<"*Imparement:     Vision           "<<endl;
						cout<<"*Sport:          Swimming         "<<endl;
						cout<<"*Class:          S7               "<<endl;
						cout<<"*Coach:          Vision Coach     "<<endl;
						cout<<"*Medical team:   Optometrist      "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
				}
				else if(class_no==3)
				{
					cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl; 
						cout<<"*Imparement:     Vision           "<<endl;
						cout<<"*Sport:          Swimming         "<<endl;
						cout<<"*Class:          T20              "<<endl;
						cout<<"*Coach:          Vision Coach     "<<endl;
						cout<<"*Medical team:   Optometrist      "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
				}
				else if(class_no==4)
				{
				        cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl; 
						cout<<"*Imparement:     Vision           "<<endl;
						cout<<"*Sport:          Swimming         "<<endl;
						cout<<"*Class:          T53              "<<endl;
						cout<<"*Coach:          Vision Coach     "<<endl;
						cout<<"*Medical team:   Optometrist      "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
				}
			
			}
			else if(sport==3)
			{
				cout<<"What is your class number? "<<endl;
				cout<<"1. 11-13"<<endl;
				cout<<"2. 1-5-14"<<endl;
				cout<<"3. 20"<<endl;
				cout<<"4. 51-54"<<endl;
				cin>>class_no;
			
				if(class_no==1)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl;
						cout<<"*Imparement:     Vision           "<<endl;
						cout<<"*Sport:          Coordination Run "<<endl;
						cout<<"*Class:          T11              "<<endl;
						cout<<"*Coach:          Para-Athletics   "<<endl;
						cout<<"*Medical team:   Ophthalmologist  "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
					}
				else if(class_no==2)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl;
						cout<<"*Imparement:     Vision           "<<endl;
						cout<<"*Sport:          Coordination Run "<<endl;
						cout<<"*Class:          S7               "<<endl;
						cout<<"*Coach:          Vision Coach     "<<endl;
						cout<<"*Medical team:   Optometrist      "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
					}
				else if(class_no==3)
				{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl; 
						cout<<"*Imparement:     Vision           "<<endl;
						cout<<"*Sport:          Coordination Run "<<endl;
						cout<<"*Class:          T20              "<<endl;
						cout<<"*Coach:          Vision Coach     "<<endl;
						cout<<"*Medical team:   Optometrist      "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
				}
				else if(class_no==4)
				{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl;
						cout<<"*Imparement:     Vision           "<<endl;
						cout<<"*Sport:          Coordination Run "<<endl;
						cout<<"*Class:          T53              "<<endl;
						cout<<"*Coach:          Vision Coach     "<<endl;
						cout<<"*Medical team:   Optometrist      "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
				}
			}
			else if(sport==4)
			{
				cout<<"What is your class number? "<<endl;
				cout<<"1. 11-13"<<endl;
				cout<<"2. 1-5-14"<<endl;
				cout<<"3. 20"<<endl;
				cout<<"4. 51-54"<<endl;
			
				if(class_no==1)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl;  
						cout<<"*Imparement:     Vision           "<<endl;
						cout<<"*Sport:          W-Track Squad    "<<endl;
						cout<<"*Class:          T12              "<<endl;
						cout<<"*Coach:          Para-Athletics   "<<endl;
						cout<<"*Medical team:   Medical Physician"<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
					}
					else if(class_no==2)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl; 
						cout<<"*Imparement:     Vision           "<<endl;
						cout<<"*Sport:          W-Track Squad    "<<endl;
						cout<<"*Class:          S6               "<<endl;
						cout<<"*Coach:          Vision Coach     "<<endl;
						cout<<"*Medical team:   Optometrist      "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"*_________________________________"<<endl;
					}
					else if(class_no==3)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl; 
						cout<<"*Imparement:     Vision           "<<endl;
						cout<<"*Sport:          W-Track Squad   "<<endl;
						cout<<"*Class:          T20              "<<endl;
						cout<<"*Coach:          Vision Coach     "<<endl;
						cout<<"*Medical team:   Optometrist      "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
					}
					else if(class_no==4)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl;
						cout<<"*Imparement:     Vision           "<<endl;
						cout<<"*Sport:          W-Track Squad    "<<endl;
						cout<<"*Class:          T52              "<<endl;
						cout<<"*Coach:          Vision Coach     "<<endl;
						cout<<"*Medical team:   Optometrist      "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
					}
				}
			else
			{
				cout<<"The given Information does not reside the correct catagory of sports"<<endl;
			}
	}
			else if(imparement==3)
		{
			cout<<"What is your sport? "<<endl;
			cout<<"1. Athletic"<<endl;
			cout<<"2. Swimming"<<endl;
			cout<<"3. Coordination Running"<<endl;			
			cout<<"4. Wheelchair Track Squad"<<endl;
			cin>>sport;	
			
			if(sport==1)
			{
				cout<<"What is your class number? "<<endl;
				cout<<"1. 11-13"<<endl;
				cout<<"2. 1-5-S14"<<endl;
				cout<<"3. 20"<<endl;
				cout<<"4. 51-54"<<endl;
				cin>>class_no;
				
				if(class_no==1)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl;  
						cout<<"*Imparement:     Intellectual     "<<endl;
						cout<<"*Sport:          Athlete          "<<endl;
						cout<<"*Class:          T13              "<<endl;
						cout<<"*Coach:          T20 Coach        "<<endl;
						cout<<"*Medical team:   SportPsychologist"<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
					}
					else if(class_no==2)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl; 
						cout<<"*Imparement:     Intellectual     "<<endl;
						cout<<"*Sport:          Athlete          "<<endl;
						cout<<"*Class:          S8               "<<endl;
						cout<<"*Coach:          Vision Coach     "<<endl;
						cout<<"*Medical team:   Optometrist      "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"*_________________________________"<<endl;
					}
					else if(class_no==3)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl;
						cout<<"*Imparement:     Intellectual     "<<endl;
						cout<<"*Sport:          Athlete          "<<endl;
						cout<<"*Class:          T20              "<<endl;
						cout<<"*Coach:          Vision Coach     "<<endl;
						cout<<"*Medical team:   Optometrist      "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"*________________________________"<<endl;
					}
					else if(class_no==4)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl; 
						cout<<"*Imparement:     Intellectual     "<<endl;
						cout<<"*Sport:          Athlete          "<<endl;
						cout<<"*Class:          T54              "<<endl;
						cout<<"*Coach:          Vision Coach     "<<endl;
						cout<<"*Medical team:   Optometrist      "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"*_________________________________"<<endl;
					}
			}
					else if(sport==2)
					{
						cout<<"What is your class number? "<<endl;
						cout<<"1. 11-13"<<endl;
						cout<<"2. 1-5-14"<<endl;
						cout<<"3. 20"<<endl;
						cout<<"4. 51-54"<<endl;
						cin>>class_no;
				
					if(class_no==1)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl;
						cout<<"*Imparement:     Intellectual     "<<endl;
						cout<<"*Sport:          Swimming         "<<endl;
						cout<<"*Class:          T13              "<<endl;
						cout<<"*Coach:          T14 Coach        "<<endl;
						cout<<"*Medical team:   SportPsychologist"<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"*_________________________________"<<endl;
					}
					else if(class_no==2)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl;
						cout<<"*Imparement:     Intellectual     "<<endl;
						cout<<"*Sport:          Swimming         "<<endl;
						cout<<"*Class:          S6               "<<endl;
						cout<<"*Coach:          Vision Coach     "<<endl;
						cout<<"*Medical team:   Optometrist      "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"*_________________________________"<<endl;
					}
					else if(class_no==3)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl;  
						cout<<"*Imparement:     Intellectual     "<<endl;
						cout<<"*Sport:          Swimming         "<<endl;
						cout<<"*Class:          T20              "<<endl;
						cout<<"*Coach:          Vision Coach     "<<endl;
						cout<<"*Medical team:   Optometrist      "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"8_________________________________"<<endl;
					}
					else if(class_no==4)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl;
						cout<<"*Imparement:     Intellectual     "<<endl;
						cout<<"*Sport:          Swimming         "<<endl;
						cout<<"*Class:          T53              "<<endl;
						cout<<"*Coach:          Vision Coach     "<<endl;
						cout<<"*Medical team:   Optometrist      "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
					}
				}
					else if(sport==3)
					{
						cout<<"What is your class number? "<<endl;
						cout<<"1. 11-13"<<endl;
						cout<<"2. 1-5-14"<<endl;
						cout<<"3. 20"<<endl;
						cout<<"4. 51-54"<<endl;
						cin>>class_no;
				
					if(class_no==1)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl; 
						cout<<"*Imparement:     Intellectual     "<<endl;
						cout<<"*Sport:          Coordination Run "<<endl;
						cout<<"*Class:          T11              "<<endl;
						cout<<"*Coach:          Athletics coach  "<<endl;
						cout<<"*Medical team:   SportPsychologist"<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"*_________________________________"<<endl;
					}
					else if(class_no==2)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl; 
						cout<<"*Imparement:     Intellectual     "<<endl;
						cout<<"*Sport:          Coordination Run "<<endl;
						cout<<"*Class:          S8               "<<endl;
						cout<<"*Coach:          Vision Coach     "<<endl;
						cout<<"*Medical team:   Optometrist      "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
					}
					else if(class_no==3)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl;
						cout<<"*Imparement:     Intellectual     "<<endl;
						cout<<"*Sport:          Coordination Run "<<endl;
						cout<<"*Class:          T20              "<<endl;
						cout<<"*Coach:          Vision Coach     "<<endl;
						cout<<"*Medical team:   Optometrist      "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
					}
					else if(class_no==4)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl;  
						cout<<"*Imparement:     Intellectual     "<<endl;
						cout<<"*Sport:          Coordination Run "<<endl;
						cout<<"*Class:          T51              "<<endl;
						cout<<"*Coach:          Vision Coach     "<<endl;
						cout<<"*Medical team:   Optometrist      "<<endl;
						cout<<"Training time:  9-2               "<<endl;
						cout<<"__________________________________"<<endl;
					}
				}
					else if(sport==4)
					{
						cout<<"What is your class number? "<<endl;
						cout<<"1. 11-13"<<endl;
						cout<<"2. 1-5-14"<<endl;
						cout<<"3. 20"<<endl;
						cout<<"4. 51-54"<<endl;
						cin>>class_no;
				
					if(class_no==1)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl; 
						cout<<"*Imparement:     Intellectual     "<<endl;
						cout<<"*Sport:          W_track squad    "<<endl;
						cout<<"*Class:          T12              "<<endl;
						cout<<"*Coach:          Athletics coach  "<<endl;
						cout<<"*Medical team:   SportPsychologist"<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"*_________________________________"<<endl;
					}
					else if(class_no==2)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl;  
						cout<<"*Imparement:     Intellectual     "<<endl;
						cout<<"*Sport:          W_track squad    "<<endl;
						cout<<"*Class:          S6               "<<endl;
						cout<<"*Coach:          Vision Coach     "<<endl;
						cout<<"*Medical team:   Optometrist      "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"*_________________________________"<<endl;
					}
					else if(class_no==3)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl;  
						cout<<"*Imparement:     Intellectual     "<<endl;
						cout<<"*Sport:          W_track squad    "<<endl;
						cout<<"*Class:          T20              "<<endl;
						cout<<"*Coach:          Vision Coach     "<<endl;
						cout<<"*Medical team:   Optometrist      "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"__________________________________"<<endl;
					}
					else if(class_no==4)
					{
						cout<<"Dear Contestant,"<<endl;
						cout<<"According to your Disability, your choice of Sport and Class Number,\nYou will be Given a form in which your detalails for\nthe upcoming Sports Compitition will be mentioned."<<endl;
						string name;
						cout<<"Enter your name for the final list: "<<endl;
						cin>>name;
						cout<<"__________________________________"<<endl;
						cout<<"*Name:           "<<name<<endl; 
						cout<<"*Imparement:     Intellectual     "<<endl;
						cout<<"*Sport:          W_track squad    "<<endl;
						cout<<"*Class:          T51              "<<endl;
						cout<<"*Coach:          Vision Coach     "<<endl;
						cout<<"*Medical team:   Optometrist      "<<endl;
						cout<<"*Training time:  9-2              "<<endl;
						cout<<"*_________________________________"<<endl;
					}	
				}
					else
					{
						cout<<"The given Information does not reside the correct catagory of sports"<<endl;
					}
				}
			else
			{
				cout<<"The given Information does not reside the correct catagory of sports"<<endl;
			}
}