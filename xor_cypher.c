// 2020_01_09_THU

#include<string.h>
int main()
{
	int i,a ,tmp;
	scanf("%d",&a);
	char *b[a] ;
	char *res[a];
	for(i=0;i<a;i++){
	    b[i] = (char *)malloc(sizeof(char)*100);
	    res[i] = (char *)malloc(sizeof(char)*100);

	    scanf("%s",b[i]);
	}

	for(i=0;i<a;i++){
	  int init = 0;
	  tmp = (strlen(b[i])+1)/2;
	  for(int j=0;j<tmp;j++){
	      if(b[i][j]<=57)
	        {
	         res[i][j] = ((b[i][j]-48)^init);
	         init = (int)(b[i][j]-48);
	         if(res[i][j]<=9) res[i][j]+=48;
	            else res[i][j]+=55;
	        	        }
	        else{
	        res[i][j] = ((b[i][j]-55)^init);
	        init = (int)(b[i][j]-55);
	        if(res[i][j]<=9) res[i][j]+=48;
	            else res[i][j]+=55;
	        }
	  }
	  printf("%s\n",res[i]);
	}
	      
	return 0;
}



#Look up the given Question : https://practice.geeksforgeeks.org/problems/xor-cipher/0
