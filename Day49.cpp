class Solution{
public:	
		
	int isDivisible(string s){
	    //complete the function here
	      int n=s.length();
    int c1=0,c2=0;
    for(int i=0;i<n;i+=2){
        if((s[i]-'0')&1) c1++;
    }
    for(int i=1;i<n;i+=2){
        if((s[i]-'0')&1) c2++;
    }
    if((c1-c2)%3==0) return 1;
    return 0;
}
	

};
