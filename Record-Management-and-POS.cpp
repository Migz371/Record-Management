#include <iostream>
#include <stdio.h>
#include<ctime>
using namespace std;

struct Nike{
	char tshirt[30];
	char shorts[30];
	char shoes[30];	

};

struct Adidas{
	char tshirt[30];
	char shorts[30];
	char shoes[30];
	
};

struct nikeID{ 
	int IDtshirt;
	int IDshorts;
	int IDshoes;
};

struct adidasID{ 
	int IDtshirt;
	int IDshorts;
	int IDshoes;
};

struct nikeQuantity{ 
	int qtshirt;
	int qshorts;
	int qshoes;
};

struct adidasQuantity{ 
	int qtshirt;
	int qshorts;
	int qshoes;
};

struct nikePrice{ 
	int ptshirt;
	int pshorts;
	int pshoes;
};

struct adidasPrice{ 
	int ptshirt;
	int pshorts;
	int pshoes;
};

struct receipt{
	int rprodID;
	char rprodname[30];
	int rquantity;
	int rprice; 
};

int totalbill;
int nshirttotal;
int nshorttotal;
int nshoestotal;

int ashirttotal;
int ashorttotal;
int ashoestotal;


int totalpay; 
int nshirtprice;
int nshortprice;
int nshoesprice;

int ashirtprice; 
int ashortprice;
int ashoesprice;

int idNike;
int payment;

int rcounter;
int totalprod;


int main(){
	nikeID nId[100];
 	nikeQuantity nQuantity[30];
 	nikePrice nPrice[30]; 
	Nike nike[30];  
 	Adidas adidas [30]; 
 	adidasID aId[30];
 	adidasQuantity aQuantity[30];
 	adidasPrice aPrice[30];
 	receipt r[30];
 	
	 int menuans;
	 int nikeshirt = 0, nikeshorts = 0, nikeshoe = 0; 
	 int adidasshirt = 0, adidasshorts = 0, adidasshoe = 0; 
	 string dummy; 
	 int prodid = 20190000;  
	 int deleteid;
	 int firstChoice;
	 char test[100];
	 
	 do{
	FILE * pFile;
	FILE * fcount;
	
	fcount = fopen ("Counter.txt","r");
	fscanf (fcount, "%i, %i, %i, %i, %i, %i, %i,", &prodid, &nikeshirt, &nikeshorts, &nikeshoe, &adidasshirt, &adidasshorts, &adidasshoe);
	fclose(fcount);
	
	pFile = fopen ("niketshirt.txt","r");
	for(int i = 0; i < nikeshirt; i++){
	fscanf (pFile, "%i, %s %i, %i", &nId[i].IDtshirt, nike[i].tshirt, &nQuantity[i].qtshirt, &nPrice[i].ptshirt);
} 	fclose(pFile);

	pFile = fopen ("nikeshort.txt","r");
	for(int i = 0; i < nikeshorts; i++){
	fscanf (pFile, "%i, %s %i, %i", &nId[i].IDshorts, nike[i].shorts, &nQuantity[i].qshorts, &nPrice[i].pshorts);
} 	fclose(pFile);

	pFile = fopen ("nikeshoes.txt","r");
	for(int i = 0; i < nikeshoe; i++){
	fscanf (pFile, "%i, %s %i, %i", &nId[i].IDshoes, nike[i].shoes, &nQuantity[i].qshoes, &nPrice[i].pshoes);
} 	fclose(pFile);

	pFile = fopen ("adidastshirt.txt","r");
	for(int i = 0; i < adidasshirt; i++){
	fscanf (pFile, "%i, %s %i, %i", &aId[i].IDtshirt, adidas[i].tshirt, &aQuantity[i].qtshirt, &aPrice[i].ptshirt);
} 	fclose(pFile);
	
	pFile = fopen ("adidasshort.txt","r");
	for(int i = 0; i < adidasshorts; i++){
	fscanf (pFile, "%i, %s %i, %i", &aId[i].IDshorts, adidas[i].shorts, &aQuantity[i].qshorts, &aPrice[i].pshorts);
} 	fclose(pFile);
 
 	pFile = fopen ("adidasshoes.txt","r");
	for(int i = 0; i < adidasshoe; i++){
	fscanf (pFile, "%i, %s %i, %i", &aId[i].IDshoes, adidas[i].shoes, &aQuantity[i].qshoes, &aPrice[i].pshoes);
} 	fclose(pFile);

 system("CLS");
	cout << "=================================================================================";
	cout << endl << "				MAIN MENU";
	cout << endl << "=================================================================================";
	cout << endl << "1) Record Management";
	cout << endl << "2) Points of Sale";
	cout << endl << "3) Exit";
	cout << endl << "=================================================================================";
	cout << endl << "Enter the number of desired option: ";
	cin >> firstChoice;
	
	if(firstChoice == 1){
	
	system("CLS");
	cout << "=================================================================================";
	cout << endl << "				RECORD MANAGEMENT";
	cout << endl << "=================================================================================";
	cout << endl << "1) Add Product";
	cout << endl << "2) View Products";
	cout << endl << "3) Delete Product";
	cout << endl << "4) Update Product";
	cout << endl << "5) Exit Program";
	cout << endl << "=================================================================================";
	cout << endl << "Enter the number of desired option: ";
	cin >> menuans;
	
	switch(menuans){
		case 1:{ //add
			while(1){
			system("CLS");
			cout << "=================================================================================";
			cout << endl << "				PLEASE SELECT WHAT BRAND";
			cout << endl << "=================================================================================";
			cout << endl << "1) NIKE" << endl << "2) ADIDAS";
			cout << endl << "=================================================================================";
			cout << endl << "Choose: ";
			cin >> menuans;
				switch(menuans){
					case 1:{ //Nike
					system("CLS");
					cout << "=================================================================================";
					cout << endl << "				NIKE";
					cout << endl << "=================================================================================";
					cout << endl << "1) T-Shirt" << endl << "2) Shorts" << endl << "3) Shoes"; 
					cout << endl << "=================================================================================";
					cout << endl << "Please Enter What Product Type: ";
					cin >> menuans;
						switch(menuans){
							case 1:{ //nike tshirt
								system("CLS");
								cout << "=================================================================================";
								cout << endl << "Enter Name of new Tshirt: ";
  									pFile = fopen ("niketshirt.txt","a+");
  									if (pFile!=NULL){
								cin.ignore();
								cin.getline(nike[nikeshirt].tshirt,30) ;
								cout << "Enter Quantity of product: ";
								cin >> nQuantity[nikeshirt].qtshirt;
								cout << "Enter Price: ";
								cin >> nPrice[nikeshirt].ptshirt;
								nId[nikeshirt].IDtshirt = prodid;	
									fprintf (pFile, "%i, %s %i, %i \n", nId[nikeshirt].IDtshirt, nike[nikeshirt].tshirt, nQuantity[nikeshirt].qtshirt, nPrice[nikeshirt].ptshirt);  
 								} fclose (pFile);
								cout << "=================================================================================";
								cout << endl << "Product Successfully Added!";
								cout << endl << "Enter any key to continue: ";
								cin >> dummy;
								fcount = fopen ("Counter.txt", "w+");
								nikeshirt++;
								prodid++;
									fprintf (fcount, "%i, %i, %i, %i, %i, %i, %i",prodid,nikeshirt,nikeshorts,nikeshoe,adidasshirt,adidasshorts,adidasshoe);
									fclose (fcount);
								
								
								break;
								
							}	
							case 2:{ //nike shorts 
								system("CLS");
								cout << "=================================================================================";
								cout << endl << "Enter Name of new Shorts: ";
  									pFile = fopen ("nikeshort.txt","a+");
  									if (pFile!=NULL){								
								cin.ignore();
								cin.getline(nike[nikeshorts].shorts,30);
								cout << "Enter Quantity of Product: ";
								cin >> nQuantity[nikeshorts].qshorts;
								cout << "Enter Price: ";
								cin >> nPrice[nikeshorts].pshorts;
								nId[nikeshorts].IDshorts = prodid;
									fprintf (pFile, "%i, %s %i, %i \n", nId[nikeshorts].IDshorts, nike[nikeshorts].shorts, nQuantity[nikeshorts].qshorts, nPrice[nikeshorts].pshorts);
								} fclose (pFile);
								cout << "=================================================================================";
								cout << endl << "Product Successfully Added!";
								cout << endl << "Enter any key to continue: ";
								cin >> dummy;
								nikeshorts++;
								prodid++;
								fcount = fopen ("Counter.txt","w+");
								fprintf (fcount, "%i, %i, %i, %i, %i, %i, %i",prodid,nikeshirt,nikeshorts,nikeshoe,adidasshirt,adidasshorts,adidasshoe);
									fclose (fcount);
								break;
							}
							case 3:{ //nike shoes 
								system("CLS");
								cout << "=================================================================================";
								cout << endl << "Enter Name of new Shoes: ";
  									pFile = fopen ("nikeshoes.txt","a+");
  									if (pFile!=NULL){
								cin.ignore();
								cin.getline(nike[nikeshoe].shoes,30);
								cout << "Enter Quantity of Product: ";
								cin  >> nQuantity[nikeshoe].qshoes;
								cout << "Enter Price: ";
								cin >> nPrice[nikeshoe].pshoes;
								nId[nikeshoe].IDshoes = prodid;								
									fprintf (pFile, "%i, %s %i, %i \n", nId[nikeshoe].IDshoes, nike[nikeshoe].shoes, nQuantity[nikeshoe].qshoes, nPrice[nikeshoe].pshoes);
								} fclose (pFile);
								cout << "=================================================================================";
								cout << endl << "Product Successfully Added!";
								cout << endl << "Enter any key to continue: ";
								cin >> dummy;
								nikeshoe++;
								prodid++;
								fcount = fopen ("Counter.txt","w+");
								fprintf (fcount, "%i, %i, %i, %i, %i, %i, %i",prodid,nikeshirt,nikeshorts,nikeshoe,adidasshirt,adidasshorts,adidasshoe);
									fclose (fcount);
								break;
							}	
						}
						break;
					}
					case 2:{ //Adidas
					system("CLS");
				cout << "=================================================================================";
					cout << endl << "				ADIDAS";
					cout << endl << "=================================================================================";
					cout << endl << "1) T-Shirt" << endl << "2) Shorts" << endl << "3) Shoes"; 
					cout << endl << "=================================================================================";
					cout << endl << "Please Enter What Product Type: ";
					cin >> menuans;
						switch(menuans){
							case 1:{
								system("CLS");
								cout << "=================================================================================";
								cout << endl << "Enter Name of new Tshirt: ";
  									pFile = fopen ("adidastshirt.txt","a+");
  									if (pFile!=NULL){
								cin.ignore();
								cin.getline(adidas[adidasshirt].tshirt,30);
								cout << "Enter Quantity of Product: ";
								cin >> aQuantity[adidasshirt].qtshirt;
								cout << "Enter Price: ";
								cin >> aPrice[adidasshirt].ptshirt;
								aId[adidasshirt].IDtshirt = prodid;
									fprintf (pFile, "%i, %s %i, %i \n", aId[adidasshirt].IDtshirt, adidas[adidasshirt].tshirt, aQuantity[adidasshirt].qtshirt, aPrice[adidasshirt].ptshirt);  								
								}fclose (pFile);	
								cout << "=================================================================================";
								cout << endl << "Product Successfully Added!";
								cout << endl << "Enter any key to continue: ";
								cin >> dummy;
								adidasshirt++;
								prodid++;
								fcount = fopen ("Counter.txt","w+");
								fprintf (fcount, "%i, %i, %i, %i, %i, %i, %i",prodid,nikeshirt,nikeshorts,nikeshoe,adidasshirt,adidasshorts,adidasshoe);
									fclose (fcount);
								break;
							}	
							case 2:{
								system("CLS");
								cout << "=================================================================================";
								cout << endl << "Enter Name of new Shorts: ";
  									pFile = fopen ("adidasshort.txt","a+");
  									if (pFile!=NULL){
								cin.ignore();
								cin.getline(adidas[adidasshorts].shorts,30);
								cout << "Enter Quantity of Product: ";
								cin >> aQuantity[adidasshorts].qshorts;
								cout << "Enter Price: ";
								cin >> aPrice[adidasshorts].pshorts; 
								aId[adidasshorts].IDshorts = prodid;
									fprintf (pFile, "%i, %s %i, %i \n",aId[adidasshorts].IDshorts, adidas[adidasshorts].shorts, aQuantity[adidasshorts].qshorts, aPrice[adidasshorts].pshorts);  
								}fclose (pFile);
								cout << "=================================================================================";
								cout << endl << "Product Successfully Added!";
								cout << endl << "Enter any key to continue: ";
								cin >> dummy;
								adidasshorts++;
								prodid++;
								fcount = fopen ("Counter.txt","w+");
								fprintf (fcount, "%i, %i, %i, %i, %i, %i, %i",prodid,nikeshirt,nikeshorts,nikeshoe,adidasshirt,adidasshorts,adidasshoe);
									fclose (fcount);
								break;
							}
							case 3:{
								system("CLS");
								cout << "=================================================================================";
								cout << endl << "Enter Name of new Shoes: ";
  									pFile = fopen ("adidasshoes.txt","a+");
  									if (pFile!=NULL){
								cin.ignore();
								cin.getline(adidas[adidasshoe].shoes,30);
								cout << "Enter Quantity of Product: ";
								cin >> aQuantity[adidasshoe].qshoes;
								cout << "Enter Price: ";
								cin >> aPrice[adidasshoe].pshoes;
								aId[adidasshoe].IDshoes = prodid;
									fprintf (pFile, "%i, %s %i, %i \n", aId[adidasshoe].IDshoes, adidas[adidasshoe].shoes, aQuantity[adidasshoe].qshoes, aPrice[adidasshoe].pshoes);  
								}fclose (pFile);
								cout << "=================================================================================";
								cout << endl << "Product Successfully Added!";
								cout << endl << "Enter any key to continue: ";
								cin >> dummy;
								adidasshoe++;
								prodid++;
								fcount = fopen ("Counter.txt","w+");
								fprintf (fcount, "%i, %i, %i, %i, %i, %i, %i",prodid,nikeshirt,nikeshorts,nikeshoe,adidasshirt,adidasshorts,adidasshoe);
									fclose (fcount);
								break;
							}
						}
						break;
					}	
				}
			break;
			}
			break;
		} //end of add 
		case 2:{ //view
			system("CLS");
			cout << "=================================================================================";
			cout << endl << "				PLEASE SELECT WHAT BRAND";
			cout << endl << "=================================================================================";
			cout << endl << "1) NIKE" << endl << "2) ADIDAS";
			cout << endl << "=================================================================================";
			cout << endl << "Choose: ";
				cin >> menuans;
				switch(menuans){
					case 1:{
						system("CLS");
						cout << "=================================================================================";
						cout << endl << "				NIKE";
						cout << endl << "================================================================================="; 
						cout << endl << "			  T-SHIRTS";
							for(int i = 0; i < nikeshirt; i++){ 
								cout << endl << "Product ID: " << nId[i].IDtshirt << endl;  
								cout << "Name:		" << nike[i].tshirt << endl; 
								cout << "Quantity:	" << nQuantity[i].qtshirt << endl;
								cout << "Price:		" << nPrice[i].ptshirt << endl;
									
  									
							}
							cout << endl << "			  SHORTS";
							for(int i = 0; i < nikeshorts; i++){ 
								cout << endl << "Product ID: " << nId[i].IDshorts << endl;
								cout << "Name:		" << nike[i].shorts << endl; 
								cout << "Quantity:	" << nQuantity[i].qshorts << endl;
								cout << "Price:		" << nPrice[i].pshorts << endl;
							}
							cout << endl << "			  SHOES";
							for(int i = 0; i < nikeshoe; i++){ 
								cout << endl << "Product ID: " << nId[i].IDshoes << endl;
								cout << "Name:		" << nike[i].shoes << endl; 
								cout << "Quantity:	" << nQuantity[i].qshoes << endl;
								cout << "Price:		" << nPrice[i].pshoes << endl;
							}
							cout << endl << "================================================================================="; 
							cout << endl << "Please Enter any key to continue: ";
							cin >> dummy;
						break;
					}
					case 2:{
						system("CLS");
						cout << "=================================================================================";
						cout << endl << "				ADIDAS";
						cout << endl << "================================================================================="; 
						cout << endl << "			  T-SHIRTS";
							for(int i = 0; i < adidasshirt; i++){
								cout << endl << "Product ID: " << aId[i].IDtshirt << endl; 
								cout << "Name:		" << adidas[i].tshirt << endl;
								cout << "Quantity:	" << aQuantity[i].qtshirt << endl;
								cout << "Price:		" << aPrice[i].ptshirt << endl; 
							}
							cout << endl << "			  SHORTS";
							for(int i = 0; i < adidasshorts; i++){ 
								cout << endl << "Product ID: " << aId[i].IDshorts << endl;
								cout << "Name:		" << adidas[i].shorts << endl; 
								cout << "Quantity:	" << aQuantity[i].qshorts << endl;
								cout << "Price:		" << aPrice[i].pshorts << endl;
							}
							cout << endl << "			  SHOES";
							for(int i = 0; i < adidasshoe; i++){ 
								cout << endl << "Product ID: " << aId[i].IDshoes << endl;
								cout << "Name:		" << adidas[i].shoes << endl;
								cout << "Quantity:	" << aQuantity[i].qshoes << endl;
								cout << "Price:		" << aPrice[i].pshoes << endl; 
							}
							cout << endl << "=================================================================================";
							cout << endl << "Please Enter any key to continue: ";
							cin >> dummy;
						break;
					}
				
				
				
				}
			
			break;
		} //end of view
		
				case 3:{ //delete
			system("CLS");
			cout << "=================================================================================";
			cout << endl << "				DELETE";
			cout << endl << "=================================================================================";
			cout << endl << "Enter Product ID: ";
			cin >> deleteid; 
			cout << "=================================================================================";	
				// delete for nike t shirt
				for(int i = 0; i < nikeshirt; i++){
					
				
					if(deleteid == nId[i].IDtshirt){
						cout << endl << "			PRODUCT DETAILS";
						cout << endl << "Name:		" << nike[i].tshirt;
						cout << endl << "Quantity:	" << nQuantity[i].qtshirt;
						cout << endl << "Price:		" << nPrice[i].ptshirt; 
						for(int j = i; j < nikeshirt; j++){
				

				memcpy(nike[j].tshirt , nike[j+1].tshirt, sizeof(nike[j+1].tshirt));
				nQuantity[j].qtshirt = nQuantity[j+1].qtshirt;
				nPrice[j].ptshirt = nPrice[j+1].ptshirt;
				nId[j].IDtshirt = nId[j+1].IDtshirt;
				
				
			} //j for loop end
			cout << endl << "=================================================================================";
			cout << endl << "Product Successfully Deleted!" << endl;
			cout << "Enter any key to continue: ";
			cin >> dummy;
				nikeshirt--;

							
					} // if statement to find prodid
	} //for loop of search ID tshirt
					pFile = fopen ("niketshirt.txt","w+");
					for(int i = 0; i < nikeshirt; i++){ 
					fprintf (pFile, "%i, %s %i, %i \n", nId[i].IDtshirt, nike[i].tshirt, nQuantity[i].qtshirt, nPrice[i].ptshirt);  
 								 	}fclose (pFile);
 								 	
					fcount = fopen ("Counter.txt","w+");
					fprintf (fcount, "%i, %i, %i, %i, %i, %i, %i",prodid,nikeshirt,nikeshorts,nikeshoe,adidasshirt,adidasshorts,adidasshoe);
					fclose (fcount);
					
					
				// delete nike shorts 
				for(int i = 0; i < nikeshorts; i++){
				
					if(deleteid == nId[i].IDshorts){
						cout << endl << "			PRODUCT DETAILS";
						cout << endl << "Name:		" << nike[i].shorts;
						cout << endl << "Quantity:	" << nQuantity[i].qshorts;
						cout << endl << "Price:		" << nPrice[i].pshorts;
						for(int j = i; j < nikeshorts; j++){
	
				memcpy(nike[j].shorts , nike[j+1].shorts, sizeof(nike[j+1].shorts));
				nQuantity[j].qshorts = nQuantity[j+1].qshorts;
				nPrice[j].pshorts = nPrice[j+1].pshorts;
				nId[j].IDshorts = nId[j+1].IDshorts;
				
			} //j for loop end
			cout << endl << "=================================================================================";
			cout << endl << "Product Successfully Deleted!" << endl;
			cout << "Enter any key to continue: ";
			cin >> dummy;
				nikeshorts--;
			 	
							
					} // if statement to find prodid
	} //for loop of search ID shorts
					pFile = fopen ("nikeshort.txt","w+");
					for(int i = 0; i < nikeshorts; i++){
					fprintf (pFile, "%i, %s %i, %i \n", nId[i].IDshorts, nike[i].shorts, nQuantity[i].qshorts, nPrice[i].pshorts);  
 								 	}fclose (pFile);
 					fcount = fopen ("Counter.txt","w+");
								fprintf (fcount, "%i, %i, %i, %i, %i, %i, %i",prodid,nikeshirt,nikeshorts,nikeshoe,adidasshirt,adidasshorts,adidasshoe);
								fclose (fcount);
								
								
		 		// delete nike shoes 
				for(int i = 0; i < nikeshoe; i++){
				
					if(deleteid == nId[i].IDshoes){
						cout << endl << "			PRODUCT DETAILS";
						cout << endl << "Name:		" << nike[i].shoes;
						cout << endl << "Quantity:	" << nQuantity[i].qshoes;
						cout << endl << "Price:		" << nPrice[i].pshoes;
						for(int j = i; j < nikeshoe; j++){

				memcpy(nike[j].shoes , nike[j+1].shoes, sizeof(nike[j+1].shoes));
				nQuantity[j].qshoes = nQuantity[j+1].qshoes;
				nPrice[j].pshoes = nPrice[j+1].pshoes;
				nId[j].IDshoes = nId[j+1].IDshoes;
				
			} //j for loop end
			cout << endl << "=================================================================================";
			cout << endl << "Product Successfully Deleted!" << endl;
			cout << "Enter any key to continue: ";
			cin >> dummy;
				nikeshoe--;

				
							
					} // if statement to find prodid
	} //for loop of search ID shoes
					pFile = fopen ("nikeshoes.txt","w+");
						for(int i = 0; i < nikeshoe; i++){
							fprintf (pFile, "%i, %s %i, %i \n", nId[i].IDshoes, nike[i].shoes, nQuantity[i].qshoes, nPrice[i].pshoes);  
 							}fclose (pFile);
 				
				fcount = fopen ("Counter.txt","w+");
					fprintf (fcount, "%i, %i, %i, %i, %i, %i, %i",prodid,nikeshirt,nikeshorts,nikeshoe,adidasshirt,adidasshorts,adidasshoe);
					fclose (fcount);
	

				 // delete adidas shirt 
				for(int i = 0; i < adidasshirt; i++){
				
					if(deleteid == aId[i].IDtshirt){
						cout << endl << "			PRODUCT DETAILS";
						cout << endl << "Name:		" << adidas[i].tshirt;
						cout << endl << "Quantity:	" << aQuantity[i].qtshirt;
						cout << endl << "Price:		" << aPrice[i].ptshirt;
						for(int j = i; j < adidasshirt; j++){

				memcpy(adidas[j].tshirt , adidas[j+1].tshirt, sizeof(adidas[j+1].tshirt));
				aQuantity[j].qtshirt = aQuantity[j+1].qtshirt;
				aPrice[j].ptshirt = aPrice[j+1].ptshirt;
				aId[j].IDtshirt = aId[j+1].IDtshirt;
				
			} //j for loop end
			cout << endl << "=================================================================================";
			cout << endl << "Product Successfully Deleted!" << endl;
			cout << "Enter any key to continue: ";
			cin >> dummy;
				adidasshirt--;
				
					} // if statement to find prodid
	} //for loop of search ID shorts
				
				pFile = fopen ("adidastshirt.txt","w+");
					for(int i = 0; i < adidasshirt; i++){
						fprintf (pFile, "%i, %s %i, %i \n", aId[i].IDtshirt, adidas[i].tshirt, aQuantity[i].qtshirt, aPrice[i].ptshirt);  
 						}fclose (pFile);
 				
				fcount = fopen ("Counter.txt","w+");
					fprintf (fcount, "%i, %i, %i, %i, %i, %i, %i",prodid,nikeshirt,nikeshorts,nikeshoe,adidasshirt,adidasshorts,adidasshoe);
					fclose (fcount);
				
				// delete adidas shorts 
				for(int i = 0; i < adidasshorts; i++){
				
					if(deleteid == aId[i].IDshorts){
						cout << endl << "			PRODUCT DETAILS";
						cout << endl << "Name:		" << adidas[i].shorts;
						cout << endl << "Quantity:	" << aQuantity[i].qshorts;
						cout << endl << "Price:		" << aPrice[i].pshorts;
						for(int j = i; j < adidasshorts; j++){

				memcpy(adidas[j].shorts , adidas[j+1].shorts, sizeof(adidas[j+1].shorts));
				aQuantity[j].qshorts = aQuantity[j+1].qshorts;
				aPrice[j].pshorts = aPrice[j+1].pshorts;
				aId[j].IDshorts = aId[j+1].IDshorts;
				
			} //j for loop end
			cout << endl << "=================================================================================";
			cout << endl << "Product Successfully Deleted!" << endl;
			cout << "Enter any key to continue: ";
			cin >> dummy;
				adidasshorts--;
				

				
				
							
					} // if statement to find prodid
	} //for loop of search ID shorts
				pFile = fopen ("adidasshort.txt","w+");
					for(int i = 0; i < adidasshorts; i++){
						fprintf (pFile, "%i, %s %i, %i \n", aId[i].IDshorts, adidas[i].shorts, aQuantity[i].qshorts, aPrice[i].pshorts);  
 						}fclose (pFile);
 				
				fcount = fopen ("Counter.txt","w+");
					fprintf (fcount, "%i, %i, %i, %i, %i, %i, %i",prodid,nikeshirt,nikeshorts,nikeshoe,adidasshirt,adidasshorts,adidasshoe);
					fclose (fcount);
		
		// delete adidas shoes 
				for(int i = 0; i < adidasshoe; i++){
				
					if(deleteid == aId[i].IDshoes){
						cout << endl << "			PRODUCT DETAILS";
						cout << endl << "Name:		" << adidas[i].shoes;
						cout << endl << "Quantity:	" << aQuantity[i].qshoes;
						cout << endl << "Price:		" << aPrice[i].pshoes;
						for(int j = i; j < adidasshoe; j++){

				memcpy(adidas[j].shoes , adidas[j+1].shoes, sizeof(adidas[j+1].shoes));
				aQuantity[j].qshoes = aQuantity[j+1].qshoes;
				aPrice[j].pshoes = aPrice[j+1].pshoes;
				aId[j].IDshoes = aId[j+1].IDshoes;
				
			} //j for loop end
			cout << endl << "=================================================================================";
			cout << endl << "Product Successfully Deleted!" << endl;
			cout << "Enter any key to continue: ";
			cin >> dummy;
				adidasshoe--;
				
							
					}// if statement to find prodid 
	} //for loop of search ID shoes
				pFile = fopen ("adidasshoes.txt","w+");
					for(int i = 0; i < adidasshoe; i++){ 
						fprintf (pFile, "%i, %s %i, %i \n", aId[i].IDshoes, adidas[i].shoes, aQuantity[i].qshoes, aPrice[i].pshoes);  
 						}fclose (pFile);
 				
				fcount = fopen ("Counter.txt","w+"); 
					fprintf (fcount, "%i, %i, %i, %i, %i, %i, %i",prodid,nikeshirt,nikeshorts,nikeshoe,adidasshirt,adidasshorts,adidasshoe);
					fclose (fcount);
			
				
			break;
		}//end of delete
	
	
		case 4:{ //UPDATE
		system("CLS");
			cout << "=================================================================================";
			cout << endl << "				UPDATE";
			cout << endl << "=================================================================================";
			cout << endl << "Enter Product ID: ";
			cin >> deleteid; // deleteID is same as "What ID to search" 
			cout << "================================================================================="; 
			// Update for nike t shirt
				for(int i = 0; i < nikeshirt; i++){
					if(deleteid == nId[i].IDtshirt){
						do{
						system("CLS");
						cout << "=================================================================================";
						cout << endl << "PRODUCT DETAILS";
						cout << endl << "Name:		" << nike[i].tshirt;
						cout << endl << "Quantity:	" << nQuantity[i].qtshirt;
						cout << endl << "Price:		" << nPrice[i].ptshirt; 
						cout << endl << "=================================================================================";	
						cout << endl << endl << "Record Details:";
						cout << endl << "1) Product Name";
						cout << endl << "2) Product Quantity";
						cout << endl << "3) Product Price";
						cout << endl << "4) Return";
						cout << endl << "=================================================================================";
						cout << endl << "Choose option: ";
						cin >> menuans;
							switch(menuans){
								case 1:{
									int j = i;
									cout << "Enter New Product Name: ";
									cin.ignore();
									cin.getline(nike[j].tshirt,30);
									cout << "Product Name Successfully Changed!" << endl;
									break;
								}
								case 2:{
									int j = i;
									cout << "Enter New Product Quantity: ";
									cin >> nQuantity[j].qtshirt;
									cout << "Quantity Successfully Changed!" << endl;
									break;
								}
								case 3:{
									int j = i;
									cout << "Enter New Product Price: ";
									cin >> nPrice[j].ptshirt;
									cout << "Price Successfully Changed!" << endl;
									break;
								}
										
							}
							}while(menuans != 4);
							
							pFile = fopen ("niketshirt.txt","w+");
								for(int i = 0; i < nikeshirt; i++){
									fprintf (pFile, "%i, %s %i, %i \n", nId[i].IDtshirt, nike[i].tshirt, nQuantity[i].qtshirt, nPrice[i].ptshirt);  
 								 	}fclose (pFile);
						} // id search t shirt
}	// end of update nike tshirt
					
					//update Nike shorts 
					for(int i = 0; i < nikeshorts; i++){
					if(deleteid == nId[i].IDshorts){
						do{
						system("CLS");
						cout << "=================================================================================";
						cout << endl << "PRODUCT DETAILS";
						cout << endl << "Name:		" << nike[i].shorts;
						cout << endl << "Quantity:	" << nQuantity[i].qshorts;
						cout << endl << "Price:		" << nPrice[i].pshorts; 
						cout << endl << "=================================================================================";	
						cout << endl << endl << "Record Details:";
						cout << endl << "1) Product Name";
						cout << endl << "2) Product Quantity";
						cout << endl << "3) Product Price";
						cout << endl << "4) Return";
						cout << endl << "=================================================================================";
						cout << endl << "Choose option: ";
						cin >> menuans;
							switch(menuans){
								case 1:{
									int j = i;
									cout << "Enter New Product Name: ";
									cin.ignore();
									cin.getline(nike[j].shorts,30);
									cout << "Product Name Successfully Changed!" << endl;
									break;
								}
								case 2:{
									int j = i;
									cout << "Enter New Product Quantity: ";
									cin >> nQuantity[j].qshorts;
									cout << "Quantity Successfully Changed!" << endl;
									break;
								}
								case 3:{
									int j = i;
									cout << "Enter New Product Price: ";
									cin >> nPrice[j].pshorts;
									cout << "Price Successfully Changed!" << endl;
									break;
								}
								
							}
							}while(menuans != 4);
							
							pFile = fopen ("nikeshort.txt","w+");
								for(int i = 0; i < nikeshorts; i++){
									fprintf (pFile, "%i, %s %i, %i \n", nId[i].IDshorts, nike[i].shorts, nQuantity[i].qshorts, nPrice[i].pshorts);  
 								 	}fclose (pFile);
					} // id search end 
				} // Update Nike Shorts End
				
				
						//update Nike shoes 
					for(int i = 0; i < nikeshoe; i++){
					if(deleteid == nId[i].IDshoes){
						do{
						system("CLS");
						cout << "=================================================================================";
						cout << endl << "PRODUCT DETAILS";
						cout << endl << "Name:		" << nike[i].shoes;
						cout << endl << "Quantity:	" << nQuantity[i].qshoes;
						cout << endl << "Price:		" << nPrice[i].pshoes; 
						cout << endl << "=================================================================================";	
						cout << endl << endl << "Record Details:";
						cout << endl << "1) Product Name";
						cout << endl << "2) Product Quantity";
						cout << endl << "3) Product Price";
						cout << endl << "4) Return";
						cout << endl << "=================================================================================";
						cout << endl << "Choose option: ";
						cin >> menuans;
							switch(menuans){
								case 1:{
									int j = i;
									cout << "Enter New Product Name: ";
									cin.ignore();
									cin.getline(nike[j].shoes,30);
									cout << "Product Name Successfully Changed!" << endl;
									break;
								}
								case 2:{
									int j = i;
									cout << "Enter New Product Quantity: ";
									cin >> nQuantity[j].qshoes;
									cout << "Quantity Successfully Changed!" << endl;
									break;
								}
								case 3:{
									int j = i;
									cout << "Enter New Product Price: ";
									cin >> nPrice[j].pshoes;
									cout << "Price Successfully Changed!" << endl;
									break;
								}
								
							}
							}while(menuans != 4);
							
							pFile = fopen ("nikeshoes.txt","w+");
								for(int i = 0; i < nikeshoe; i++){
									fprintf (pFile, "%i, %s %i, %i \n", nId[i].IDshoes, nike[i].shoes, nQuantity[i].qshoes, nPrice[i].pshoes);  
 								 	}fclose (pFile);
					}  // id search end 
			}// Update Nike Shoes End

							//update Adidas shirt 
					for(int i = 0; i < adidasshirt; i++){
					if(deleteid == aId[i].IDtshirt){
						do{
						system("CLS");
						cout << "=================================================================================";
						cout << endl << "PRODUCT DETAILS";
						cout << endl << "Name:		" << adidas[i].tshirt;
						cout << endl << "Quantity:	" << aQuantity[i].qtshirt;
						cout << endl << "Price:		" << aPrice[i].ptshirt; 
						cout << endl << "=================================================================================";	
						cout << endl << endl << "Record Details:";
						cout << endl << "1) Product Name";
						cout << endl << "2) Product Quantity";
						cout << endl << "3) Product Price";
						cout << endl << "4) Return";
						cout << endl << "=================================================================================";
						cout << endl << "Choose option: ";
						cin >> menuans;
							switch(menuans){
								case 1:{
									int j = i;
									cout << "Enter New Product Name: ";
									cin.ignore();
									cin.getline(adidas[j].tshirt,30);
									cout << "Product Name Successfully Changed!" << endl;
									break;
								}
								case 2:{
									int j = i;
									cout << "Enter New Product Quantity: ";
									cin >> aQuantity[j].qtshirt;
									cout << "Quantity Successfully Changed!" << endl;
									break;
								}
								case 3:{
									int j = i;
									cout << "Enter New Product Price: ";
									cin >> aPrice[j].ptshirt;
									cout << "Price Successfully Changed!" << endl;
									break;
								}
								
							}
							}while(menuans != 4);
							
							pFile = fopen ("adidastshirt.txt","w+");
								for(int i = 0; i < adidasshirt; i++){
									fprintf (pFile, "%i, %s %i, %i \n", aId[i].IDtshirt, adidas[i].tshirt, aQuantity[i].qtshirt, aPrice[i].ptshirt);  
 								 	}fclose (pFile);
 								 	
					}  // id search end 
			}// Update Adidas shirt End
			
				//update Adidas short 
					for(int i = 0; i < adidasshorts; i++){
					if(deleteid == aId[i].IDshorts){
						do{
						system("CLS");
						cout << "=================================================================================";
						cout << endl << "PRODUCT DETAILS";
						cout << endl << "Name:		" << adidas[i].shorts;
						cout << endl << "Quantity:	" << aQuantity[i].qshorts;
						cout << endl << "Price:		" << aPrice[i].pshorts; 
						cout << endl << "=================================================================================";	
						cout << endl << endl << "Record Details:";
						cout << endl << "1) Product Name";
						cout << endl << "2) Product Quantity";
						cout << endl << "3) Product Price";
						cout << endl << "4) Return";
						cout << endl << "=================================================================================";
						cout << endl << "Choose option: ";
						cin >> menuans;
							switch(menuans){
								case 1:{
									int j = i;
									cout << "Enter New Product Name: ";
									cin.ignore();
									cin.getline(adidas[j].shorts,30);
									cout << "Product Name Successfully Changed!" << endl;
									break;
								}
								case 2:{
									int j = i;
									cout << "Enter New Product Quantity: ";
									cin >> aQuantity[j].qshorts;
									cout << "Quantity Successfully Changed!" << endl;
									break;
								}
								case 3:{
									int j = i;
									cout << "Enter New Product Price: ";
									cin >> aPrice[j].pshorts;
									cout << "Price Successfully Changed!" << endl;
									break;
								}
								
							}
							}while(menuans != 4);
							
							pFile = fopen ("adidasshort.txt","w+");
								for(int i = 0; i < adidasshorts; i++){
									fprintf (pFile, "%i, %s %i, %i \n", aId[i].IDshorts, adidas[i].shorts, aQuantity[i].qshorts, aPrice[i].pshorts);  
 								 	}fclose (pFile);
 								 	
					}  // id search end 
			}// Update Adidas shorts End

				//update Adidas shoes 
					for(int i = 0; i < adidasshoe; i++){
					if(deleteid == aId[i].IDshoes){
						do{
						system("CLS");
						cout << "=================================================================================";
						cout << endl << "PRODUCT DETAILS";
						cout << endl << "Name:		" << adidas[i].shoes;
						cout << endl << "Quantity:	" << aQuantity[i].qshoes;
						cout << endl << "Price:		" << aPrice[i].pshoes; 
						cout << endl << "=================================================================================";	
						cout << endl << endl << "Record Details:";
						cout << endl << "1) Product Name";
						cout << endl << "2) Product Quantity";
						cout << endl << "3) Product Price";
						cout << endl << "4) Return";
						cout << endl << "=================================================================================";
						cout << endl << "Choose option: ";
						cin >> menuans;
							switch(menuans){
								case 1:{
									int j = i;
									cout << "Enter New Product Name: ";
									cin.ignore();
									cin.getline(adidas[j].shoes,30);
									cout << "Product Name Successfully Changed!" << endl;
									break;
								}
								case 2:{
									int j = i;
									cout << "Enter New Product Quantity: ";
									cin >> aQuantity[j].qshoes;
									cout << "Quantity Successfully Changed!" << endl;
									break;
								}
								case 3:{
									int j = i;
									cout << "Enter New Product Price: ";
									cin >> aPrice[j].pshoes;
									cout << "Price Successfully Changed!" << endl;
									break;
								}
								
							}
							}while(menuans != 4);
							
							pFile = fopen ("adidasshoes.txt","w+");
								for(int i = 0; i < adidasshoe; i++){
									fprintf (pFile, "%i, %s %i, %i \n", aId[i].IDshoes, adidas[i].shoes, aQuantity[i].qshoes, aPrice[i].pshoes);  
 								 	}fclose (pFile);
 								 	
					}  // id search end 
			}// Update Adidas shoes End


					break;
} // update end
		break;
	} // switch end 
}else if(firstChoice == 2){
	system("CLS");
	cout << "=================================================================================";
	cout << endl << "				POINT OF SALE";
	cout << endl << "=================================================================================";
	cout << endl << "1) Purchase";
	cout << endl << "2) Payment";
	cout << endl << "3) Receipt";
	cout << endl << "=================================================================================";
	cout << endl << "Enter the number of desired option: ";
	cin >> menuans;
		if(menuans == 1){
			system("CLS");
			int purChoice;//purchase choice
			cout << "=================================================================================";
			cout << endl << "				PURCHASE";
			cout << endl << "=================================================================================";
			cout << endl << "1) Nike";
			cout << endl << "2) Adidas";
			cout << endl << "=================================================================================";
			cout << endl << "Enter the number of desired option: ";
			cin >> purChoice;
				
				if(purChoice == 1){
					rcounter = 0;
					nshirttotal = 0;
					nshorttotal = 0;
					nshoestotal = 0;
					ashirttotal = 0;
					ashorttotal = 0;
					ashoestotal = 0; 
					while(1){
					system("CLS");
					int purNike;// purchase nike
						cout << "=================================================================================";
						cout << endl << "				NIKE";
						cout << endl << "=================================================================================";
						cout << endl << "1) Nike T-Shirts";
						cout << endl << "2) Nike Shorts";
						cout << endl << "3) Nike Shoes"; 
						cout << endl << "4) Proceed to Payment";
						cout << endl << "=================================================================================";
						cout << endl << "Enter the number of desired option: ";
						cin >> purNike;
							if(purNike == 1){
								system("CLS");
								int tNike;//variable for purchase of tshirt nike
								int idNike;
								int idNikeshirt;
									cout << "=================================================================================";
									cout << endl << "				NIKE T-SHIRTS";
									cout << endl << "=================================================================================";
											cout << endl << "Instruction to Purchase: " << endl << "Enter product ID to purchase " << endl << "Press 1 to skip the product";
									cout << endl << "=================================================================================";
										for(int i = 0; i < nikeshirt; i++){ //view nike T-shirts loop
											cout << endl << "Product ID: " << nId[i].IDtshirt << endl;  
											cout << "Name:		" << nike[i].tshirt << endl; 
											cout << "Quantity:	" << nQuantity[i].qtshirt << endl;
											cout << "Price:		" << nPrice[i].ptshirt << endl;
											cout << "Enter input: ";
											cin >> idNikeshirt;	
											cout << endl << "=================================================================================";
												if(idNikeshirt == nId[i].IDtshirt){
												cout << endl << "Enter Quantity: ";
											cin >> idNike;
												if(idNike <= nQuantity[i].qtshirt){
													nQuantity[i].qtshirt -= idNike;
													nshirttotal += (nPrice[i].ptshirt * idNike);
						
													r[rcounter].rprodID = nId[i].IDtshirt;
													memcpy(r[rcounter].rprodname , nike[i].tshirt, sizeof(nike[i].tshirt));
													r[rcounter].rprice = nPrice[i].ptshirt;
													r[rcounter].rquantity = idNike;
													rcounter++;							 
												}
												
											}
													
							}																
								
							}
									
							if(purNike == 2){
								system("CLS");
								int sNike;//variable for purchase of short nike
								int idNike;
								int idNikeshirt;
									cout << "=================================================================================";
									cout << endl << "				NIKE SHORTS";
									cout << endl << "=================================================================================";
												cout << endl << "Instruction to Purchase: " << endl << "Enter product ID to purchase " << endl << "Press 1 to skip the product";
									cout << endl << "=================================================================================";
										for(int i = 0; i < nikeshorts; i++){ //view nike shorts loop
											cout << endl << "Product ID: " << nId[i].IDshorts << endl;  
											cout << "Name:		" << nike[i].shorts << endl; 
											cout << "Quantity:	" << nQuantity[i].qshorts << endl;
											cout << "Price:		" << nPrice[i].pshorts << endl;
											cout << "Enter input: ";
											cin >> idNikeshirt;	
											cout << endl << "=================================================================================";
												if(idNikeshirt == nId[i].IDshorts){
												cout << endl << "Enter Quantity: ";
											cin >> idNike;
												if(idNike <= nQuantity[i].qshorts){
													nQuantity[i].qshorts -= idNike;
													nshorttotal += (nPrice[i].pshorts * idNike);
													
													r[rcounter].rprodID = nId[i].IDshorts;
													memcpy(r[rcounter].rprodname , nike[i].shorts, sizeof(nike[i].shorts));
													r[rcounter].rprice = nPrice[i].pshorts;
													r[rcounter].rquantity = idNike;
													rcounter++;		
												}
											}
													
							}		
																					
									cout << endl << "=================================================================================";
									cout << endl << "Press any key to continue: ";
									cin >> dummy;																
								
							}
								if(purNike == 3){
								system("CLS");
								int shNike;//variable for purchase of shoes nike
								int idNike;
								int idNikeshirt; // input quantity
									cout << "=================================================================================";
									cout << endl << "				NIKE SHOES";
									cout << endl << "=================================================================================";
										cout << endl << "Instruction to Purchase: " << endl << "Enter product ID to purchase " << endl << "Press 1 to skip the product";
									cout << endl << "=================================================================================";
										for(int i = 0; i < nikeshoe; i++){ //view nike shoes loop
											cout << endl << "Product ID: " << nId[i].IDshoes << endl;  
											cout << "Name:		" << nike[i].shoes << endl; 
											cout << "Quantity:	" << nQuantity[i].qshoes << endl;
											cout << "Price:		" << nPrice[i].pshoes << endl;
											cout << "Enter input: ";
											cin >> idNikeshirt;	
											cout << endl << "=================================================================================";
												if(idNikeshirt == nId[i].IDshoes){
												cout << endl << "Enter Quantity: ";
											cin >> idNike;
												if(idNike <= nQuantity[i].qshoes){
													nQuantity[i].qshoes -= idNike;
													nshoestotal += (nPrice[i].pshoes * idNike);
													
													r[rcounter].rprodID = nId[i].IDshoes;
													memcpy(r[rcounter].rprodname , nike[i].shoes, sizeof(nike[i].shoes));
													r[rcounter].rprice = nPrice[i].pshoes;
													r[rcounter].rquantity = idNike;
													rcounter++;		
												}
											}
													
							}																
									cout << endl << "=================================================================================";
									cout << endl << "Press any key to continue: ";
									cin >> dummy;																
									
							}
								if(purNike == 4){
									break;
								}
						
				}
			}
				if(purChoice == 2){
					while(1){
					system("CLS");
					rcounter = 0;
					nshirttotal = 0;
					nshorttotal = 0;
					nshoestotal = 0;
					ashirttotal = 0;
					ashorttotal = 0;
					ashoestotal = 0; 
					int purAdidas;// purchase adidas
						cout << "=================================================================================";
						cout << endl << "				ADIDAS";
						cout << endl << "=================================================================================";
						cout << endl << "1) Adidas T-Shirts";
						cout << endl << "2) Adidas Shorts";
						cout << endl << "3) Adidas Shoes";
						cout << endl << "4) Proceed to payment"; 
						cout << endl << "=================================================================================";
						cout << endl << "Enter the number of desired option: ";
						cin >> purAdidas;			
					
								if(purAdidas == 1){
								system("CLS");
								int tAdidas;//variable for purchase of tshirt nike
								int idAdidas;
								int idAdidasshirt;
									cout << "=================================================================================";
									cout << endl << "				ADIDAS T-SHIRTS";
									cout << endl << "=================================================================================";
									cout << endl << "Instruction to Purchase: " << endl << "Enter product ID to purchase " << endl << "Press 1 to skip the product";
									cout << endl << "=================================================================================";
						for(int i = 0; i < adidasshirt; i++){ //view adidas T-shirts loop
								cout << endl << "Product ID: " << aId[i].IDtshirt << endl; 
								cout << "Name:		" << adidas[i].tshirt << endl;
								cout << "Quantity:	" << aQuantity[i].qtshirt << endl;
								cout << "Price:		" << aPrice[i].ptshirt << endl; 
								cout << "Enter input: ";
											cin >> idAdidasshirt;	
											cout << endl << "=================================================================================";
												if(idAdidasshirt == aId[i].IDtshirt){
												cout << endl << "Enter Quantity: ";
											cin >> idAdidas;
												if(idAdidas < aQuantity[i].qtshirt){
													aQuantity[i].qtshirt -= idAdidas;
													ashirttotal += (aPrice[i].ptshirt * idAdidas);
													r[rcounter].rprodID = aId[i].IDtshirt;
													memcpy(r[rcounter].rprodname , adidas[i].tshirt, sizeof(adidas[i].tshirt));
													r[rcounter].rprice = aPrice[i].ptshirt;
													r[rcounter].rquantity = idAdidas;
													rcounter++;		
												}
											}
													
							}
									cout << endl << "=================================================================================";
									cout << endl << "Press any key to continue: ";
									cin >> dummy;
								
							}
								if(purAdidas == 2){
								system("CLS");
								int sAdidas;//variable for purchase of short adidas
								int idAdidas;
								int idAdidasshorts;
									cout << "=================================================================================";
									cout << endl << "				ADIDAS SHORTS";
									cout << endl << "=================================================================================";
										cout << endl << "Instruction to Purchase: " << endl << "Enter product ID to purchase " << endl << "Press 1 to skip the product";
									cout << endl << "=================================================================================";
						for(int i = 0; i < adidasshorts; i++){ //view adidas shorts loop
								cout << endl << "Product ID: " << aId[i].IDshorts << endl; 
								cout << "Name:		" << adidas[i].shorts << endl;
								cout << "Quantity:	" << aQuantity[i].qshorts << endl;
								cout << "Price:		" << aPrice[i].pshorts << endl; 
								cout << "Enter input: ";
											cin >> idAdidasshorts;	
											cout << endl << "=================================================================================";
												if(idAdidasshorts == aId[i].IDshorts){
												cout << endl << "Enter Quantity: ";
											cin >> idAdidas;
												if(idAdidas < aQuantity[i].qshorts){
													aQuantity[i].qshorts -= idAdidas;
													ashorttotal += (aPrice[i].pshorts * idAdidas);
													r[rcounter].rprodID = aId[i].IDshorts;
													memcpy(r[rcounter].rprodname , adidas[i].shorts, sizeof(adidas[i].shorts));
													r[rcounter].rprice = aPrice[i].pshorts;
													r[rcounter].rquantity = idAdidas;											
												}
											}
													
							}
								cout << endl << "=================================================================================";
									cout << endl << "Press any key to continue: ";
									cin >> dummy;																
									
							}
								if(purAdidas == 3){
								system("CLS");
								int shAdidas;//variable for purchase of shoes adidas
								int idAdidas;
								int idAdidasshoes;
									cout << "=================================================================================";
									cout << endl << "				ADIDAS SHOES";
									cout << endl << "=================================================================================";
									cout << endl << "Instruction to Purchase: " << endl << "Enter product ID to purchase " << endl << "Press 1 to skip the product";
									cout << endl << "=================================================================================";
						for(int i = 0; i < adidasshoe; i++){ //view adidas shorts loop
								cout << endl << "Product ID: " << aId[i].IDshoes << endl; 
								cout << "Name:		" << adidas[i].shoes << endl;
								cout << "Quantity:	" << aQuantity[i].qshoes << endl;
								cout << "Price:		" << aPrice[i].pshoes << endl; 
								cout << "Enter input: ";
											cin >> idAdidasshoes;	
											cout << endl << "=================================================================================";
												if(idAdidasshoes == aId[i].IDshoes){
												cout << endl << "Enter Quantity: ";
											cin >> idAdidas;
												if(idAdidas < aQuantity[i].qshoes){
													aQuantity[i].qshoes -= idAdidas;
													ashoestotal += (aPrice[i].pshoes * idAdidas);
													r[rcounter].rprodID = aId[i].IDshoes;
													memcpy(r[rcounter].rprodname , adidas[i].shoes, sizeof(adidas[i].shoes));
													r[rcounter].rprice = aPrice[i].ptshirt;
													r[rcounter].rquantity = idAdidas;
												}
											}
													
							}
								cout << endl << "=================================================================================";
									cout << endl << "Press any key to continue: ";
									cin >> dummy;				
									cout << endl << "=================================================================================";
									cout << endl << "Enter the number of desired option: ";
									cin >> shAdidas;
			}
						if(purAdidas == 4){
							break;
						}
		}
	}
		}
			if(menuans == 2){
				
				
				system("CLS");
				int payChoice;//payment choice
			cout << "=================================================================================";
			cout << endl << "				PAYMENT";
			cout << endl << "=================================================================================";
			cout << endl << "1) Cash on Delivery";
			cout << endl << "2) Exit";
			cout << endl << "=================================================================================";
			cout << endl << "Enter the number of desired option: ";
			cin >> payChoice;
				if(payChoice == 1){
						system("CLS");
						int cashPay;
						cout << "=================================================================================";
						cout << endl << "				CASH on DELIVERY";
						cout << endl << "=================================================================================";
						cout << endl << "1) Total Amount: ";
						totalbill = (nshirttotal + nshorttotal + nshoestotal + ashirttotal + ashorttotal + ashoestotal);
						cout  << totalbill;
						cout << endl << "2) Payment: ";
						cin >> payment;
						
						if(payment > totalbill){
							cout <<"3) Change: " <<  payment - totalbill;
						}else if(payment < totalbill){
							cout  << "Insuffient Payment" << endl;
								while(payment < totalbill){
									cout << "Payment: ";
									cin >> payment;
									
								}
									cout <<"3) Change: " <<  payment - totalbill;
						}	
						
						
																		
						cout << endl << "=================================================================================";
						cout << endl << "Enter any key to continue: ";
						cin >> dummy;
				}
				if(payChoice == 2){
					system("CLS");
					cout << "Back to Main Menu(Press 1): ";
					cin >>dummy;
				}
			}
			
			if(menuans == 3){
					system("CLS");
			int purChoice;//purchase choice
			cout << "=================================================================================";
			cout << endl << "				RECEIPT";
			cout << endl << "=================================================================================";
					time_t currenttime = time(0);
					tm* ltm = localtime(&currenttime);
	
					int year = 1900 + ltm->tm_year;
					int month = 1 + ltm->tm_mon;
					int day = ltm->tm_mday;
	
			cout << endl << "DATE: " << month << "/" << day << "/" << year;
			cout << endl << "ITEMS:" << endl; 
				for(int i = 0; i < rcounter; i++){
					cout << endl << r[i].rprodID << endl << r[i].rprodname << endl << "Quantity: " << r[i].rquantity << endl << "Price: "<< r[i].rprice << endl ;
				}			
			cout << endl << "TOTAL BILL: "  << totalbill;
			cout << endl << "TOTAL PAYMENT: "  << payment;
			cout << endl << "CHANGE : "  <<  payment - totalbill;
			cout << endl << "THANK YOU FOR SHOPPING!"; 
			
			cout << endl << "=================================================================================";
			cout << endl << "Enter any key to continue: ";
			cin >> dummy;
			}
			
		pFile = fopen ("niketshirt.txt","w+");	
		for(int i = 0; i < nikeshirt; i++){
		fprintf (pFile, "%i, %s %i, %i \n", nId[i].IDtshirt, nike[i].tshirt, nQuantity[i].qtshirt, nPrice[i].ptshirt);
} 		fclose(pFile);

		pFile = fopen ("nikeshort.txt","w+");
		for(int i = 0; i < nikeshorts; i++){
		fprintf (pFile, "%i, %s %i, %i \n", nId[i].IDshorts, nike[i].shorts, nQuantity[i].qshorts, nPrice[i].pshorts);
} 		fclose(pFile);

		pFile = fopen ("nikeshoes.txt","w+");
		for(int i = 0; i < nikeshoe; i++){
		fprintf (pFile, "%i, %s %i, %i \n", nId[i].IDshoes, nike[i].shoes, nQuantity[i].qshoes, nPrice[i].pshoes);
} 		fclose(pFile);

		pFile = fopen ("adidastshirt.txt","w+");
		for(int i = 0; i < adidasshirt; i++){
		fprintf (pFile, "%i, %s %i, %i \n", aId[i].IDtshirt, adidas[i].tshirt, aQuantity[i].qtshirt, aPrice[i].ptshirt);
} 		fclose(pFile);
	
		pFile = fopen ("adidasshort.txt","w+");
		for(int i = 0; i < adidasshorts; i++){
		fprintf (pFile, "%i, %s %i, %i \n", aId[i].IDshorts, adidas[i].shorts, aQuantity[i].qshorts, aPrice[i].pshorts);
} 		fclose(pFile);
 
 		pFile = fopen ("adidasshoes.txt","w+");
		for(int i = 0; i < adidasshoe; i++){
		fprintf (pFile, "%i, %s %i, %i \n", aId[i].IDshoes, adidas[i].shoes, aQuantity[i].qshoes, aPrice[i].pshoes);
} 		fclose(pFile);
			

}

if(firstChoice == 3){
	break;
}
	
	
	
	}while(menuans != 5);
	
	
	
	
	return 0;
	
	 }













