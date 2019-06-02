#include <iostream>
using namespace std;



class Smith{
public:
	int asalToplami(int x){
		int g=x;
		int toplam=0;
		for(int i=2; i<=x; i++){
			if(x%i==0){
				toplam+=i;
				cout<<" •" <<i<<endl;
				x=x/i;
				i--;
			}
		}
		cout << "\n" << g << "Sayisinin asal carpanlar toplami: " << toplam << "\n" << endl;
		cout << "------------------------------------------------\n";
		return toplam;
	}
	int basamaklarToplami(int x){
		int g=x;
		int toplami=0;
		for(int i=0;i<x;i++){
			toplami+=x%10;
			x=x/10;
			i--;
		}
		cout << "\n\n  " <<  g << "Sayisinin basamaklar toplami: " << toplami << "" << endl;
		cout << "------------------------------------------------\n";
		return toplami;
	}




private:
	int x;
};

int main() {
	system("color A");
	int a,b;
	int x;
	cout << "Bu program girilen sayinin smith sayisi olup olmadigini ve mukemmel sayi olup olmadigini kontrol eder.\n" << endl;
	cout << "---------------------------------------------------------------------\n" << endl;
	cout << "Lutfen pozitif bir sayi giriniz(orn: 123): " << endl;
	cin >> x;
	Smith sayi;
	a=sayi.basamaklarToplami(x);
	b=sayi.asalToplami(x);
	if(a==b){
		cout << x << " sayisi bir smith sayisidir.\n" << endl;
	}else if(a!=b){
		cout << x << " sayisi smith sayisi degildir.\n" << endl;
	}if(x==b){
		cout << x << " sayisi mükemmel sayidir.\n" << endl;
	}else if(x!=b){
		cout << x << " sayisi mükemmel sayi degildir.\n" << endl;
	}
	cout << "";


	return 0;
}
