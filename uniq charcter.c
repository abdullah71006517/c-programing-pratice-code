#include<stdio.h>
#include<string.h>
int main() {
    char string[100];
int count=0;
    printf("Enter string: ");
    scanf("%s", string);

printf("\n uniq charater :");
for(int i=0;i<strlen(string);i++){
  for(int j=0;j<strlen(string);j++){
    if(string[i]==string[j])
    count++;
  }
if(count==1)
    printf("%c",string[i]);
  count=0;
}
return 0;
}
