/*
/* nama :Dzikri Algiffari
   NPM  :140810180053
   Nama program:
   tanggal buat: 05-03-2019;
*/
*/#include<iostream>
using namespace std;
struct  r_mhs{
	int npm;
	char nama[40];
	float ipk;
};

typedef r_mhs larikMhs[30];

void banyakData(int& n){
	cout<<"banyak data:"; cin>>n;
}

void inputMhs(larikMhs& mhs,int n){
	for(int i=0;i<n;i++){
		cout<<"input mahasiswa ke-"<<i+1<<"="<<endl;
		cout<<"NPM:"; cin>>mhs[i].npm;
		cout<<"nama:";cin.ignore(); cin.getline(mhs[i].nama,40);
		cout<<"IPK:"; cin>>mhs[i].ipk;
	}
	
}
void cetakMhs(larikMhs mhs, int n){
	for(int i=0;i<n,i++;){
		cout<<mhs[i].npm<<endl;
		cout<<mhs[i].nama<<endl;
		cout<<mhs[i].ipk<<endl;
	}
}

void sortNPM(larikMhs& mhs, int n){
	for(int i=0;i<n;i++){
		if(mhs[i].npm>mhs[i+1].npm){
			int temp;
			temp=mhs[i].npm;
			mhs[i].npm=mhs[i+1].npm;
			mhs[i+1].npm=temp;
		}
	}
}
main(){
	larikMhs mhs;
	int x;
	banyakData(x);
	inputMhs(mhs,x);
	sortNPM(mhs,x);
	cetakMhs(mhs,x);
	
}
