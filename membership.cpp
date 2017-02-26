/*membership.cpp
Feb 26, 2017
My__Boo
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int choice, months;
			double total;

			//Constant Variable
			const double ADULT = 35.99;
			const double CHILD = 29.99;
			const double GROUPOF4 = 99.99;

			//setup the output formating
			cout<<fixed<<setprecision(2)<<showpoint;

			do{
				//Menu
				cout<<"Please select the type of membership: "<<endl;
				cout<<"1.Adult membership ($35.99/month)"<<endl;
				cout<<"2.Child membership ($29.99/month)"<<endl;
				cout<<"3.Group of four membership ($99.99/month)"<<endl;
				cout<<"4.Exit"<<endl;
				cin>>choice;

				while(choice < 1 || choice > 4){
					cout<<"Try again! Please select from menu above(1-4)."<<endl;
					cin>>choice;
				}

				if (choice == 4){
					break;
				}

				cout<<"Enter the number of months: "<<endl;
				cin>>months;

				if(choice == 1){
					total = months * ADULT;
				}
				else if (choice == 2){
					total = months * CHILD;
				}
				else if (choice == 3){
					total = months * GROUPOF4;
				}

				cout<<"You will be charge : "<<total<<endl;

			}while(choice != 4);
return 0;
}
