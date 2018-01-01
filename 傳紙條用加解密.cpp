#include <iostream>
using namespace std;

int main()
{
	int watchdogs2 = 0;
	for ( ; watchdogs2 == 0 ; ){
		char num[100];
		for ( int t = 0 ; t < 100 ; t ++ ){
			num[t] = 0;
		}
		int decide, move;
		cout << "加密請輸1，解密請輸2:";
		cin >> decide; 
		if ( decide == 1 ){
			cout << "請問你的垃圾加密要為要位移幾位?";
			cin >> move;
			cout << "請問要加密的內容是?(限制100個字元)";
			cin >> num;
			for ( int t = 0 ; t < 100 ; t ++ ){
				num[t] = num[t] + move;
			}
			for ( int t = 0 ; t < 100 ; t ++ ){
				if ( num [t] == 0 + move){
					num [t] = '\0';
				}
			}
			cout << "加密結果:" << num;
		} 
		if ( decide == 2){
			cout << "請問你的垃圾加密位移了幾位?";
			cin >> move;
			cout << "請問加密過的內容是?(限制100個字元)";
			cin >> num;
			for ( int t = 0 ; t < 100 ; t ++ ){
				num[t] = num[t] - move;
			}
			for ( int t = 0 ; t < 100 ; t ++ ){
				if ( num [t] == 0 - move){
					num [t] = '\0';
				}
			}
			cout << "解密結果:" << num;
		}
		watchdogs2 = 1;
		cout << "\n如要繼續進行加解密動作請輸入0:";
		cin >> watchdogs2;
	}
	system("Pause")	
}
