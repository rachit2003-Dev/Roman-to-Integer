int romanToInt(char * s){
    int i=0, n=0;
    while(s[i]!='\0')
    {
        if(s[i]=='I')
        {
            if(s[i+1]!='V'&&s[i+1]!='X')
                n+=1;
            else 
            {
                if(s[i+1]=='V')
                    n+=4;
                else if(s[i+1]=='X')
                    n+=9;
                i+=2;
                continue;
            }
        }
        if(s[i]=='V')
            n+=5;
        if(s[i]=='X')
        {
            if(s[i+1]!='L'&&s[i+1]!='C')
                n+=10;
            else 
            {
                if(s[i+1]=='L')
                    n+=40;
                else if(s[i+1]=='C')
                    n+=90;
                i+=2;
                continue;
            }
        }
        if(s[i]=='L')
            n+=50;
        if(s[i]=='C')
        {
            if(s[i+1]!='D'&&s[i+1]!='M')
                n+=100;
            else 
            {
                if(s[i+1]=='D')
                    n+=400;
                else if(s[i+1]=='M')
                    n+=900;
                i+=2;
                continue;
            }
        }
        if(s[i]=='D')
            n+=500;
        if(s[i]=='M')
            n+=1000;
        i++;
    }
    return n;
}
