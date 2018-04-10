#include <stdio.h>

void main()
{
	printf("----------Caesar Cipher----------\n");

    char message[80], crypted[80];
    int shift,length,k,l,c;
    char letter[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    
    printf("\nenter your message: ");
    scanf("%[^\n]",&message);
    length = strlen(message);
    
	printf("enter shift number: ");
    scanf("%d",&shift);

	
    for(k=0;k<length;k++) {
        if(message[k] < 97 || message[k] > 122) { //check if the character is a alphabet letter
            crypted[k] = message[k];
        }
        else {
            for(l=0;l<26;l++) { //if alphabet--> apply shift
                if(message[k] == letter[l]) {
                    c = l+shift;
                    if(c<26) {
                        crypted[k]=letter[c];
                    }
                    else if(c>25) {
                    c = c-26;
                        crypted[k]=letter[c];
                    }
                }   
            }
        }
    }
    
    for(k=0;k<length;k++) {
        printf("%c",crypted[k]);
    }

}
