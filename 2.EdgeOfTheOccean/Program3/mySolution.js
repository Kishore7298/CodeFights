function makeArrayConsecutive2(statues) {
 var rang = statues.sort(function (a, b){
    return (a - b) });
 var some=0;
 if(rang.length-1==0){
  return 0;

 }else{
  for(i=0;i<=rang.length-2;i++){
   some+=(rang[i+1]-rang[i]-1);
 }
  return some;
 }
        
}
