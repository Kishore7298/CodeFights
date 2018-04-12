function almostIncreasingSequence(sequence) {
  
  let strikes = 0;
    
    let max = -100000;
    let secondMax = -100000;
    
    for (let i = 0; i < sequence.length; i++) {
        if (sequence[i] > max) {
            secondMax = max;
            max = sequence[i];
        } else if (sequence[i] > secondMax) {
            max = sequence[i];
            strikes++;
        } else {
            strikes++;
        }
    }
    
    return strikes < 2;

}
