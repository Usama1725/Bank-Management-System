#include <iostream>
#include <conio.h>
#include <string>
#include <windows.h>
#include <fstream>
using namespace std;
void facilities(int position);
bool EditFunction(int position,bool abc);
void facility_taken();
void loan(int position);
void Delete(int position);
struct Admin
{
	string Username;
	string Password;

Admin(){
	Username="admin";
	Password="admin";
}	
};
struct Account
{
	string Username;
	string AccountNo;
	string Email;
	string Password;
	string PhoneNo;
	string address;
	string fathername;
	string cnic;
	string name;
	float Amount;
	string pin;
	string utilitypin;
	string mobilepin;
	string atmpin;
	string number;
	void InsideAccount(int position);
	
	Account()
	{
	Username=" ";
	AccountNo=" ";
	Email=" ";
	name=" ";
	Password=" ";
	PhoneNo=" ";
	address=" ";
	fathername=" ";
	cnic=" ";
	Amount=0;
	pin=" ";
	utilitypin=" ";
	mobilepin=" ";
	atmpin=" ";
	number=" ";
		
	}
	void Display()
	{
		cout<<"Username       : "<<Username<<endl;
		cout<<"Password       : "<<Password<<endl;
		cout<<"Holders Name Is: "<<name<<endl;
		cout<<"Email          : "<<Email<<endl;
		cout<<"Account Number : "<<AccountNo<<endl;
		cout<<"Father Name    : "<<fathername<<endl;
		cout<<"CNIC Number Is : "<<cnic<<endl;
		cout<<"Contact N0. Is : "<<PhoneNo<<endl;
		cout<<"Address Is     : "<<address<<endl;
		cout<<"\nAmount Remaining Is : "<<Amount<<endl;
	}	
};
Account *User=new Account[10];
Admin CEO;
int i=0;
int main()
{
	while (1)
	{
		main:
		system("cls");
		char Inpp;
		system("color 3f");
		cout<<"\n\t\tWELCOME TO BANK MANAGEMENT SYSTEM"<<endl;
		cout<<"\n\n\t\t\t1. Admin Panel\n\n\t\t\t2. User Panel\n\n\t\t\t3. Help\n\n\t\t\t4. Exit\n\n\t\tEnter Input:----> ";
		cin>>Inpp;
		switch(Inpp)
		{
			case '1':
				{
					system("cls");
					string USername,Pass;
					cout<<"\n\n\tEnter Username: ";
					cin>>USername;
					if (USername==CEO.Username)
					{
						cout<<"\n\n\tEnter Password: ";
						cin>>Pass;
						if (Pass==CEO.Password)
						{
							char Menu;
							Beep(250,500);
							Amain:
							cout<<"\n\n\t\tMENU\n\n\t1. Show list Of All Accounts\n\n\t2. Exit\n\n\n\tEnter Input:-----> ";
							cin>>Menu;
							switch(Menu)
							{
								case '1':
									{
										system("cls");
									for (int i=0;i<10;i++)
									{
											cout<<endl;
										if (User[i].Username!=" ")
										{
											User[i].Display();
										    cout<<endl;
									    }	   
								    }
									getch();
									break;
								    }
								case '2':
									{
										break;
										goto main;
									}
								default:
								{
									cout<<"Please Enter Input From Menu"<<endl;
									goto Amain;
								}	
							}
						}
					}
				}
				break;	
			case '2':
				{
				    system("cls");
					char Input=' ';
					bool Software=true;
					while (Software)
					{
						Smain:
						system("cls");
						cout<<"\n\n\t\t  USER PANEl"<<endl;
						cout<<"\n\t\t1. Account Login\n\n\t\t2. Create Account\n\n\t\t3. Exit\t\n\n\tEnter Input:--->";
						cin>>Input;
						switch(Input)
						{
							case '1':
								{
									system("cls");
									string Username=" ";
									string Password=" ";
									cout<<"\n\tEnter User Name: ";
									cin>>Username;
									for (int j=0;j<10;j++)
									{
										if (Username==User[j].Username){
											do{
												cout<<"\n\tEnter Password: ";
												cin>>Password;
												if (Password!=User[j].Password){
													cout<<"\n\n\tWrong Password\n";
													getch();
													goto Smain;
													continue;
												}
												else
													cout<<"\n\n\tPassword Matched\n";
													getch();
											}while (Password!=User[j].Password);
											User[j].InsideAccount(j);
											break;
											getch();
											system("cls");	
										}
									}						
								}
								break;
							case '2':
								{
									if (i>9){
										cout<<"You cannot Register More users";
									}
									else
									{
										bool usama=false;
										system("cls");
										do{
										
										cout<<"Enter Username      : ";
										cin>>User[i].Username;
										for (int k=0;k<10;k++)
										{
											if (User[i].Username!=User[k].Username && i!=k)
											{
												usama=true;
											}
											else if(User[i].Username==User[k].Username && i!=k)
											{
												cout<<"User Name is Already Taken "<<endl;
												usama=false;
												break;
											}
										}
										}while (usama==false);
										usama=false;
										do{
										cout<<"Enter Password      : ";
										cin>>User[i].Password;
									    }while(User[i].Password.length()<5);
										do{
										cout<<"Enter Account Number: ";
										cin>>User[i].AccountNo;
										for (int k=0;k<10;k++)
										{
											if (User[i].AccountNo!=User[k].AccountNo && i!=k)
											{
												usama=true;
											}
											else if(User[i].AccountNo==User[k].AccountNo && i!=k)
											{
												cout<<"Account Number is Already Taken "<<endl;
												usama=false;
												break;
											}
										}
										}while (usama==false);
										do{
										cout<<"Enter Your Name  : ";
										cin>>User[i].name;
										for (int k=0;k<User[i].name.length();k++)
										if(isalpha(User[i].name[k]))
										{
											usama=true;
										}
										else{
											usama=false;
										}}while(usama==false);
										usama=false;
										cout<<"Enter Email      : ";										
										cin>>User[i].Email;
										bool chk=true;
										do{
										cout<<"Enter Father Name: ";
										cin>>User[i].fathername;
										for(int k=0;k<User[i].fathername.length();k++)
										{
											if(isalpha(User[i].fathername[k]))
											{
												chk=true;
											}
											else{
												chk=false;
											}
										}}while(chk==false);
										chk=false;
										int condition;
										do{
				    					int countCNIC=0;
										do
										{     bool ch=true;
											do{
				    					cout<<"Enter Your CNIC Number : ";
				    					cin>>User[i].cnic;
				    					for(int k=0;k<User[i].cnic.length();k++)
										{
											if(isdigit(User[i].cnic[k]))
											{
												ch=true;
											}
											else{
												ch=false;
											}
										}}while(ch==false);
										ch=false;
				    					if (User[i].cnic[4]!='-' && User[i].cnic[13]!='-')
				    					{
				    					cout<<"Wrong  Input\n";
				    					cout<<"\tPlease Enter CNIC In The Following pattern : "<<endl;
				    					cout<<"\t\t***** - ******* - *"<<endl;
				    					continue;
										}
										}while(User[i].cnic[4]!='-' && User[i].cnic[13]!='-');
				    					int size=User[i].cnic.length();
				    					for(int c=0;c<size;c++)
				    					{
				    					if(size!=15)
				    					{
				    					condition=false;
				        				break;
										}
										else if(User[i].cnic[c]=='-')
										{
											countCNIC++;
										}
									    else if(isalpha(User[i].cnic[c]))
									    {
									    	cout<<"Your CNIC Include Atleast 13 Numbers and 2 Dashes(-)"<<endl<<endl;
									       	cout<<"Your CNIC Number Must Not Include Alphabets"<<endl;
									    	condition=false;
									    	break;
										}
										else 
										{
											condition=true;
										}
									    }
				    					if(countCNIC!=2)
				   						 {
				    						condition=false;	
										}
										}while(condition==false);
										bool p=true;
										do{
										cout<<"Enter PhoneNO: ";
										cin>>User[i].PhoneNo;
										for(int k=0;k<User[i].PhoneNo.length();k++)
										{
										if(isdigit(User[i].PhoneNo[k]))
										{
											p=true;
										}
										else{
											p=false;
										}
									    }}while(p==false);
									    p=false;
										cout<<"Enter Address: ";
										cin>>User[i].address;
										facility_taken();
										i++;
										getch();
										system("cls");
									}
								}
								break;
							case '3':
								Software=false;
								system("cls");
								goto main;
								break;
							default:
								cout<<"Wrong Input\n";
								getch();
								system("cls");
								break;
						}
				}
			}
			case '3':
				{
					system("cls");
					cout<<"\n\t\tINSTRUCTIONS"<<endl;
					cout<<"\n1. press 1 for admin panel in which admin can see bank records of\n\t account holders and only admin can access this panel";
					cout<<"\n2. press 2 for user panel in which u create account and after creating\n\t account you should use facilities\n provided by bank  ";
					system("pause");
				}
			case '4':
			{
				system("cls");
				cout<<"\n\n\tThanks for Using Bank Management System\n";
				cout<<"\n\n\t Presented By: ";
				cout<<"\n\n\t\t\tMUHAMMAD USAMA WAHEED ";
				cout<<"\n\n\tPROGRAMMING FUNDAMENTAlS";
				exit(0);
				break;
			}
			default:
				{
					cout<<"Please Select From menu "<<endl;
					getch();
					goto main;
				}
		}
	}
	return 0;
}	
	void Account::InsideAccount(int position)
	{
		bool True=true;
		while (True)
		{
			system("cls");
			char Input=' ';
			cout<<"\n\tWelcome to "<<Username<<endl;
			cout<<"\n\n\t1. Edit Details\n\t2. Deposit Amount\n\t3. Withdraw Amount\n\t4. Transfer Amount\n\t5. Display Details\n\t6. Facilities\n\t7. Delete Account\n\t8. Loan\n\t9. Exit\n\n\tEnter Input:---> ";
			cin>>Input;
			switch(Input)
			{
				case '1':
					{
						system("cls");
						bool abc=true;
						while (abc)
						{	
							abc=EditFunction(position,abc);
						}
					}
					break;
				case '2':
					{
						system("cls");
						bool d=true;
						float Temp;
						cout<<"Enter Amount You Want To Deposit  : ";
						cin>>Temp;
						if (isalpha(Temp))
						{
							d=false;
						cout<<"Enter Amount You Want To Deposit  : ";
						cin.ignore();
						cin>>Temp;
						}
					    if(isdigit(Temp))
						{
							d=true;
						}
						else{
							d=false;
						cout<<"Enter Amount You Want To Deposit  : ";
						cin>>Temp;
						}						
						while(Temp<0)
						{
						cout<<"Enter Amount Again : ";
						cin>>Temp;
						}
						Amount+=Temp;
						Beep(250,500);
						cout<<"\n\tYour Remaining Amount Is :"<<Amount<<endl;
						getch();
					}
					break;
				case '3':
					{
						system("cls");
						float temp=0;
						do
						{	
						    cout<<"You Have An Amount Of Rs : "<<Amount<<endl;
							cout<<"Enter Amount to Withdraw : ";
							cin>>temp;	
							if (temp>Amount || temp<0)
							{
								cout<<"Insufficient Amount\n";
								continue;			
							}			
							else if (Amount<0)
							{
								cout<<"Dont have More Money\n";
								return;
							}
						}while(temp>Amount || temp<0);
						Amount-=temp;
						Beep(250,500);
						cout<<"\n\tYour Remaining Amount Is :"<<Amount<<endl;
						getch();
					}
					break;
				case '4':
					{
						system("cls");
						string temp=" ";
						float tempamount=0;
						cout<<"Enter Username: ";
						cin>>temp;
						for (int j=0;j<10;j++)
						{
							if (temp==User[j].Username)
							{
								do{
									cout<<"How many Amount you want to send : ";
									cin>>tempamount;
									if (tempamount>User[position].Amount)
									{
										cout<<"Amount is invalid or not Sufficient\n";
										continue;
									}
								}while (tempamount>User[position].Amount);
								User[position].Amount-=tempamount;
								Beep(250,500);
								User[j].Amount+=tempamount;
								Beep(250,500);
							}
						}
						getch();
					}
					break;
				case '5':
					system("cls");
					Display();
					getch();
					break;
				case '6':
				{
					system("cls");
					cout<<"\n\tFacilities Provided By Bank"<<endl;
					facilities(position);
					getch();
					break;
				}
				case '7':
				
				{
					system("cls");
					Delete(position);
					True=false;
					system("pause");		
				}
					getch();
					break;
				case '8':
					{
					system("cls");
					loan(position);	
					getch();
					break;
					}
				case '9':
					{
					system("cls");
					cout<<"\n\n\tThanks For Using Service\n";
					getch();
					system("cls");
					True=false;
					}
					break;
				default:
					break;	
			}
		}
	}
bool EditFunction(int position,bool abc)
{
	system("cls");
	char Inp=' ' ;
							cout<< "\tWhat you want to Edit :\n\t\t1. Password\n\t\t2. PhoneNo\n\t\t3. Address\n\t\t4. Back\n\n\t\tEnter Input:---> ";
							cin>>Inp;
							switch (Inp)
							{
								case '1':
									cout<<"\nEnter Password: ";
									cin>>User[position].Password;
									break;
								case '2':
									cout<<"\nEnter Phone No: ";
									cin>>User[position].PhoneNo;
									break;
								case '3':
								    cout<<"\nEnter Address: ";
								    cin>>User[position].address;
								break;			
								case '4':
									abc=false;
									break;
								default:
									cout <<"\n\tWrong Input\n";
									break;
							}
							return abc;
}
void Delete(int position)
{
	char check=' ';
	cout<<"Are you sure you want to delete: ";
	cin>>check;
	if (check=='y' || check=='Y'){
		for (int l=position;l<9;l++){
			User[l].AccountNo=User[l+1].AccountNo;
			User[l].address=User[l+1].address;
			User[l].Amount=User[l+1].Amount;
			User[l].atmpin=User[l+1].atmpin;
			User[l].cnic=User[l+1].cnic;
			User[l].Email=User[l+1].Email;
			User[l].fathername=User[l+1].fathername;
			User[l].mobilepin=User[l+1].mobilepin;
			User[l].number=User[l+1].number;
			User[l].Password=User[l+1].Password;
			User[l].PhoneNo=User[l+1].PhoneNo;
			User[l].pin=User[l+1].pin;
			User[l].Username=User[l+1].Username;
			User[l].utilitypin=User[l+1].utilitypin;
		}
		User[9].AccountNo=" ";
		User[9].address=" ";
		User[9].Amount=0;
		User[9].atmpin=" ";
		User[9].cnic=" ";
		User[9].Email=" ";
		User[9].fathername=" ";
		User[9].mobilepin=" ";
		User[9].number=" ";
		User[9].Password=" ";
		User[9].PhoneNo=" ";
		User[9].pin=" ";
		User[9].Username=" ";
		User[9].utilitypin=" ";
	}
		cout<<"Your Account is deleted\n";
		return;					
}
void facility_taken()
{
	                 facility:
	                 cout<<"\n\n\t-------------------------------------------------------------"<<endl; 
	                 cout<<"\tWE HAVE DIFFERENT FACILITIES THAT WE PROVIDE TO OUR CUSTOMER "<<endl;
	                 cout<<"\t-------------------------------------------------------------"<<endl;	
	                 cout<<"\n\t01. UTILITY BILLS ";
	                 cout<<"\n\t02. ATM ";
	                 cout<<"\n\t03. MOBILE RECHARGE";
	                 cout<<"\n\t04. EXIT";
	                 int choice=0;
	                 cout<<"\n\n\tEnter Your choice :------> ";
	                 cin>>choice;
	                 switch(choice)
	                {
	                 	case 1:
	                 		{
	                 			system("cls");
	                 			cout<<"\nEnter your account number  : ";
	                 			cin>>User[i].number;
	                 			if(User[i].number==User[i].AccountNo)
	                 			{	
	                 				cout<<"Enter pin Number For Utility Account : ";
	                 				cin>>User[i].utilitypin;
	                 				cout<<"Account Created...."<<endl<<endl;
	                 			 	cout<<"\t\tThanks For Your Compensation "<<endl; 	
								}
								else 
								{
									cout<<"You Entered A Wrong Account Number "<<endl;
								}
								getch();
								system("cls");
								goto facility;
								break;
							} 
						case 2:
						   {
	                            system("cls");					   	
							    cout<<"\nEnter your account number "<<endl;
	                 			cin>>User[i].number;
	                 			if(User[i].number==User[i].AccountNo)
	                 			{
	                 				cout<<"Enter Your ATM pin Number"<<endl;
	                 				cin>>User[i].atmpin;
	                 				cout<<"\nThe message will be Sent to your mobile number on completion of progress "<<endl;
	                 				Beep(250,500);
	                 			 	cout<<"\t\t Thanks For Your Compensation "<<endl;
	                 			 	cout<<endl;
								}
								else 
								{
									cout<<"\nYou Entered A Wrong Account Number "<<endl;
								}
								getch();
								system("cls");
								goto facility;
								break;
							 }
							 case 3:
							 	{
							 		system("cls");
							 		cout<<"\nEnter your account number  : ";
		                 			cin>>User[i].number;
		                 			if(User[i].number==User[i].AccountNo)
	                 			{	
	                 				cout<<"Enter pin Number For Mobile Recharge Account : ";
	                 				cin>>User[i].mobilepin;
	                 				cout<<"\n\tAccount Created...."<<endl<<endl;
	                 				Beep(250,500);
	                 			 	cout<<"\t\tThanks For Your Compensation "<<endl; 	
								}
								else 
								{
									cout<<"You Entered A Wrong Account Number "<<endl;
								}
								system("cls");
								goto facility;
								break;
								}
							 case 4:
							 	{
							 		cout<<"\n\n\n";
							 		cout<<"Your account will be created soon...."<<endl;
							 		getch();
							 		goto create;
							 		break;
								}
							 default:
							 cout<<"You Make A Wrong Input "<<endl;
							 cout<<"Please Enter Your Selection From Menu"<<endl;
							 cout<<endl;
							 getch();
							 goto facility;	 
				}
					create:
					system("cls");	
	                cout<<"\n\n\nAccount Created....";
}
void facilities(int position)
			{
				int num=0;
				string piin;
				facility_menu:
				cout<<"\n\n\t1. UTILITY BILLS";
				cout<<"\n\n\t2. ATM";
				cout<<"\n\n\t3. MOBILE RECHARGE";
				cout<<"\n\n\t4. SMS ALERT";
				cout<<"\n\n\t5. EXIT";
				cout<<"\n\n\tEnter Your Choice :--->";
				cin>>num;
				switch(num)
				{
						case 1:
						{
							system("cls");
							int utility;
							cout<<"Enter Your Utility Bill pin number : ";
							cin>>piin;
							if(piin==User[position].utilitypin)
							{
								bool chk=true;
								cout<<"Account Owner Name Is : "<<User[position].Username<<endl;
								cout<<"Account cnic is       : "<<User[position].cnic<<endl;
								cout<<"\n\tUtility Bill Amount Is Deducted From Your Account "<<endl;
								do{
								cout<<"Enter The Amount Of Your Utility Bills : ";
								cin>>utility;
								if(isdigit(utility))
								{
									chk=true;
								}
								else{
									chk=false;
									//cout<<"Enter The Amount Of Your Utility Bills : ";
								    //cin>>utility;
							    }
							}while(chk=false);
								User[position].Amount=User[position].Amount-utility; 
								Beep(250,500);
								cout<<endl;
								cout<<"Bills Are Submitted...."<<endl;
		                    }
							getch();
							system("cls");    
							break;
						}
					case 2:
						{
							system("cls");
							int atm;
							cout<<"Enter Your ATM pin number : ";
							cin>>User[position].pin;
							if(User[position].pin==User[position].atmpin)
							{
								cout<<"Account Owner Name Is : "<<User[position].Username<<endl;
								cout<<"Account cnic is       : "<<User[position].cnic<<endl;
								cout<<"\n\tAmount Is Deducted From Your Account "<<endl;
								cout<<"Enter The Amount You Want To Get From Account : ";
								cin>>atm;
								bool chk=true;
								if(isdigit(atm))
								{
									chk=true;
								}
								else{
									chk=false;
									cout<<"Enter The Amount Of Your Utility Bills : ";
								    cin>>atm;
							    }
								User[position].Amount=User[position].Amount-atm;
								Beep(250,500);
								cout<<"Amount Is Withdrawn..........."<<endl;
								getch();
								cout<<"Remaining Amount Is : "<<User[position].Amount<<endl;
		                    }
		                    else
		                    {
		                    	cout<<"pin number Is Wrong "<<endl;
							}
							getch();
							system("cls");
                            goto facility_menu;            
							break;
						}
					case 3:
					    {
					    	system("cls");
					    	int mobile;
					    	string contactnumber;
					    	bool chk=true;
							cout<<"Enter Your Mobile Recharge pin number : ";
							cin>>User[position].pin;
							if(User[position].pin==User[position].mobilepin)
							{
								cout<<"Account Owner Name Is : "<<User[position].Username<<endl;
								cout<<"Account cnic is       : "<<User[position].cnic<<endl;
								cout<<"\n\tRecharge Amount Is Deducted From Your Account "<<endl;
								cout<<"Enter Your Mobile number :";
								cin.ignore();
								getline(cin,contactnumber);
								for (int i=0;i<contactnumber.length();i++)
							{
							if (contactnumber.length()<=10 || contactnumber.length()>11)
							{
								cout<<endl;
								cout<<"Please Enter A Valid Contact a1.number"<<endl;
								cout<<"Enter Your Contact number  : ";
							 	    getline(cin,contactnumber);
								    chk=false;
								}
								else
								{
									chk=true;
								} 					
								if (isalpha(contactnumber[position]))
								 {
								 	cout<<"Contact number Doesnot Include Alphabet"<<endl;
								 	cout<<"Enter Your Contact number : "<<endl;
								 	getline(cin,contactnumber);
								 }
								 else
								  {
								 	chk=true;
								 }	   
							}
								cout<<"\nEnter The Amount For Your Mobile Recharge : ";
								cin>>mobile;
								bool chk=true;
								if(isdigit(mobile))
								{
									chk=true;
								}
								else{
									chk=false;
									cout<<"Enter The Amount Of Your Utility Bills : ";
								    cin>>mobile;
							    }
							    Beep(250,500);
										User[position].Amount=User[position].Amount-mobile;
										cout<<endl;
										cout<<"Recharge Is Done On This "<<contactnumber<<" Of Rupees "<<mobile<<endl;
										cout<<"\nYour Remaining Amount Is "<<User[position].Amount<<endl;
				                    }
					    	getch();
							system("cls");
                            goto facility_menu;            
							break;
						}	
                    case 4:
					    {
							cout<<"\n\nSMS Is Sent On Your Mobile Number When You Withdraw Money from Account"<<endl;
							cout<<"SMS Is Sent On Your Mobile Number As Beep"<<endl;
							Beep(250,500);
							getch();
							system("cls");
	                        goto  facility_menu;            
							break;
					    }
						case 5:
					    {
					    	system("cls");
					    	break;
				     	}
					default:
					    {
					    	cout<<"Please, Enter Your Selection From menu"<<endl;
					    	system("cls");
					    	goto facility_menu; 
						}	 		
				}
			}
void loan(int position)
{
	int loanchoice=0;
		cout<<"Enter your account number  : "<<endl;
     	cin>>User[position].number;
	  	if(User[position].number==User[position].AccountNo)
	    {
		cout<<"***************LOAN POLICES*************** "<<endl;
		cout<<"\t\t\tFollowing Is  The Polices Of The Loan "<<endl<<endl;
		cout<<"\t1. You Have An Account In Our Bank"<<endl<<endl;
		cout<<"\t2. Your Minimun Salary Is 30,000"<<endl<<endl;
		cout<<"\t3. You Should Also Deliver Copy Of Your Property Papers"<<endl<<endl;
		cout<<"\t4. There Should Be Atleast Two Person For -------------"<<endl<<endl;
		cout<<"\t If You Are Agreed With Our Polices Than Select From Menu "<<endl<<endl;
		cout<<"Choose Your selection"<<endl;
		cout<<"1-Press 1 for loan"<<endl;
		cout<<"2.Press 2 for exit"<<endl;
		cout<<"Enter Your Choice "<<endl;
		cin>>loanchoice;
		while(loanchoice==1)
		{
		system("cls");	
		int getloan;
		cout<<"Account Owner name Is "<<User[position].Username<<endl<<endl;
		cout<<"Account Has An Amount of "<<User[position].Amount<<" Rs."<<endl;
		cout<<"\nEnter How Many Amount You Want To get From Bank As Loan : ";
		cin>>getloan;
		cout<<"\nOn Completion Of Request Amount Will Be Added As An Account Balance"<<endl<<endl;
		cout<<"\nYour Request Is Being Proceed..... "<<endl;
		getch();
		cout<<"\n\tLOAN GRANTED"<<endl;
		Beep(250,500);
		User[position].Amount=User[position].Amount+getloan;
		getch();
		cout<<"Account Has An Amount Of "<<User[position].Amount<<" Rs."<<endl; 	
			break;	
		}
		}
		else
		{
			cout<<"\n\tAccount Number Doesnot Exist"<<endl;
			getch();
		}
}						
