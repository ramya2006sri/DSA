there are 2 approaches in this:

1.sort it and u will get last element as largest.
sort(arr.begin(),arr.end());
return arr[arr.size()-1];

2.take max and iterate through the loop.

don't think of 0(n^2) bcz it is not possible to do the sum in the two loops.