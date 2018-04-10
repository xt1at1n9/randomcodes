#include <stdio.h>
#include <stdbool.h>
#include <string.h>


int main()
{
	printf("----------Hello World----------\n\n");
    
    char word1[20], word2[20], temp;
    int i ,j,len1,len2;
    bool anagram;

    printf("enter 1st word: ");
    scanf(" %[^\n]",&word1);
    len1 = strlen(word1);
	
	printf("enter 2nd word: ");
	scanf(" %[^\n]",&word2);
    len2 = strlen(word2);
    
    if(len1 != len2) {
        anagram = false;
    }
    else {
        for(i=0;i<len1;i++) {
            for(j=0;j<len1;j++) {
                if(word1[i]>word1[j]) {
                    temp = word1[i];
                    word1[i] = word1[j];
                    word1[j] = temp;
                }
            }
        }
        for(i=0;i<len1;i++) {
            for(j=0;j<len1;j++) {
                if(word2[i]>word2[j]) {
                    temp = word2[i];
                    word2[i] = word2[j];
                    word2[j] = temp;
                }
            }
        }
        for(i=0;i<len1;i++) {
            if(word1[i] != word2[i]) {
                anagram = false;
                break;
            }
            else {
                anagram = true;
            }
        }
        
        
    }
    
    if(anagram == true) {
        printf("The two words are anagrams !");
    } else {
        printf("These words are not anagrams.");
    }
    
    printf("\n\n\n");
    main();

}