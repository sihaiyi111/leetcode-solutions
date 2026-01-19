int maxScore(char* s) {
    int n=strlen(s);
    int max=0;
    for(int i=1;i<n;i++){
        int sum;
        sum=0;
        for(int j=0;j<i;j++){
            if(s[j]=='0')sum++;
        }
        for(int k=i;k<n;k++){
            if(s[k]=='1')sum++;
        }
        if(sum>max)max=sum;
    }
    return max;
}
