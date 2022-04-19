#include<stdio.h>
#include<string.h>
#include<math.h>

int KTSoNguyenTo (int x){
	if(x <= 1) return 0 ;
	for(int i = 2; i <= sqrt(x); i++){
		if(x%i == 0)
		return 0;
	}
	return 1;	
} 

int main(){
	char s[500];
	int len = strlen(s);
	int i=0;
	int ans = 0;
	fgets(s, sizeof(s), stdin);
	while(i<=len+2){
		if(s[i]>='0' && s[i]<='9')
			ans = ans*10 +(s[i] - '0');
		else{
			if(KTSoNguyenTo(ans)) 
				printf("%d ", ans);
			ans = 0;	
		}
		i++;
	}
}