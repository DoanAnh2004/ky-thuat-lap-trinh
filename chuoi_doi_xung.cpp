#include<stdio.h>
#include<string.h>

int ktra(char s[], int start, int end){
	if(start>=end) return 1;
	if(s[start]!=s[end]) return 0;
	return ktra(s,start+1,end-1);
}

int main(){
	char s[]="abcdcba";
	int len = strlen(s);
	if(ktra(s,0,len-1)==1) printf("%s la chuoi doi xung",s);
	else {
		printf("%s ko la chuoi doi xung",s);
	}
	return 0;
}
