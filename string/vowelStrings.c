int inc(char*a){
    int b=strlen(a);
    if((a[0]=='a')||(a[0]=='e')||(a[0]=='i')||(a[0]=='o')||(a[0]=='u')){
        
        if((a[b-1]=='a')||(a[b-1]=='e')||(a[b-1]=='i')||(a[b-1]=='o')||(a[b-1]=='u')){
        return 1;
        }
    }
    return 0;
}
int vowelStrings(char** words, int wordsSize, int left, int right) {
    int sum=0;
    for(int i=left;i<=right;i++){
        if(inc(words[i])){
            sum++;
        }
    }
    return sum;
}
