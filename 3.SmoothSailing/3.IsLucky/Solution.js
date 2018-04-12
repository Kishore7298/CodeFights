function isLucky(n) {
    let v = n.toString();
    let w = v.length/2;
    let x = parseInt(v.substring(0,w));
    let y = parseInt(v.substring(w,v.length));
    let xsum=0;
    let digit;
    while(x!=0)
    {
      digit = x% 10;
      xsum = xsum+ digit;
        x=x/10;
    }
    
    let ysum=0;
    while(y!=0)
    {
      digit = y % 10;
      ysum = ysum+ digit;
        y=y/10;
    }
    //return parseInt(xsum);
    if(parseInt(xsum) == parseInt(ysum))
      return true;
    else
        return false;
        
}
