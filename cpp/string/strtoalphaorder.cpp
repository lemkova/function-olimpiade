#include <cstring>

int strtoalphaorder(string a){
	if(a.length() == 1){
		int order = int(a[0]);
		if(order >= 65 && order <= 90){
			order -= 65;
			return order;
		} 
		else if(order >= 97 && order <= 122){
			order -= (65+32);
			return order;
		}
		else return -1;
	}
	return -1;
}
