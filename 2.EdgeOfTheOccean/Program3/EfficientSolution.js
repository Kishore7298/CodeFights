function makeArrayConsecutive2(statues) {
   return Math.max.apply(null, statues) - Math.min.apply(null, statues) - statues.length + 1;
}
