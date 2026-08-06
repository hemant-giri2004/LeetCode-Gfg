function productOfDigit(n:number){
    let pro:number=1;
    while(n>0){
        let rem=n%10;
        pro*=rem;
        n = Math.floor(n / 10);
    }
    return pro;
}

function smallestNumber(n: number, t: number): number {
    let i=n;
    while(i){
        let result=productOfDigit(i);
        if(result%t==0)
            return i;
        i++;
    }
    return 0;
};